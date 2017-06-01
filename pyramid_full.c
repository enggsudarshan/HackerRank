/* Pyramid Full */
#include<stdio.h>
#include<stdlib.h>


void Print_Star(int n);
int i,star=-1;
static int space=0;

void Print_Star(int n)
{
    if(n<=0)
        return;

    space = n-1;
    star = star+2;

    for(i=0;i<space;i++)
        printf(" ");
    for(i=0;i<star;i++)
        printf("*");
    printf("\n");
    Print_Star(--n);

    star = star-2;
    space = n+1;
    for(i=0;i<space;i++)
        printf(" ");
    for(i=0;i<star;i++)
        printf("*");
    printf("\n");

}


int main()
{
    int n;
    printf("Enter level for stars:\n");
    scanf("%d",&n);

    Print_Star(n);
    return 0;
}
