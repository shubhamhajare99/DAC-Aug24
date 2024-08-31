#include<iostream>
using namespace std;

class box{
    double length;
    double width;
    double height;
    public:
    box():box(1,1,1){}

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
    int length,width,height,value;
    box *bptr=NULL;
    while(choice=menu()){
        switch(choice){
        case 1: 
           bptr=new box();
           bptr->calculateVolume();
            break;
        case 2:
           cout<<"Enter value : ";
           cin>>value;
           bptr=new box(value);
           bptr->calculateVolume();
            break;
        case 3: 
            cout<<"enter length :";
            cin>>length;
            cout<<"enter width :";
            cin>>width;
            cout<<"height :";
            cin>>height;
            bptr=new box(length,width,height);
            bptr->calculateVolume();
            break;
        default :
            cout<<"enter valid choice"<<endl;
      }

    }
    if(bptr!=NULL){
        delete bptr;
        bptr=NULL;}
    return 0;
}
