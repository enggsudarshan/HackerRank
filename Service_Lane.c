/*
Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, 
and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway. 
The length of the service lane is N units. The service lane consists of N segments of equal length and different width.

Calvin can enter to and exit from any segment. Let's call the entry segment as index  and the exit segment as index j. 
Assume that the exit segment lies after the entry segment (i < j) and 0<=i. 
Calvin has to pass through all segments from index i to index j (both inclusive).
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int largest(int array[], int length)
{

    int i;
    int max = array[0];

    for(i=1; i<length; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}


int main()
{

    int k=0;
    int n;
    int t;
    scanf("%d %d",&n,&t);
    int width[n];
    int max_width;
    char str[1000000];
    int width_i;
    for(width_i= 0; width_i < n; width_i++)
    {
       scanf("%d",&width[width_i]);
    }
    max_width=largest(width,n);
    //printf("max width = %d\n",max_width);
    int a0;
    for(a0 = 0; a0 < t; a0++)
    {
        int i;
        int j;
        int min=max_width;
        //printf("min = %d\n",min);
        scanf("%d %d",&i,&j);
        while(i<=j)
        {
            //printf("min=%d   width[%d]=%d\n",min,i,width[i]);
            if(min > width[i])
            {
                //printf("%d\n",min);
                min = width[i];
            }
            i++;
        }
        k += sprintf(str + k,"%d\n",min);
    }
    printf("%s",str);
    return 0;
}
