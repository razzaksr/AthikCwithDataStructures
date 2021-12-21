// Unary : ++ --

// pre: operVAR>> same spot, post:VARoper>> next spot

#include<stdio.h>

int main()
{
    char yet=99;int set='A';

    printf("\n%c\t%d",yet,set);
    printf("\n%c\t%d",--yet,set++);
    printf("\n%c\t%d",yet,set);
    printf("\n%c\t%d",yet--,++set);
    printf("\n%c\t%d",yet,set);
}