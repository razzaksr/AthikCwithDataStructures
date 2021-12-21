// data store

#include<stdio.h>

int main()
{
    int aadhar=9876567, mobile=987654;
    double income=9.8;
    char category='i', name[50]="Athik Mohamed", pan[12]="ABCD9876E";

    /* int aadhar=0, mobile=0;
    double income=0.0;
    char category='\0', name[50]="", pan[12]="";  */

    scanf("%c%d%d%s%s%lf",&category,&aadhar,&mobile,name,pan,&income);
    //scanf("%d%d%lf",&aadhar,&mobile,&income);

    printf("Thanks for ITR submission %s with PAN of %s and Aadhaar details of %d for the income of %.4lf in category of %c, further details would be sent to your mobile %d",
    name,pan,aadhar,income,category,mobile);

    printf("\nmemory of aadhar %d memory of income %d memory of category %d memory of name %d",sizeof(aadhar),sizeof(income),sizeof(category),sizeof(name));
}