// enumerations: group of constants

#include<stdio.h>

enum Doctors
{
    Jayamurugan=2, Annejoyce, Premalatha=11, Akila,Rajendran
};

int main()
{
    enum Doctors doc;
    doc=Annejoyce;
    printf("\n%d\n",doc);
    doc=Akila;
    printf("\n%d\n",doc);
    return 0;
}