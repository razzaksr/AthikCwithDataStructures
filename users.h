// fucntions type and behaviour

#include<stdio.h>
#include<string.h>

char report[1000]="";
int chairs=100, beanbags=60, collection=0;

int collected()
{
    printf("\nTotal log %s",report);
    return collection;
}

int placeChair(int qty)
{
    if(qty<=chairs)
    {
        return qty*528;
    }
    else
    {
        return -1;
    }
}

void orderChair()
{
    while(chairs>0)
    {
        printf("hai %d",chairs);
        char localstr[100]="";
        int amt;
        printf("\nTell us how many chairs wanted: ");
        int q=0;
        scanf("%d",&q);
        int got=placeChair(q);
        if(got!=-1)
        {
            printf("\nEnter the amount: ");
            scanf("%d",&amt);
            if(amt>=got)
            {
                printf("\nYour order is placed");
                chairs-=q;
                collection+=got;
                sprintf(localstr,"%d count of chairs has been placed current collection is %d\n",q,collection);
                strcat(report,localstr);
            }
            else
            {printf("\nCouldn't place your order");}
        }
        else
        {printf("\nAvailable is low\n");}
        printf("\nChairs as of now %d",chairs);
    }
}


// int main()
// {
    
//     orderChair();
//     printf("\nAvailable chairs %d, collected amount %d",chairs,collected());
//     return 0;
// }

