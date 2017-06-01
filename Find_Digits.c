/*
Given an integer,N , traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide N 
(i.e.: count the number of times N divided by each digit i has a remainder of 0). Print the number of evenly divisible digits.

Note: Each digit is considered to be unique, so each occurrence of the same evenly divisible digit should be counted 
(i.e.: for N=111, the answer is 3).
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
    int t;
    scanf("%d",&t);
    int i;
    int k=0;
    int j=0;
    int count;
    int number = 0;
    char str[10000];
    for(i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        k=n;
        count=0;
        number = n;
        while(n!=0)
        {
            k = k%10;
            if((k!=0) && (number%k == 0))
                count++;
            n = n/10;
            k=n;
        }
        j += sprintf(str + j,"%d\n",count);
    }

    printf("%s",str);
    return 0;
}
