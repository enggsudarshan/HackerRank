/*
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

If the book is returned on or before the expected return date, no fine will be charged (i.e.: .
If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, .
If the book is returned after the expected return month but still within the same calendar year as the expected return date, the .
If the book is returned after the calendar year in which it was expected, there is a fixed fine of .
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int d1;
    int m1;
    int y1;
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2;
    int m2;
    int y2;
    scanf("%d %d %d",&d2,&m2,&y2);


    if(y2>y1 || (y1 == y2 && m2>m1) || (y1 == y2 && m1 == m2 && d2>d1) || (y1 == y2 && m1 == m2 && d2==d1))
    {
        printf("0\n");
        return 0;
    }

    if(y1 > y2)
    {
        printf("10000\n");
    }
    else if(y1 == y2 && m1>m2)
    {
        printf("%d",500*(m1-m2));
    }
    else if(y1 == y2 && m1 == m2 && d1>d2)
    {

        printf("%d",15*(d1-d2));
    }
    return 0;
}
