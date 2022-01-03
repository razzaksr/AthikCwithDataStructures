#include<stdio.h>

// Linear Search: Unsorted array >> O(n)

int linear(int[],int,int);
int binary(char[],int,int,char);

int main()
{
    int happy[]={9,4,12,6,96,23,765,12,68,434,68,5,32,788,4,23,4,5,7,68,7};

    int received=linear(happy,21,5);

    printf("\n%d is position where %d lies",received,5);

    received=linear(happy,21,99);

    printf("\n%d is position where %d lies",received,99);

    // zealous>> a e l o s u z
    //char word[]={'a','e','l','o','s','u','z'};
    char word[]="aelousz";

    received=binary(word,0,6,'u');

    printf("\n%d is position where %c lies",received,'u');

    received=binary(word,0,7,'z');

    printf("\n%d is position where %c lies",received,'z');

    return 0;
}

int binary(char str[], int start, int end, char data)
{
    if(start<end)
    {
        int mid=(end+start)/2;
        if(str[mid]==data)
            return mid;
        else if(str[mid]>data)
            return binary(str,start,mid-1,data);
        else if(str[mid]<data)
            return binary(str,mid,end,data);
    }
    else
        return -1;
}

int linear(int ar[],int size,int data)
{
    for(int index=0;index<size;index++)
    {
        if(ar[index]==data)
            return index;
    }
    return -1;
}