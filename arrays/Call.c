#include<stdio.h>
void hello(double);
void hell(double[]);

int main()
{
    double order[]={3.4,9.2,12.5,8.9};
    double data=0.01;
    //hello(order[2]);
    hello(data);
    printf("\n%lf after call",data);
    //printf("\n%lf is in main",order[2]);// 12.5
    hell(order);
    printf("\n%lf is in main",order[3]);// 8.9
    return 0;
}
//call by value: value is copied while passing as paramater
void hello(double yet)
{
    printf("\n%lf is received",yet);// 12.5
    yet+=10;
    printf("\n%lf is updated",yet);// 22.5
}
// call by reference
void hell(double undo[])
{
    printf("\nWhat i have recieved in 3rd index of array %lf",undo[3]);
    undo[3]-=2;
    printf("\nWhat i have updated in 3rd index of array %lf",undo[3]);
}