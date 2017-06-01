/* Counting positive and negative numbers */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    double count1=0,count2=0,count3=0;
    for( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       if(a[i] == 0)
            count3++;
       else if(abs(a[i]) != a[i])
            count1++;
       else
            count2++;
        //printf("%f\n",(count1/n));
    }
    printf("%f\n%f\n%f",count2/n,count1/n,count3/n);


    return 0;
}
