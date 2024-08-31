// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.
#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;

    public:
    Time(int h=0, int m=0, int s=0){
        this->hour=h;
        this->minute=m;
        this->second=s;  
    }
    int getHour(){
        return this ->hour;
    }
    int getMinute(){
        return this->minute;
    }
    int getSecond(){
        return this->second;
    }
    void printTime(){
        cout<<"Time : "<<hour<<"-"<<minute<<"-"<<second<<endl;
    }
    void setHour(int h){
        this->hour=h;
    }
    void setMinute(int m){
        this->minute=m;
    }
    void setSeconds(int s){
        this->second=s;
    }

};

int main(){
    Time **ptr=new Time*[3];
    ptr[0]=new Time();
    ptr[1]=new Time(5,15,30);
    ptr[2]=new Time(7,10,50);
    ptr[0]->printTime();
    ptr[1]->printTime();
    ptr[2]->printTime();
    ptr[1]->setHour(10);
    int hr=ptr[1]->getHour();
    cout<<"updated hour : "<<hr<<endl;
    ptr[1]->printTime();
    
    for(int i=0;i<3;i++){
        delete ptr[i];
        ptr[i]=NULL;
    }
    delete [] ptr;


    return 0;
}