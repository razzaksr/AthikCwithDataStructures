// Nested loop realtime example:

#include<stdio.h>
#include<string.h>

int main()
{
    // // interview process
    // printf("\n-------------------TCS Campus Interview-----------------------");
    // int criteria=0, people=30, point=0, shortlisted=0;

    // for(int round=1;round<=4;round++)
    // {
    //     printf("\nHR please Tell us criteria of %d round: ",round);
    //     scanf("%d",&criteria);
    //     while(people>0)
    //     {
    //         printf("\nEnter the current person's points: ");
    //         scanf("%d",&point);

    //         if(point>=criteria)
    //         {
    //             printf("\n%dth person is shortlisted",people);
    //             shortlisted++;
    //         }
    //         else{printf("\nKeep work hard");}
    //         people--;
    //     }
    //     printf("\n %d are get shortlisted @ %d round",shortlisted,round);
    //     people=shortlisted;
    //     shortlisted=0;
    // }

    // printf("\n%d people are selected in TCS");

    printf("\nBus Booking\n");
    int fare=0;char chart[1000]="\n";

    for(int row=1;row<=4;row++)
    {
        for(int seat=1;seat<=4;seat++)
        {
            printf("\nEnter the amount: ");
            scanf("%d",&fare);
            if(fare>=380)
            {
                printf("\nYour %d seat has booked @ ",seat);
                strcat(chart,"$");
            }
            else{
                printf("\nInsufficient amount to travel");
                strcat(chart,"^");
            }
            if(seat==2)
                strcat(chart," ");
        }
        strcat(chart,"\n");
    }
    puts(chart);
    return 0;
}