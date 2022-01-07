#include<stdio.h>

struct Hai
{
    int alpha:10;
    int beta:10;
};

union Hi
{
    int alpha;
    int beta;
};

int main()
{
    struct Hai a;
    union Hi b;
    printf("\n%d\t%d",sizeof(a),sizeof(b));
    
    return 0;
}