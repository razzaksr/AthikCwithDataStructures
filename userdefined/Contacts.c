#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Contacts
{
    char name[100];
    long long int mob;
};

void addNew(struct Contacts*,int);
void printAll(struct Contacts*,int);
void byName(struct Contacts*,int,char*);


int main()
{
    struct Contacts *app;
    app=(struct Contacts*)calloc(3,sizeof(struct Contacts));
    
    // strcpy((app+0)->name,"Razak");
    // (app+0)->mob=987501111;

    // printf("\n%s\t%d\n",(app+0)->name,(app+0)->mob);
    // addNew(app,3);
    // addNew(app,3);
    // addNew(app,3);

    strcpy((app+0)->name,"Razak");
    (app+0)->mob=987501111;
    strcpy((app+1)->name,"Rasheedha");
    (app+1)->mob=876567234;
    strcpy((app+2)->name,"Rajiya");
    (app+2)->mob=876567734;

    //printAll(app,3);
    byName(app,3,"Rasheedha");
    byName(app,3,"Rajak");
    byName(app,3,"rajiya");
    return 0;
}

void byName(struct Contacts *hi,int size,char *who)
{
    for(int index=0;index<size;index++)
    {
        if(strcasecmp((hi+index)->name,who)==0)
        {
            printf("\n%s\t%d\n",(hi+index)->name,(hi+index)->mob);
            return;
        }
    }
    printf("\n%s not match in contaqct list",who);
}

void addNew(struct Contacts *hai,int size)
{
    for(int index=0;index<size;index++)
    {
        if((hai+index)->mob==0)
        {
            printf("Enter the name and number @ %d",index);
            scanf("%s%d",(hai+index)->name,&(hai+index)->mob);
            break;
        }
    }
}

void printAll(struct Contacts *hai,int size)
{
    for(int index=0;index<size;index++)
    {
        printf("\n%s\t%d\n",(hai+index)->name,(hai+index)->mob);
    }
}