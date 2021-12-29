// nested loop:
/*

loop1: start end iter>> 10 -20
    // loop1 body
    loop2: start end iter>> 1-5
        // loop2 body
        // loop2 body
    // loop1 body

*/

#include<stdio.h>

int main()
{
    for(int table=1;table<=5;table++)
    {
        printf("\n%dth table\n",table);
        for(int number=1;number<=10;number++)
        {
            printf("%d x %d = %d\n",number,table,(number*table));
        }
    }


    int age=0,person=0,cabin=1;
    printf("\n----------------------------WonderLa---------------------------");
    while(cabin<=5)
    {
        printf("\n%d cabin getting fillup",cabin);
        person=1;//init
        do
        {
            printf("\nEnter the age: ");
            scanf("%d",&age);
            if(age>=18&&age<=55)
            {
                printf("\nEntrant allowed as %d person @ %d cabin",person,cabin);
                person++;//iter
            }
            else{printf("\nEntrant not allowed");}
        } while (person<=4);//cond
        cabin++;
    }
    
    

    return 0;
}