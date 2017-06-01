/*
The Task 
You are given the two positive integers  and , where  is lower than . 
Write a program to determine how many Kaprekar numbers are there in the range between  and  (both inclusive) and display them all.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int p,q;
    scanf("%d %d",&p,&q);
    unsigned long long i,k=0,m=0,n=0,div=10;

    bool flag = false;

    for(i=p;i<=q;i++)
    {
        n = i*i;
        div=10;
        while(n/div > div)
        {
            div = div*10;
        }
        k=0;
        while(n != 0)
        {
            m = n%div;
            k = k+m;
            n = n/div;
        }
        /*if(i == 6049417284)
        {
            printf("\nIts 77778...\n");
            printf("\nk = %d\n",k);
        }*/
        if(k == i)
        {
            flag = true;
            //printf("%I64d ",i);
            printf("%d ",(int) i);
        }

    }
    if(flag == false)
        printf("INVALID RANGE");
    //int temp = 77778;
    //printf("\nTemp = %d\n",temp);
    return 0;
}
