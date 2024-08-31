// Write a menu driven program for Date in a C. Declare a structure Date having data members 
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);
#include<stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
}date;
   
 int menu(){
    int choice;
    printf("0. Exit \n");
    printf("1. initialize date \n");
    printf("2. accept date \n");
    printf("3. print date \n");
    printf("Enter choice");
    scanf("%d",&choice);
    return choice;
 }
 void initDate(date *ptr){
    ptr->day=01;
    ptr->month=01;
    ptr->year=2000;
    printf("\n Date initialized to : %d - %d - %d \n\n",ptr->day,ptr->month,ptr->year);
    return;
 }
 void acceptDate(date *ptr){
    printf("Enter Day ");
    scanf("%d",&ptr->day);
    printf("Enter Month ");
    scanf("%d",&ptr->month);
    printf("Enter Year ");
    scanf("%d",&ptr->year);
    printf("\n");
    return;
 }
 void printDate(date * ptr){
     printf("Entered date is : ");
     printf ("%d - %d - %d \n",ptr->day,ptr->month,ptr->year);

 }

int main(){
    date d1;
    int choice;
    while(choice = menu())
    {
        switch(choice){
            case 1: initDate(&d1);
            break;
            case 2: acceptDate(&d1);
            break;
            case 3: printDate(&d1);
            break;
            default: printf("\n Enter valid choice \n");
            
        }
    }
return 0;

}