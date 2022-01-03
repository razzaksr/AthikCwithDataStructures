#include<stdio.h>
void trav(float[],int);
void change(float[],int);
float erase(float[],int);

int main()
{
    float fine[]={34.F,0.9F,12.5F,11.5F,92.3F,11.7F,2.3F,1.9F,0.1F,11.3F,56.4F};
    trav(fine,10);
    change(fine,10);
    printf("\nAfter the call change");
    trav(fine,10);
    printf("\nAfter the call delete");
    float del=erase(fine,7);
    printf("\n%f is deleted: ",del);
    return 0;
}

float erase(float beta[],int pos)
{
    printf("\n%f is about to delete ",beta[pos]);
    float ilen=beta[pos];
    beta[pos]=0.0F;
    return ilen;
}

void change(float does[], int size)
{
    for(int index=0;index<size;index++)
    {
        if(does[index]>20)
            does[index]*=2;
    }
}

void trav(float wind[],int size)
{
    for(int pos=0;pos<size;pos++)
    {
        printf("\n%f",wind[pos]);
    }
}