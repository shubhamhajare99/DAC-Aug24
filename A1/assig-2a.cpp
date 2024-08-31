#include<iostream>
using namespace std;

typedef struct Date{
    int day;
    int month;
    int year;
}date;
   
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
 void initDate(date *ptr){
    ptr->day=01;
    ptr->month=01;
    ptr->year=2000;
    cout<<"\n Date initialized to :"<<ptr->day<<"-"<<ptr->month<<"-"<<ptr->year<<endl;
    return;
 }
 void acceptDate(date *ptr){
    cout<<"Enter Day"<<endl;
    cin>>ptr->day;
    cout<<"Enter Month"<<endl;
    cin>>ptr->month;
    cout<<"Enter Year"<<endl;
    cin>>ptr->year;
    cout<<endl;
    return;
 }
 void printDate(date * ptr){
     cout<<"Entered date is : ";
     cout<<ptr->day<<" - "<<ptr->month<<" - "<<ptr->year<<endl;

 }
 void checkLeapYear(date *ptr){
     if(ptr->year%100==0){
     if(ptr->year%400==0){
         cout<<"This is leap year"<<endl;     
     }else{
         cout<<"Not a leap year"<<endl;
          }
     }else{
         if(ptr->year%4==0){
             cout<<"This is leap year"<<endl; 
         }else{
             cout<<"Not a leap year"<<endl;
              }

    }
     return;
    
 }

int main(){
    date d1;
    initDate(&d1);
    int choice;
    while(choice = menu())
    {
        switch(choice){
            case 1: acceptDate(&d1);
            break;
            case 2: printDate(&d1);
            break;
            case 3: checkLeapYear(&d1);
            break;
            default: cout<<"Enter valid choice"<<endl;
            cout<<endl;
        }
    }
return 0;

}