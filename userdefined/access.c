#include"Contacts.c"



int main()
{
    struct Contacts *app;
    strcpy(app->name,"Razak");
    strcpy(app->mob,"98765678");
    printf("\n%s\t%s\n",app->name,app->mob);
    return 0;
}