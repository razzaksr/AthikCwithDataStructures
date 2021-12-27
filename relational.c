// relational : > >= < <= == != : comparison and returns 0 or 1

#include<stdio.h>

int main()
{
    /*
    float time=0.0F;
    printf("Enter the time of arraival: ");
    scanf("%f",&time);
    printf("\nAm i late comer: %d",(time>9.05));
    */

    
    // char bank='\0';
    // printf("Enter the bank name's first letter of your debit/credit card: ");
    // bank=getchar();
    // printf("\nAm i eligible to get additional 10 percent discount: %d",(bank=='h'));
    
    int fee=0;
    printf("\nEnter the course amount: ");
    scanf("%d",&fee);
    printf("\nAm i eligible to pay in installment: %d",(fee>=10000));

    printf("\nCan i complete my course in 2 months: %d",(fee<=8000));

    return -1;
}