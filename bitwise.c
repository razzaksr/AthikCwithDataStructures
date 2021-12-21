// bitwise : & | ^ >> << : char int

/*
91
1024 512 256 128 64 32 16 8 4 2 1
   0   0   0   0  1  0  1 1 0 1 1 >> 91
   0   0   0   0  1  0  1 0 0 1 0 >> 82
   0   0   0   1  0  0  1 0 0 0 1 >> 145
   0   0   0   0  0  0  1 0 0 0 0 >> 16
   
   0   1   0   0  1  1  0 1 1 0 0 >> 620
   0   0   1   1  0  1  1 0 0 0 0 >> 432
   0   1   1   1  1  0  1 1 1 0 0 >> 988

   0   1   1   1  1  1  1 1 1 0 0 >> 1020


*/

#include<stdio.h>

int main()
{
    char flex='R';int marco=620;
    printf("\n%d\t%d",flex,marco);

    printf("\n%d",(flex&145));
    printf("\n%d",(marco|432));

    printf("\n%d",(marco^432));

    int fle=82;
    marco=620;
    // swap by ^
    fle^=marco;
    marco^=fle;
    fle^=marco;

    printf("\n%d\t%d",fle,marco);
}