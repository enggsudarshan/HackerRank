/*
Two cats named  and  are standing at integral points on the x-axis. Cat  is standing at point  and cat  is standing at point . Both cats run at the same speed, and they want to catch a mouse named  that's hiding at integral point  on the x-axis. Can you determine who will catch the mouse?

You are given  queries in the form of , , and . For each query, print the appropriate answer on a new line:

If cat  catches the mouse first, print Cat A.
If cat  catches the mouse first, print Cat B.
If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
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
    int q;
    scanf("%d",&q);
    int a0;
    char s[10000] = "";
    for(a0 = 0; a0 < q; a0++)
    {
        int x;
        int y;
        int z;
        scanf("%d %d %d",&x,&y,&z);

        if(abs(x-z) > abs(y-z))
            //printf("Cat B\n");
            strcat(s,"Cat B\n");
        else if (abs(y-z) > abs(x-z))
            //printf("Cat A\n");
            strcat(s,"Cat A\n");
        else if (abs(y-z) == abs(x-z))
            //printf("Mouse C\n");
            strcat(s,"Mouse C\n");
    }


    //strcat(s,"darsha");
    //strcat(s,"n");
    printf("%s\n",s);
    return 0;
}
