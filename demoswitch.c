// Switch : == int char

#include<stdio.h>

int main()
{
    char place='\0';int pack=0, count=0,pay=0;
    printf("--------------------------Parveen Tours-----------------------------");
    printf("\nWelcome ... and Tell us which place wish to book for vacation: ");
    place=getche();

    switch (place)
    {
    case 'g':case 'G':
        printf("\nSelected GOA vacation has following packages: \n3nights\n5nights\n10nights\nSelect any package: ");
        scanf("%d",&pack);
        switch (pack)
        {
        case 3:
            printf("\n3 nights and 4 days on North GOA @ 10000/head");
            printf("\nStay @ Govia Apartment executive room");
            printf("\n4 days veg and non veg food will be provided\nextra beverages and drinks as own expenses");
            printf("\nAguda fort,condolim,baga,callangute,churches");
            break;
        
        case 5:
            printf("\n5 nights and 6 days on North GOA @ 15000/head");
            printf("\nStay @ Ginger Tree Business Class");
            printf("\n6 days veg and non veg food will be provided\nextra beverages allowed but drinks as own expenses");
            printf("\nAguda fort,condolim,baga,callangute,churches,water games,golden island");
            
            printf("\nTell us members of vacation: ");
            scanf("%d",&count);
            double payable=count*15000;
            printf("\n%.2lf has to pay",payable);
            if(count>=3)
            {
                payable-=(payable*0.050);
                printf("\n%.2lf has to pay after the 5 percent discount",payable);
            }
            printf("\nEnter the amount: ");
            scanf("%d",&pay);
            if(pay>=payable)
            {
                printf("\nVacation for GOA with %d package for %d people of %.2lf booked",pack,count,payable);
            }
            else{
                printf("\nVacation for GOA with %d package for %d people of %.2lf couldn't booked due to insufficient pay",pack,count,payable);
            }

            break;

        case 10:
            printf("\n10 nights and 11 days on North and South GOA 18000/head");
            printf("\nStay @ Ginger Tree Business Class");
            printf("\n11 days veg and non veg food will be provided\nextra beverages allowed and drinks allowed");
            printf("\nAguda fort,condolim,baga,callangute,churches,water games,golden island,river cruise,casino");
            break;
        default:printf("%d is not valid package",pack);
        
        }
        break;
    case 'k':case 'K':
        printf("\nSelected Kulumanali vacation has following packages: ");
        break;
    case 'j':case 'J':
        printf("\nSelected Jaipur vacation has following packages: ");
        break;
    default:printf("\nWe dont have vacation packages for request %c",place);
    }

    return 0;
}