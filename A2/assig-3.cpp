// 3. Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions

#include<iostream>
using namespace std;

class address{
    string building;
    string street;
    string city;
    int pin;
    public:
    address(string build,string street,string city,int pin){
        this->building=build;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void setBuilding(string build){
    this->building=build;
    }
    void setStreet(string street){
        this->street=street;
    }
    void setCity(string city){
        this->city;
    }
    void setPin(int pin){
        this->pin=pin;
    }
    string getBuilding(){
        return this->building;
    }
    string getStreet(){
        return this->street;
    }
    string getCity(){
        return this->city;
    }
    int getPin(){
        return this->pin;
    }
    void accept(){
        cout<<endl;
        cout<<"Enter the building name : "<<endl;
        cin>>this->building;
        cout<<"Enter the street name : "<<endl;
        cin>>this->street;
        cout<<"Enter the city name : "<<endl;
        cin>>this->city;
        cout<<"Enter the PIN: "<<endl;
        cin>>this->pin;
        
    }
    void display()const
    {   cout<<"Address : "<<endl;
        cout<<"Building : "<<building<<endl;
        cout<<"Street : "<<street<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"PIN : "<<pin<<endl;

    }

};

int main(){
    address d("Anand","kothari_nagar","Amravati",444709);
    d.display();
    d.accept();
    d.display();
    d.setStreet("laxmi-chowk");
    d.display();
    string city = d.getCity();
    cout<<"city name : "<<city<<endl;
    

    return 0;

}