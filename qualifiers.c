// auto, static, extern, register

#include<stdio.h>
static int alpha=0;
void setSome()
{
    printf("\n%c",alpha);
    alpha='D';
}

int main()
{   
    alpha=122;
    printf("\n%c",alpha);
    setSome();
    printf("\n%c",alpha);
    return 0;
}