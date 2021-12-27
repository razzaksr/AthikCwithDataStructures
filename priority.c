// precedence: BUDMAS/BODMAS

#include<stdio.h>

int main()
{
    int alpha=23,cosmo=66;
    //printf("\n%d",((--alpha)+(++cosmo)*(--alpha)));
    //printf("\n%d",((alpha--)+(++cosmo)*(--alpha)));

    //printf("\n%d",((alpha<<=2)/(cosmo>>=5)*(alpha*=2)-(cosmo+10)));

    printf("\n%d",((cosmo++)-(alpha/=2)/(cosmo*=3)-(alpha--)));


    return 0;
}