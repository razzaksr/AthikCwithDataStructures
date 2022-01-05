/* pointers in array: 
1. pointer for existing array
pointer to print, update,delete,add,read array
2. pointer to create array:
malloc,calloc,realloc,free
*/


#include<stdio.h>
void traverse(int*,int);
void update(int*,int,int);
void bubble(int*,int);

int main()
{
    int happy[]={9,4,12,6,96,23,765,12,68,434,68,5,32,788,4,23,4,5,7,68,7};
    printf("\n%d address of array\n%d address of 0th index",happy,&happy[0]);
    traverse(happy,21);
    //update(happy,21,30);
    bubble(happy,21);
    traverse(happy,21);
    return 0;
}


// pointer in functions parameter

void bubble(int *hey,int size)
{
    for(int iter=0;iter<size-1;iter++)
    {
        for(int bub=0;bub<size-iter-1;bub++)
        {
            if( *(hey+bub) > *(hey+(bub+1)) )
            {
                *(hey+bub) ^= *(hey+(bub+1));
                *(hey+(bub+1)) ^= *(hey+bub);
                *(hey+bub) ^= *(hey+(bub+1));
            }
        }
    }
}

void update(int *yet,int size,int cond)
{
    for(int index=0;index<size;index++)
    {
        if(*(yet+index) >= cond)
        {
            //*(yet+index) = *(yet+index) - ( *(yet+index) * 20)/100;
            //yet[index]=yet[index]-(yet[index]*20)/100;
            printf("\nChange the value @ %d",index);
            scanf("%d",(yet+index));
        }
    }
}

void traverse(int *yet,int size)
{
    printf("\nListing All\n");
    for(int index=0;index<size;index++)
    {
        //printf("\n%d",yet[index]);// pointing array elements, by array syntax
        printf("%d ",*(yet+index));// pointing array elements, by pointer syntax
    }
    printf("\n");
}
