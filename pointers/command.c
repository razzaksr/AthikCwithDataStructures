// using command line argument to pass inputs

#include<stdio.h>

int main(int size,char **hai)
{
    printf("\n%d\n",size);
    printf("\n%s\t%s\t%s\n",hai[0],hai[1],hai[2]);

    int yet,set;
    sscanf(hai[3],"%d",&yet);
    sscanf(hai[4],"%d",&set);

    printf("\n%d\t%d\n",yet*2,set/2);

    return 0;
}