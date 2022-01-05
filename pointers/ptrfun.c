// points in functions

// 1. parameter, returntype, caller: 
// pointer to function: returtypeofFunction (*ptr)(param)=&function
// call function by function pointer: (*ptr)(param)


#include<stdio.h>
double wind[]={9.2,7.8,12.9,4.5};
void generate();
void hello();

int main()
{
    void (*call)()=&generate;
    generate();// normal call
    (*call)();// pointer call

    void (*multi[])()={generate,hello};
    (*multi[0])();
    (*multi[1])();
    return 0;
}

void hello()
{
    for(int index=3;index>=0;index--)
    {
        printf("%lf ",wind[index]);
    }
    printf("\n");
}

void generate()
{
    for(int index=0;index<4;index++)
    {
        printf("%lf ",wind[index]);
    }
    printf("\n");
}