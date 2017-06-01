/* You are given a string containing characters A and B only, your task is to change it into a string such that every two consecutive characters are different. To do this, you are allowed to delete the one or more characters in the string.

Your task is to find the minimum number of required deletions.

For example,ABAA string  should be changed to ABA by deleting one character A.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char str[1000];
int k;

int minDel(char* s)
{
    int count=0;
    int i,j;
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i] != s[j])
                break;
            if (s[j] == '0')
                break;
            else
            {
                if(s[i] == s[j])
                    s[j] = '0';
            }
        }
    }

    //printf("%s\n",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == '0')
            count++;
    }

    return count;
}

int main()
{
    int t;
    scanf("%d",&t);
    int a0;
    for(a0 = 0; a0 < t; a0++)
    {
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        int result = minDel(s);
        k += sprintf(str+k,"%d\n",result);
        //printf("%d\n", result);
    }
    printf("%s",str);
    return 0;
}
