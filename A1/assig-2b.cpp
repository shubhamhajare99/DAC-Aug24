#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    public:
    void initDate(){
    this->day=01;
    this->month=01;
    this->year=2000;
    cout<<"\n Date initialized to :"<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
    return;
 }
 void acceptDate(){
    cout<<"Enter Day"<<endl;
    cin>>this->day;
    cout<<"Enter Month"<<endl;
    cin>>this->month;
    cout<<"Enter Year"<<endl;
    cin>>this->year;
    cout<<endl;
    return;
 }
 void printDate(){
     cout<<"Entered date is : ";
     cout<<this->day<<" - "<<this->month<<" - "<<this->year<<endl;

 }
 void checkLeapYear(){
     if(year%100==0){
     if(year%400==0){
         cout<<"This is leap year"<<endl;     
     }else{
         cout<<"Not a leap year"<<endl;
          }
     }else{
         if(year%4==0){
             cout<<"This is leap year"<<endl; 
         }else{
             cout<<"Not a leap year"<<endl;
              }

    }
     return;
    
 }
};

int menu(){
    int choice;
    cout<<"\n"<<"0. Exit"<<endl;
    cout<<"1. accept Date"<<endl;
    cout<<"2. print Date"<<endl;
    cout<<"3. check leap year"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    return choice;
 }

 int main(){
    Date d1;
    d1.initDate();
    int choice;
    while(choice = menu())
    {
        switch(choice){
            case 1: d1.acceptDate();
            break;
            case 2: d1.printDate();
            break;
            case 3: d1.checkLeapYear();
            break;
            default: cout<<"Enter valid choice"<<endl;
            cout<<endl;
        }
    }
return 0;
