// fucntions type and behaviour

#include<stdio.h>

char report[1000]="";
int chairs=100, beanbags=60, collection=0;

int collected()
{
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
    int amt;
    printf("\nTell us how many chairs wanted: ");
    int q=0;
    scanf("%d",&q);
    int got=placeChair(q);
    if(got!=-1)
    {
        printf("\nEnter the anmunt: ");
        scanf("%d",&amt);
        if(amt>=got)
        {
            printf("\nYour order is placed");
            chairs-=q;
            collection+=got;
        }
        else
            printf("\nCouldn't place your order");
    }
    else
        printf("\nAvailable is low\n");
}


// int main()
// {
    
//     orderChair();
//     printf("\nAvailable chairs %d, collected amount %d",chairs,collected());
//     return 0;
// }

