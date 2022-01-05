#include<stdio.h>
void yet(double*,double*);

int main()
{
    double hai=9.3, bye=4.5;
    printf("\n%lf\t%lf",hai,bye);
    double *p1,*p2;
    p1=&hai;p2=&bye;

    // swap
    *p1 *= *p2;
    *p2 = *p1 / *p2;
    *p1 /= *p2;

    printf("\n%lf\t%lf",hai,bye);

    yet(&hai,&bye);

    printf("\n%lf\t%lf",hai,bye);

    return 0;
}
// call by reference using pointer
void yet(double *alpha,double *beta)
{
    printf("\n%lf is alpha\t%lf is beta",*alpha,*beta);
    *alpha +=10;
    *beta -=10;
    printf("\n%lf is alpha\t%lf is beta",*alpha,*beta);
}