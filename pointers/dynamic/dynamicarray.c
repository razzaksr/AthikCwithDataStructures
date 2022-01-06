// dynamic array using reallocating

#include<stdio.h>
#include<stdlib.h>

void traverse(float*,int);

int main()
{
    float *vision;

    vision=calloc(10,sizeof(float));
    vision[0]=2.3F;vision[1]=8.8F;vision[2]=4.1F;vision[3]=98.4F;vision[4]=5.6F;
    vision[5]=0.1F;vision[6]=1.1F;vision[7]=6.2F;vision[8]=4.5F;vision[9]=9.1F;

    traverse(vision,10);

    vision=realloc(vision,2*sizeof(float));
    traverse(vision,2);
    free(vision);

    traverse(vision,2);

    return 0;
}

void traverse(float *hai,int size)
{
    printf("\nTraversing\n");
    int index;
    for(index=0;index<size;index++)
    {
        printf("%f ",hai[index]);
    }
    printf("\n");
}
