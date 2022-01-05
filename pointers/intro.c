#include<stdio.h>

int main()
{
    int cosmo=122;
    int *ptr, **hai;
    printf("\nValue of cosmo: %d",cosmo);
    printf("\nAddress of cosmo: %d",&cosmo);

    //*ptr=190;
    ptr=&cosmo;
    printf("\n%d Value in Pointer",ptr);
    printf("\n%d Address of pointer variable",&ptr);
    printf("\n%d Value in %d address by pointer",*ptr,ptr);

    hai=&ptr;
    printf("\n%d is value in the hai",hai);
    printf("\n%d is value @ %d address",*hai,hai);
    printf("\n%d is value @ %d address of %d address",**hai,*hai,hai);

    return 0;
}