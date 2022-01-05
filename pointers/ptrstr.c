// pointers in string

#include<stdio.h>
#include<string.h>

int main()
{
    char var[50]="Athik";
    char *yet="Mohamed";// letters are fixed
    char *hai[50]={"Razak","Mohamed","Shahul"};// words fixed, letters can vary

    printf("\n%s\t%s",var,yet);

    //strcat(yet," Razak");

    //printf("\n%s\t%s",var,yet);

    printf("\n%s\t%s\t%s",hai[0],hai[1],hai[2]);

    return 0;
}