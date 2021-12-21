// arithmetic : + - * / %

#include<stdio.h>

int main()
{
    /* int liter=0,kms=0;
    printf("Enter liter of fuel and driven kms: ");
    scanf("%d%d",&liter,&kms);
    int milage=kms/liter;
    printf("\nThe milage is: %d",milage);

    float fuel=(float)liter/kms;
    printf("\nThe consumed fuel/km is: %.3f",fuel); */
/* 
    int days=0,commercials=0;
    double takeHome=0.0;

    printf("Tell us no of days and commercials/day: ");
    scanf("%d%d",&days,&commercials);

    takeHome=days*commercials;

    printf("\nWithout TDS of 10 percent: %.2lf",takeHome);

    takeHome=takeHome-(takeHome*0.100);

    printf("\nAfter TDS of 10 percent: %.2lf",takeHome); */

    char athik='M', sona='S', hey='\0';
    printf("\n%c\t%c",athik,sona);

    // 10 12>> 22
    /* // swap by third var
    hey=athik;
    athik=sona;
    sona=hey; */

    // swap by arithmetic operator + -
    athik=athik+sona;//22
    sona=athik-sona;//22-12>>10
    athik=athik-sona;// 22-10>>12

    printf("\n%c\t%c",athik,sona);


    


}