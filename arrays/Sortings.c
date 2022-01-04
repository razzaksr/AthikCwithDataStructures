#include<stdio.h>
void selection(char[],int);
void selecting(int[],int);
void traverse(int[],int);



int main()
{
    char org[]="zealous";
    printf("\n%s",org);
    selection(org,8);
    printf("\n%s",org);
    int yet[]={45,98,11,3,5,12,0,5,40,2};
    traverse(yet,10);
    selecting(yet,10);
    printf("\nAfter Sorting");
    traverse(yet,10);
    return 0;
}

void traverse(int var[],int end)
{
    for(int index=0;index<end;index++)
    {
        printf("\n%d",var[index]);
    }
}

void selecting(int ar[],int size)
{
    for(int select=0;select<size;select++)
    {
        for(int com=select+1;com<size;com++)
        {
            if(ar[select]>ar[com])
            {
                ar[select]^=ar[com];
                ar[com]^=ar[select];
                ar[select]^=ar[com];
            }
        }
    }
}

void selection(char ar[],int size)
{
    for(int select=0;select<size-1;select++)
    {
        for(int com=select+1;com<size-1;com++)
        {
            if(ar[select]>ar[com])
            {
                ar[select]^=ar[com];
                ar[com]^=ar[select];
                ar[select]^=ar[com];
            }
        }
    }
}