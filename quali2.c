#include<stdio.h>
#include<string.h>
#include"quali1.c"

int main()
{
    strcpy(word,"Athik");
    char skill[50]="";
    strcpy(skill,"Java");
    printf("\n Main \n");
    printf("%s\t%s\n",word,skill);
    hello();
    return 0;
}

void hello()
{
    char skill[50]="white";
    printf("%s\t%s\n",word,skill);
}