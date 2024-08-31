// Q4. Create a namespace NStudent. Create the Student class(created as per Q3) inside namespace. 
// Create the object of student and perform accept and display student
#include<iostream>
using namespace std;

namespace NStudent{
    class student{
 private:       
    int roll_no;
    string name;
    int marks;
public:
    void acceptStudentFromConsole(){
        cout<<"Enter the details of student"<<endl<<endl;
        cout<<"Enter the roll no."<<endl;
        cin>>this->roll_no;
        cout<<"Enter the name "<<endl;
        cin>>this->name;
        cout<<"Enter the marks"<<endl;
        cin>>this->marks;
    }

    void printStudent(){
       cout<<"Student details :"<<endl;
       cout<<"Roll No : "<<this->roll_no<<endl;
       cout<<"Name : "<<this->name<<endl;
       cout<<"Marks : "<<this->marks<<endl;
    }
    
};
}
int main(){
    NStudent::student s;
    s.acceptStudentFromConsole();
    s.printStudent();

    return 0;
}