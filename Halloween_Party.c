/* Alex is attending a Halloween party with his girlfriend, Silvia. 
At the party, Silvia spots the corner of an infinite chocolate bar (two dimensional, infinitely long in width and length).

If the chocolate can be served only as 1 x 1 sized pieces and Alex can cut the chocolate bar exactly K times, 
what is the maximum number of chocolate pieces Alex can cut and give Silvia?

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,k;
    int j=0;
    char str[100];
    scanf("%d",&t);

    int i;
    for(i=0;i<t;i++)
    {
        int r=0,c=0;
        int count=0;
        scanf("%d",&k);
        c = k/2;
        r = k-c;
        count = r*c;
        //printf("k = %d  r = %d   c = %d   count = %d\n",k,r,c,count);
        j += sprintf(str + j,"%d\n",count);
    }
    printf("%s",str);
    return 0;
}
