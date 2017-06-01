/*
John's clothing store has a pile of  loose socks where each sock  is labeled with an integer, , 
denoting its color. He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. 
Two socks,  and , are a single matching pair if .

Given  and the color of each sock, how many pairs of socks can John sell?
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
    int *c = malloc(sizeof(int) * n);
    int i,j,cnt=0;
    for(i = 0; i < n; i++)
    {
       scanf("%d",&c[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(c[i] != 0)
            {
                if(c[i] == c[j])
                {
                    c[i] = 0;
                    c[j] = 0;
                    cnt++;
                    break;
                }
            }
            else
                break;
        }

    }
    printf("\n%d",cnt);
    return 0;
}
