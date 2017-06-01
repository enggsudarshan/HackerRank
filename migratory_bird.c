/*
A flock of  birds is flying across the continent. Each bird has a type, and the different types are designated by the ID numbers , , , , and .

Given an array of  integers where each integer describes the type of a bird in the flock, find and print the type number of 
the most common bird. 
If two or more types of birds are equally common, choose the type with the smallest ID number.
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
    int i;
    int t1,t2,t3,t4,t5;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
    t1 = 1;t2=2;t3=3;t4=4;t5=5;
    int *types = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&types[i]);
    }



    for(i = 0; i < n; i++)
    {
        //printf("%d ",types[i]);
        if(types[i] == t1)
            cnt1++;
        else if(types[i] == t2)
            cnt2++;
        else if(types[i] == t3)
            cnt3++;
        else if(types[i] == t4)
            cnt4++;
        else if(types[i] == t5)
            cnt5++;
    }

    //printf("%d %d %d %d %d\n",cnt1,cnt2,cnt3,cnt4,cnt5);
    if(cnt1>=cnt2 && cnt1>=cnt3 && cnt1>=cnt4 && cnt1>=cnt5)
        printf("%d",t1);
    else
    {
        if(cnt2>=cnt3 && cnt2>=cnt4 && cnt2>=cnt5)
            printf("%d",t2);
        else
        {
            if(cnt3>=cnt4 && cnt3>=cnt5)
                printf("%d",t3);
            else
            {
                if(cnt4>=cnt5)
                    printf("%d",t4);
                else
                    printf("%d",t5);
            }
        }
    }

    return 0;
}
