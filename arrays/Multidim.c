// Multi dimensional char array with pointer for row specification:

#include<stdio.h>

int main()
{
    char *tenants[][50]={{"Vijay","Surya","Ajith"},{"Evans","Downey","Pratt"}};
    // char * for row
    // [] >> no of words
    // [50] >> no of chars in each word
    printf("%s",*tenants[1+0]);
    // *tenants[row+column]
    return 0;
}