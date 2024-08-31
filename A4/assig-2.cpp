// Q2. Write a menu driven program for Student management.
// Create a class student with data members name, gender, rollNumber(Auto generated) and array to 
// keep marks of three subjects. 
// Accept every thing from user and Print name, rollNumber, gender and percentage.
// Provide global functions void sortRecords() and int searchRecords() for sorting and searching array.
// In main(), create Student* arr[5] and provide facility for accept, print, search and sort.
// Search function returns index of found Student, otherwise returns -1.
// sortRecord sorts the students array based on roll no in descending order
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNo;
    static int generateRollNo;
    string gender;
    float marks[3];

    public:
    Student():Student("--","M/F"){ }
    Student(string name, string gender){
        this->name=name;
        this->rollNo=++generateRollNo;
        this->gender=gender;
    }

    void acceptData(){
        cout<<"Enter the name : "<<endl;
        cin>>this->name;
        cout<<"Enter the gender : "<<endl;
        cin>>this->gender;
        cout<<"Enter marks of sub1, sub2,sub3 : "<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>this->marks[i];
        }
        
    }
    void display(){
        int percent;
        cout<<"Student Details : "<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Roll No : "<<this->rollNo<<endl;
        cout<<"Gender : "<<this->gender<<endl; 
        cout<<"Marks of sub1, sub2,sub3 : ";
        for(int i=0;i<3;i++)
        {
            cout<<this->marks[i]<<"  ";
        }
        cout<<endl;
        percent= (marks[0]+marks[1]+marks[2])*100/300;
        cout<<"Percentage : "<<percent<<endl;

    }
};
int Student::generateRollNo=0;

void sortRecords(){

} 
int searchRecords(){


return 0;
}

int menu(){
    int choice;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept record of student"<<endl;
    cout<<"2. Display record"<<endl;
    cout<<"3. Search student"<<endl;
    cout<<"4. sort students"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main(){
 int choice;
 Student **ptr = new Student*[3];
 for(int i=0;i<3;i++)
 {
    ptr[i]= new Student();
 }
 while((choice=menu())!=0){
     switch(choice){
        case 1: 
            for(int i=0;i<3;i++)
            ptr[i]->acceptData();
            break;
        case 2:
            for(int i=0;i<3;i++)
            ptr[i]->display();
            break;
        case 3:
            int searchRoll;
            cout<<"Enter the roll no to search : ";
            cin>>searchRoll;
            for(int i=0;i<3;i++)
            if()
            break;
        case 4:
            break; 
                 

 }
 }

    return 0;
}