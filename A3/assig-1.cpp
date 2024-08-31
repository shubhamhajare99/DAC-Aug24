// Q1. Write a class to find volume of a Cylinder by using following members. (volume of 
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// calculateVolume()
// Initialize members using constructor member initializer list.

#include<iostream>
using namespace std;
class Cylinder{
    private:
    static double const PI;
    double radius;
    double height;
    public:
    Cylinder():radius(0.0),height(0.0){}
    Cylinder(double radius,double height){
        this->radius=radius;
        this->height=height; 
    }
    void setRadius(double radius){
        this->radius=radius;
    }
    double getRadius(){
        return this->radius;
    }
    void setHeight(double height){
        this->height=height;
    }
    double getHeight(){
        return this->height;
    }
    void calculateVolume(){
        double volume;
        volume=PI*radius*radius*height;
        cout<<"volume of cylinder : "<<volume<<endl;
    }

};
double const Cylinder::PI=3.14;

int main(){
    Cylinder c1;
    c1.calculateVolume();
    Cylinder c2(1.5,5);
    c2.calculateVolume();
    c2.setHeight(3.5);
    double height=c2.getHeight();
    cout<<"updated height of cylinder : "<<height<<endl;
    c2.setRadius(2.7);
    double radius=c2.getRadius();
    cout<<"updated radius of cylinder : "<<radius<<endl;
    c2.calculateVolume();
    
    return 0;
}