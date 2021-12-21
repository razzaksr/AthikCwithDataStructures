// casting: one type into another
// (type)
// implicit: simply format specifier is enough

#include<stdio.h>

int main()
{
    int _11=98;char _22='Z';
    printf("%d\n",_11);
    printf("%c\n",_11);
    printf("%c\n",_22);
    printf("%d\n",_22);

    float _33=75.6F;
    printf("%f\n",_33);
    printf("%d\n",(int)_33);// explicit
    printf("%lf\n",_33);
    printf("%c\n",(char)_33);

}