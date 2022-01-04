/*
Sorting algorithms:
O(n2)
Insertion
Selection
Bubble

O(nlogn)
Quick
Heap
Merge
*/

#include<stdio.h>
void traverse(int[],int);
void bubble(int[],int);
void sortq(int[],int,int);
int quick(int[],int,int);

int main()
{
    int exp[]={4,0,12,8,4,2,9,7,10,5,9,6,3};
    traverse(exp,13);
    //bubble(exp,13);
    sortq(exp,0,12);
    traverse(exp,13);
    return 0;
}

int quick(int arr[],int start,int end)
{
    int piData=arr[end];
    int initial=start-1;

    for(int cur=start;cur<end;cur++)
    {
        if(arr[cur]>piData)
        {
            initial++;
            int tmp=arr[initial];
            arr[initial]=arr[cur];
            arr[cur]=tmp;
        }
    }

    int tmp=arr[initial+1];
    arr[initial+1]=arr[end];
    arr[end]=tmp;

    return initial+1;
}

void sortq(int hai[],int start,int end)
{
    if(start<end)
    {
        int piPoint=quick(hai,start,end);
        sortq(hai,start,piPoint-1);
        sortq(hai,piPoint+1,end);
    }
}

void bubble(int hai[],int size)
{
    for(int iter=0;iter<size-1;iter++)
    {
        for(int pair=0;pair<size-iter-1;pair++)
        {
            if(hai[pair]>hai[pair+1])
            {
                hai[pair]+=hai[pair+1];
                hai[pair+1]=hai[pair]-hai[pair+1];
                hai[pair]-=hai[pair+1];
            }
        }
    }
}

void traverse(int yet[],int size)
{
    printf("\nArray traverse\n");
    for(int index=0;index<size;index++)
    {
        printf("%d ",yet[index]);
    }
    printf("\n");
}