// Q3. Stack is a Last-In-First-Out data structure. Write a Stack class that stores int type of data. It 
// implements stack using Dynamically allocated array. Stack size should be passed in parameterized 
// constructor. If size is not given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int *ptr;
    int size;    


    public:
    stack(){
        size=5;
        this->ptr=new int[size];
        this->top=-1;
    }
    stack(int size){
        this->size=size;
        this->ptr=new int[size];
        this->top=-1;
    }
    
    void push(int ele){
        ++this->top;
        ptr[top]=ele;
    }
    void pop(){
        --this->top;
    }
    int peek(){
        return ptr[top];
    }
    bool isEmpty(){
        if(top==-1)
          return true;
         return false;
    }
    bool isFull(){
        if(top==size-1)
            return true;
        return false;
    }
    void print(){
        for(int i=0;i<=top;i++)
        cout<<ptr[i]<<endl;
    }

};

int main(){
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<"topmost element : "<<s1.peek()<<endl;
    s1.pop();
    s1.print();
    s1.isEmpty();
    // stack s2(10);
    // s2.push(1);
    // s2.push(2);
    // s2.peek();
 
    return 0;
}