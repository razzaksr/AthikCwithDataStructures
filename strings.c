// gets, puts, fgets, fputs

#include<stdio.h>

int main()
{
    char org[5]="";

    //scanf("%s",org);
    //printf("\nYour desired company is %s",org);

    //gets(org);
    //puts(org);

    fgets(org,sizeof(org),stdin);

    fputs(org,stdout);

    return 0;
    
}