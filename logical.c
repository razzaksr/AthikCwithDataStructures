// logical: && || : for combining more than one relational in order to take on stand

#include<stdio.h>

int main()
{
    // char bank='\0';
    // printf("Enter the bank name's first letter of your debit/credit card: ");
    // bank=getchar();
    // printf("\nAm i eligible to get additional 10 percent discount: %d",
    // ((bank=='h')||(bank=='H')||(bank=='c')||(bank=='C')));

    int budget=0;
    printf("Tell us your budget: ");
    scanf("%d",&budget);
    printf("\nCan i get the free delivery: %d",((budget>=250)));
    printf("\nCan i get the top rated products: %d",((budget>=2500)&&(budget<=5000)));
    return -1;
}