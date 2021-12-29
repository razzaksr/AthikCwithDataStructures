// control statements: if demo

#include<stdio.h>

int main()
{
    // float weight=0.0F;
    
    // printf("Tell us your weight: ");
    // scanf("%f",&weight);

    // if(weight>=40&&weight<=65)
    // {
    //      printf("\nYou can enroll in this tournament");
    // }

    int number=0;
    printf("Enter the number to check for prime: ");
    scanf("%d",&number);

    if(number==2 || number==3 || number==5 || number==7 || number%2!=0 && number%3!=0 && number%5!=0 && number%7!=0)
    {
         printf("%d is prime",number);
    }
    else
    {
         printf("%d isn't prime",number);
    }

    // int budget=0;
    // printf("\nTell us your laptop budget: ");
    // scanf("%d",&budget);

    // if(budget>=18000&&budget<=25000)
    // {
    //     printf("\nFor %d budget ACER, ASUS laptops are available",budget);
    // }
    // else if(budget>25000&&budget<=35000)
    // {
    //     printf("\nFor %d budget Lenova, ASUS, Dell laptops are available",budget);
    // }
    // else if(budget>35000&&budget<=50000)
    // {
    //     printf("\nFor %d budget HP, Dell laptops are available",budget);
    // }
    // else if(budget>50000)
    // {
    //     printf("\nFor %d budget Dell, Sony, Apple laptops are available",budget);
    // }
    // else
    // {
    //     printf("\nNo laptops are matching with %d",budget);
    // }

    // int age=0; double wt=0.0;
    // printf("Enter the age: ");
    // scanf("%d",&age);

    // if(age>=18)
    // {
    //     printf("\nEntrant is adult");
    //     printf("\nEnter the wight: ");
    //     scanf("%lf",&wt);
    //     if(wt>=80.1&&wt<120&&age<=60)
    //     {
    //         printf("\nYou can play all dry and water games");
    //     }
    //     else if(wt>=60&&wt<=80&&age<=60)
    //     {
    //         printf("\nYou can play water games");
    //     }
    //     else if(wt<=60&&wt>=30)
    //     {
    //         printf("\nYou can play dry games");
    //     }
    //     else
    //     {
    //         printf("\nYou cannot play any games");
    //     }
    // }
    // else{
    //     printf("\nEntrant is kid");
    // }

    return 0;
}