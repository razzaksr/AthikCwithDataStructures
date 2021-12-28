//demonstration of for loop

#include<stdio.h>

int main()
{
    //inifinite loop
    // for(;;)
    // {
    //     printf("\nJava Full Stack in Demanded tehcnology now");
    // }
    
    // int fare=0;
    // for(int available=20;available>0;available--)
    // {
    //     if(available==2||available==5||available%5==0)
    //     {
    //         //printf("\n%d Booked online already",available);
    //         continue;
    //     }
    //     else
    //     {
    //         printf("\nEnter the amount: ");
    //         scanf("%d",&fare);
    //         if(fare>=390)
    //         {
    //             printf("\nYou can travel @ %d seat",available);
    //         }
    //         else{
    //             printf("\nInsufficient amount to travel");
    //         }
    //     }
    // }

    // int enrolled=0;
    // char skill='\0';

    // printf("\nTell us enrolled people for TCS interview: ");
    // scanf("%d",&enrolled);40, 50

    // for(;enrolled>0;enrolled--)
    // {
    //     printf("\nEnter the skill u knew: ");
    //     skill=getche();
    //     switch(skill)
    //     {
    //         case 'j':case 's':printf("\nWe recuite you for Web developer role");break;
    //         case 'r':case 'p':printf("\nWe recuite you for Automation tester, Data scientist");break;
    //         default:printf("\nSkill not match with any requirement please update");
    //     }
    // }

    //fibonacci series:
    // int num1=0,num2=1,sum=0,limit=0;

    // printf("\nTell us limit of the fibonacci series: ");
    // scanf("%d",&limit);

    // if(limit>=2)
    // {
    //     printf("\n%d\n%d",num1,num2);

    //     limit-=2;//init

    //     for(;limit>0;limit--)
    //     {
    //         sum=num1+num2;
    //         printf("\n%d",sum);
    //         num1=num2;
    //         num2=sum;
    //     }
    // }
    // else
    // {
    //     printf("\nCan't generate fibonacci given limit %d",limit);
    // }

    //factorial: 5>> 120
    int number=0,fact=1;

    printf("\nEnter the number to find factorial: ");
    scanf("%d",&number);

    if(number<=0)
    {
        printf("\nCan't find factorial for %d",number);
    }
    else
    {
        for(;number>0;number--)
        {
            fact*=number;
        }
        printf("\n%d is factorial",fact);
    }


    return 0;
}