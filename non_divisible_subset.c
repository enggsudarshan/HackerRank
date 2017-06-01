/* Non divisible subset */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],i,j,count=0;
    for(i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if((a[i]+a[j]%m == 0)
               count++;
        }
        if(count == (n-i))
            a[i] = 0;
    }

    return 0;
}
