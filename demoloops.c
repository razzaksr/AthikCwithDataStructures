// demo loops: while for and do..while

#include<stdio.h>

int main()
{
    
    int start=0,end=0;

    printf("\nTell us start and end value of even series: ");
    scanf("%d%d",&start,&end);

    // while(start<=end)// cond
    // {
    //     if(start%2==0)// even
    //         printf("\n%d",start);
        
    //     start++;// iter
    // }

    // for(start;start<=end;start++)
    // {
    //     if(start%2==0)// even
    //         printf("\n%d",start);
    // }

    do
    {
        if(start%2==0)// even
            printf("\n%d",start);
        
        start++;// iter
    }while(start<=end);// cond

    return 0;
}