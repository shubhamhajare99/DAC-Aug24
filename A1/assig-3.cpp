// Q3. Write a menu driven program for Student in CPP language. Create a class student with data 
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();
#include<iostream>
using namespace std;

class student{
    int roll_no;
    string name;
    int marks;
public:
    void initStudent(){
        this->roll_no =0;
        this->name="xyz";
        this->marks=0;

    }
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

int menu(){
    cout<<"0. EXIT"<<endl;
    cout<<"1. initialize Student"<<endl;
    cout<<"2. print Student data"<<endl;
    cout<<"3. accept Student data from Console"<<endl;
    int choice;
    cin>>choice;
    return choice;
}
int main(){
    student s;
    int choice;
    while(choice=menu()){
        switch(choice){
            case 1 :
                s.initStudent();
            break;
            case 2 :
                s.printStudent();
            break;
            case 3 :
                s.acceptStudentFromConsole();
            break;
            default : cout<<"Please Enter valid choice"<<endl;

        }
    }
    
    return 0;

}