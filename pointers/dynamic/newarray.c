/*
Using pointer to create array:
*/

#include<stdio.h>
#include<stdlib.h>

void travpoint(int*);
void travusual(int*,int);
void inspoint(double*,int);

int main()
{
    int *hai;
    hai=malloc(10*sizeof(int));
    
    hai[0]=23;hai[1]=13;hai[2]=3;hai[3]=31;hai[4]=35;hai[5]=0;
    
    // travpoint(hai);
    // travusual(hai,10);

    double *yet;
    yet=calloc(10,sizeof(double));

    inspoint(yet,10);
    printf("\n");
    int index=0;
    while(index<10)
    {
        printf("%lf ",yet[index]);
        index++; 
    }
    printf("\n");

    return 0;
}

void inspoint(double *jack,int size)
{
    for(int time=1;time<=size;time++)
    {
        printf("\nEnter the double @ %d ",jack);
        scanf("%lf",jack);
        jack++;
    }
}

void travusual(int *h,int size)
{
    printf("\n");
    for(int index=0;index<size;index++)
    {
        printf("%d ",h[index]);
    }
    printf("\n");
}

void travpoint(int *hai)
{
    //traverse in format of pointer
    while(*hai)
    {
        printf("%d ",*hai);
        hai++;
    }
    printf("\n");
}