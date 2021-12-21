// getc, getchar,getch,getche putc putchar

#include<stdio.h>

int main()
{
    char gender='\0';
    //gender=getc(stdin);
    //putc(gender,stdout);

    //gender=getchar();
    //putchar(gender);
    //gender=getch();
    gender=getche();
    

    printf("Your gender is: %c",gender);
    
}