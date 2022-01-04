/* 
single:
insertion>> O(n)
traverse>> O(n)
read>> O(1), O(n)
update>> O(1), O(n)
delete
search: lenear>> O(n), binary>> O(logn)
Sort: selection, bubble>> O(n2), quick>> O(nlogn)

multidimesional numerical array
insertion>> O(n2)
traverse>> O(n2)
read>> O(1), O(n2)
update>> O(1), O(n2)
delete
search: lenear>> O(n2), binary>> O(nlogn)
Sort: selection, bubble>> O(n3), quick>> O(n2logn)
*/



#include<stdio.h>
void insert(double[][4],int,int);
void traverse(double[][4],int,int);
void readByPos(double[][4],int,int,int,int);
void readByCond(double[][4],int,int,double);
void selecting(double[][4],int,int);

int main()
{
    //double salary[2][4];
    //insert(salary,2,4);
    double salary[][4]={{9.1,4.5,8.1,2.9},{6.1,3.1,10.7,7.4}};
    //readByPos(salary,2,4,1,4);
    //readByPos(salary,2,4,1,2);
    traverse(salary,2,4);
    //readByCond(salary,2,4,7.0);
    selecting(salary,2,4);
    traverse(salary,2,4);

    return 0;
}

void selecting(double ar[][4],int rsize,int csize)
{
    for(int row=0;row<rsize;row++)
    {
        for(int select=0;select<csize;select++)
        {
            for(int com=select+1;com<csize;com++)
            {
                if(ar[row][select]>ar[row][com])
                {
                    ar[row][select]*=ar[row][com];
                    ar[row][com]=ar[row][select]/ar[row][com];
                    ar[row][select]/=ar[row][com];
                }
            }
        }
    }
}

void readByPos(double hai[][4],int rsize,int csize,int urow,int ucol)
{
    if(urow<rsize&&ucol<csize)
    {
        printf("\n%lf\n",hai[urow][ucol]);
    }
    else
    {
        printf("\nInvalid row and col\n");
    }
}

void readByCond(double hai[][4],int rsize,int csize,double min)
{
    for(int row=0;row<rsize;row++)
    {
        for(int col=0;col<csize;col++)
        {
            if(hai[row][col]<=min)
                printf("%lf ",hai[row][col]);
        }
        printf("\n");
    }
}

void traverse(double hai[][4],int rsize,int csize)
{
    for(int row=0;row<rsize;row++)
    {
        for(int col=0;col<csize;col++)
        {
            printf("%lf ",hai[row][col]);
        }
        printf("\n");
    }
}

void insert(double hai[][4],int rsize,int csize)
{
    for(int row=0;row<rsize;row++)
    {
        for(int col=0;col<csize;col++)
        {
            printf("\nTell us salary of %d team %d member",row,col);
            scanf("%lf",&hai[row][col]);
        }
    }
}