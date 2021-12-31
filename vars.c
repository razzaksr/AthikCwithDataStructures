#include<stdio.h>

void hello();// declaring function
void check(int,int);

int what=0;// global var

int main()
{
    int hai=90;// local to main
    printf("\n%d",hai);
    what=122;
    printf("\n%d",what);
    hello();
    printf("\n%d",what);
    check(99,33);
    return 0;
}

// definition
void hello()
{
    char hai='R';// local to hello
    printf("\nFirst user defined");
    printf("\n%d",hai);
    printf("\n%d",what);
    what=560;
    check(hai,hai+1);
}

void check(int alpha,int beta)
{
    printf("\n%d and %d accepted",alpha,beta);
    alpha^=beta;beta^=alpha;alpha^=beta;
    printf("\n%d and %d Now",alpha,beta);
}