// array of pointers

#include<stdio.h>

int main()
{
    double wind[]={9.2,7.8,12.9,4.5};
    double *fun[]={wind,&wind[1],&wind[2],&wind[3]};// array of addresses

    for(int start=0,end=3;end>start;start++,end--)
    {
        *fun[start] += *fun[end];
        *fun[end] = *fun[start]- *fun[end];
        *fun[start] -= *fun[end];
    }
    printf("\n");
    for(int index=0;index<4;index++)
    {
        printf("%lf ",wind[index]);
    }

    return 0;
}