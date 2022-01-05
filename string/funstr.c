// String functions

#include<stdio.h>
#include<string.h>
void insertion(char[][50],int);
void list(char[][50],int);

int main()
{
    char alpha[50]="";// word or stmt or line
    char beta[4][50]={"Zealous","Cognizant","Amazon","Infosys"};
    // char beta[4][50]={};// collection of words
    // insertion(beta,4);

    // list(beta,4);
    list(beta,4);
    strcpy(alpha,"Athik Mohamed");// copy or assign chars from right to left
    puts(alpha);

    strcat(beta[0]," tech corp");

    printf("\n%s",beta[0]);
    
    printf("\n%d",strcmp(beta[2],"amazon"));
    printf("\n%d",strcasecmp(beta[2],"amazon"));

    strupr(beta[3]);

    printf("\n%s",beta[3]);

    strlwr(alpha);

    printf("\n%s",alpha);

    return 0;
}

void list(char hey[][50], int size)
{
    for(int index=0;index<size;index++)
    {
        printf("\n%s",hey[index]);
    }
    printf("\n");
}

void insertion(char hey[][50], int size)
{
    for(int index=0;index<size;index++)
    {
        scanf("%s",hey[index]);
    }
}