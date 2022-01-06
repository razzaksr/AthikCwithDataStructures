/*

User defined data type:
grouping of different data under one variable

collection of process's data,product's data,applications data 
strong bind between each data inside an user defined one

struct, union, enum
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Bottle
{
    char color[20];
    int capacity,price;
    int material;
};

void display(struct Bottle var)
{
    printf("\n%s\t%d\t%d\t%c\n",var.color,var.capacity,var.price,var.material);
}

void show(struct Bottle *var)
{
    printf("\n%s\t%d\t%d\t%c\n",var->color,var->capacity,var->price,var->material);
}

int main()
{
    struct Bottle b,*p;
    printf("\n%d\n",sizeof(b));
    strcpy(b.color,"Maroon");b.capacity=1;b.price=19;b.material='P';
    //printf("\n%s\t%d\t%d\t%c\n",b.color,b.capacity,b.price,b.material);
    display(b);
    show(&b);
    strcpy(p->color,"Blue");p->capacity=5;p->price=25;p->material='S';
    //printf("\n%s\t%d\t%d\t%c\n",p->color,p->capacity,p->price,p->material);
    display(*p);
    show(p);

    struct Bottle hai[]={{"Red",2,35,'S'},
    {"Purple",1,55,'P'},{"Yellow",3,90,'P'}};

    for(int index=0;index<3;index++)
    {
        display(hai[index]);
    }

    

    return 0;
}
