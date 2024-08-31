// Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options -> 
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values

#include<iostream>
using namespace std;

class box{
    double length;
    double width;
    double height;
    public:
    box(){
        this->length= 1;
        this->width= 1;
        this->height= 1;
    }
    box(double length,double width,double height){
        this->length= length;
        this->width= width;
        this->height= height;
    }
    box(double value){
        this->length=this->width=this->height=value;

    }
    void calculateVolume(){
        double volume=length*width*height;
        cout<<"volume of box : "<<volume<<endl;
    }
};
int menu(){
    cout<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. Calculate Volume with default values  "<<endl;
    cout<<"2. Calculate Volume with same value of length,width & height"<<endl;
    cout<<"3. Calculate Volume with different values of length,width & height \n"<<endl;

    int choice;
    cout<<"Enter a choice ";
    cin>>choice;
    return choice;
}

int main(){
    int choice;
    box b1;
    box b2(5);
    box b3(1,2,3);
    while(choice=menu()){
        switch(choice){
        case 1: 
            b1.calculateVolume();
            break;
        case 2:
            b2.calculateVolume();
            break;
        case 3: 
            b3.calculateVolume();
            break;
        default :
            cout<<"enter valid choice"<<endl;
      }

    }
    return 0;
}
