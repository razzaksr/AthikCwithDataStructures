// differnce between struct and union

#include<stdio.h>

struct Hai
{
    char name[100];
    double package;
};

union Hi
{
    char name[100];
    double package;
};

int main()
{
    struct Hai a={"Razak Mohamed S",25.6};
    union Hi b={"Sabari nathan S",10.4};
    printf("\n%d\t%d",sizeof(a),sizeof(b));
    printf("\n%s\t%lf\n",a.name,a.package);
    printf("\n%s\t%lf\n",b.name,b.package);
    return 0;
}