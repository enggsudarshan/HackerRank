/*
Brie’s Drawing teacher asks her class to open their -page book to page number . 
Brie can either start turning pages from the front of the book (i.e., page number ) or from the back of the book (i.e., page number ), 
and she always turns pages one-by-one (as opposed to skipping through multiple pages at once). 
When she opens the book, page  is always on the right side:

Each page in the book has two sides, front and back, except for the last page which may only have a 
front side depending on the total number of pages of the book (see the Explanation sections below for additional diagrams).

Given  and , find and print the minimum number of pages Brie must turn in order to arrive at page .

*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    int count_forward,count_back;

    count_forward = p-1;
    count_back = n-p;

    int cnt4;
    if(count_forward < count_back)
    {
            printf("%d\n",p/2);
    }
    else if(count_forward > count_back)
    {
        if((n-p) == 1)
        {
            if(n%2 == 0)
                cnt4 = 1;
            else
                cnt4 = 0;
        }
        else
            cnt4 = (n-p)/2;
        printf("%d\n",cnt4);
    }
    else if(count_forward == count_back)
    {
        if(p%2 == 0)
            printf("%d",(p/2)-1);
        else
            printf("%d",p/2);
    }
    return 0;
}
