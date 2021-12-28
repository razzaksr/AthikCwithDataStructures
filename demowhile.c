// demo of while:

#include<stdio.h>

int main()
{
    /*
    int stock=50,required=0, pay=0,payable=0,noOfOrders=0;

    while(stock>0)
    {
        printf("\nTell us how many bean bags you want: ");
        scanf("%d",&required);
        if(required<=stock)
        {
            printf("\nStock available as you requested %d",required);
            printf("\nEnter the amount: ");
            scanf("%d",&pay);
            payable=required*3200;
            if(pay>=payable)
            {
                stock-=required;
                printf("\nYou bought %d count of products %d bill",required,payable);
                noOfOrders++;
            }
            else
            {
                printf("%d in insufficient to buy %d amount of stock since bill is %d",
                pay,required,payable);

            }
        }
        else
        {
            printf("\nWe have only %d amount of stocks",stock);
        }
    }

    printf("\nSale is over: %d orders were placed",noOfOrders);
    */

    // infinite loop in while
    // while(1)
    // {
    //     printf("\nZealous Tehc Corp");
    // }

    // fibonacci series: 0 1 1 2 3 5 8 ....
    // int num1=0,num2=1,sum=0,limit=0;

    // printf("\nTell us limit of the fibonacci series: ");
    // scanf("%d",&limit);

    // if(limit>=2)
    // {
    //     printf("\n%d\n%d",num1,num2);

    //     limit-=2;

    //     while(limit>0)
    //     {
    //         sum=num1+num2;
    //         printf("\n%d",sum);
    //         num1=num2;
    //         num2=sum;
    //         limit--;
    //     }
    // }
    // else
    // {
    //     printf("\nCan't generate fibonacci given limit %d",limit);
    // }

    int fare=0,available=20;

    while(available>0)
    {
        if(available==2||available==5||available%5==0)
        {
            //printf("\n%d Booked online already",available);
            available--;
            continue;
        }
        else
        {
            printf("\nEnter the amount: ");
            scanf("%d",&fare);
            if(fare>=390)
            {
                printf("\nYou can travel @ %d seat",available);
                available--;
            }
            else{
                printf("\nInsufficient amount to travel");
            }
        }
    }

    return 0;
}