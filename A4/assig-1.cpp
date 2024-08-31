// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date.
// Implement above classes. Test all functionalities in main().
#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day=01,int month=01, int year=0001 ){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void acceptDate(){
        cout<<"Enter the date in format dd-mm-yy : "<<endl;
        cin>>this->day>>this->month>>this->year;
        cout<<endl;
    }
    void displayDate(){
        cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
class Person{
    private:
    string name;
    string address;
    Date dt;
    public:
    Person():Person("-","-"){}
    Person(string name,string address) {
        this->name=name;
        this->address=address;
    }  
    void acceptInfo(){
        cout<<"Enter the name : "<<endl;
        cin>>this->name;
        cin.ignore();
        cout<<" Enter the address : "<<endl;
        getline(cin,this->address);
        dt.acceptDate();
    } 
    void displayInfo(){
        cout<<"Person Details : "<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Address : "<<this->address<<endl;
        dt.displayDate();
    }

};

int main(){

    Person p1;
    p1.displayInfo();
    p1.acceptInfo();
    p1.displayInfo();
    Person p2("Shubham","Laxmi chowk, Hinjewadi");
    p2.displayInfo();

    return 0;
}