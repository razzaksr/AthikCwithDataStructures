#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Bottle
{
    char color[20];
    int capacity,price;
    char material[20];
}hai[3];

void iterate()
{
    for(int index=0;index<3;index++)
    {
        printf("\n%s\t%d\t%d\t%s\n",hai[index].color,hai[index].capacity,hai[index].price,hai[index].material);
    }
}

void add()
{
    for(int index=0;index<3;index++)
    {
        scanf("%s%s%d%d",hai[index].material,hai[index].color,&hai[index].capacity,&hai[index].price);
    }
}

void list(struct Bottle *b)
{
    for(int index=0;index<3;index++)
    {
        printf("\n%s\t%d\t%d\t%s\n",b[index].color,b[index].capacity,b[index].price,b[index].material);
    }
}

void insert(struct Bottle *b)
{
    for(int index=0;index<3;index++)
    {
        scanf("%s%s%d%d",b[index].material,b[index].color,&b[index].capacity,&b[index].price);
    }
}

int main()
{
    // add();
    // iterate();

    struct Bottle *hi;
    hi=(struct Bottle*)calloc(3,sizeof(struct Bottle));
    

    
    insert(hi);
    list(hi);
    

    return 0;
}