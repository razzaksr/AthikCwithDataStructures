/*
Array: index starts with 0
*/

#include<stdio.h>
void traverse(int[],int);

int main()
{
    int hai[4];
    int yet[]={45,98,11,3,5,12,0,5,40,2};

    printf("\nArray size is: %d and address is %d",(sizeof(yet)),yet);
    traverse(yet,10);

    printf("\nGetting values fom user: ");
    // initial
    int pos=0;
    while(pos<4)
    {
        printf("\nEnter the valus: ");
        scanf("%d",&hai[pos]);
        pos++;
    }
    
    traverse(hai,4);


    return 0;
}


void traverse(int var[],int end)
{
    for(int index=0;index<end;index++)
    {
        printf("\n%d",var[index]);
    }
}