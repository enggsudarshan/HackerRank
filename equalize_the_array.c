/*
Karl has an array of  integers defined as . In one operation, he can delete any element from the array.

Karl wants all the elements of the array to be equal to one another. To do this, he must delete zero or more elements from the array. 
Find and print the minimum number of deletion operations Karl must perform so that all the array's elements are equal.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,count,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d",n-max);
    return 0;
}
