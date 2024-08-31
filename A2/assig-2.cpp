// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.

#include<iostream>
using namespace std;
class tollbooth{
    private:
    unsigned int totalCars;
    unsigned int payingCars;
    unsigned int nopayCars;
    double moneyCollected;
    public:
    tollbooth():tollbooth(0,0,0,0.0){}
    tollbooth(unsigned int totalCars,unsigned int payingCars,unsigned int nopayCars,double moneyCollected){
        this->totalCars=totalCars;
        this->payingCars=payingCars;
        this->nopayCars=nopayCars;
        this->moneyCollected=moneyCollected;
    }
    void payingCar(){
        ++totalCars;
        moneyCollected+=0.50;
    }
    void nopayCar(){
        ++totalCars;
    }
    void printOnConsole(){
        cout<<"Total cars : "<<totalCars<<endl;
        cout<<"Total money collected : "<<moneyCollected<<endl;
        cout<<"Number of paying cars : "<<payingCars<<endl;
        cout<<"Number of nonpaying cars : "<<nopayCars<<endl;
    }

};

int main(){
    tollbooth t;
    t.payingCar();
    t.payingCar();
    t.nopayCar();
    t.payingCar();
    t.printOnConsole();
    
    return 0;
}