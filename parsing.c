// parsing: string to other formats
// sscanf(str,"fs",&var)

#include<stdio.h>

int main()
{
    char yet[10]="9.5673";
    float my_data=0.0F;

    sscanf(yet,"%f",&my_data);

    //printf("%f",(yet+2));
    printf("%f\n",(my_data+2));

    char hey[1000]="";
    int aadhar=9876567, mobile=987654;
    double income=9.8;
    char category='i', name[50]="Athik Mohamed", pan[12]="ABCD9876E";

    sprintf(hey,"Name is: %s,PAN : %s, Aadhar: %d, Mobile: %d,Category: %c, Annual income: %lf",name,pan,aadhar,mobile,category,income);

    puts(hey);
}