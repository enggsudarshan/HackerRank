/* Pyramid */
#include<stdio.h>
#include<stdlib.h>

void Print_Star_1(int n);
void Print_Star_2(int n);
void Print_Star_3(int n);
void Print_Star_4(int n);
int i,star_1=-1,star_2=-1,star_3=-1,star_4=-1;
int space_2=0,space_4=0;

void Print_Star_1(int n)
{

    if(n<=0)
        return;
    star_1=star_1+2;
    for(i=0;i<star_1;i++)
        printf("*");
    printf("\n");
    Print_Star_1(--n);
}

void Print_Star_2(int n)
{
    if(n<=0)
        return;
    space_2 = n;
    star_2 = star_2 +1;
    for(i=0;i<space_2;i++)
        printf(" ");

    for(i=0;i<=star_2;i++)
        printf("*");

    printf("\n");
    Print_Star_2(--n);
}

void Print_Star_3(int n)
{
    if(n<=0)
        return;
    star_3 = 2*n-1;
    for(i=0;i<star_3;i++)
        printf("*");

    printf("\n");
    Print_Star_3(--n);
}

void Print_Star_4(int n)
{
    if(n<=0)
        return;
    star_4 = 2*n-1;

    for(i=0;i<space_4;i++)
        printf(" ");
    for(i=0;i<star_4;i++)
        printf("*");

    space_4 = space_4+2;

    printf("\n");
    Print_Star_4(--n);
}
int main()
{
    int n;
    printf("Enter level:\n");
    scanf("%d",&n);

    Print_Star_1(n);
    printf("\n");
    Print_Star_2(n);
    printf("\n");
    Print_Star_3(n);
    printf("\n");
    Print_Star_4(n);
    return 0;
}
