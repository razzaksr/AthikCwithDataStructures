// patterns : perfect square, floyds, triangles

#include<stdio.h>
int main()
{
    int number='A',size=0;
    printf("\nEnter the no of rows:");
    scanf("%d",&size);
    // perfect square
    printf("\nPerfect Square\n");
    for(int row=1;row<=size;row++)
    {
        for(int data=1;data<=size;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");
    }

    printf("\nLeft Upper floyd\n");
    for(int row=1;row<=size;row++)
    {
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");
    }

    printf("\nRight Upper floyd\n");
    for(int row=1;row<=size;row++)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");
    }

    printf("\nLeft Lower floyd\n");
    for(int row=size;row>0;row--)
    {
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");
    }

    printf("\nRight Lower floyd\n");
    for(int row=size;row>0;row--)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");
    }

    printf("\nUpper pascal triangle\n");
    for(int row=1;row<=size;row++)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$ ");
        }
        printf("\n");
    }

    printf("\nLower pascal triangle\n");
    for(int row=size;row>0;row--)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=row;data++,number++)
        {
            //printf("%c",number);
            printf("$ ");
        }
        printf("\n");
    }
    int limit=1;
    printf("\nUpper Pyramid Triangle\n");
    for(int row=1;row<=size;row++)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=limit;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");limit+=2;
    }

    limit=(size*2)-1;
    printf("\nLower Pyramid Triangle\n");
    for(int row=size;row>0;row--)
    {
        for(int space=size-1;space>=row;space--)
        {
            printf(" ");
        }
        for(int data=1;data<=limit;data++,number++)
        {
            //printf("%c",number);
            printf("$");
        }
        printf("\n");limit-=2;
    }
    return 0;
}