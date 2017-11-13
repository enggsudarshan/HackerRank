#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char *s = (char *)malloc(sizeof(char)*100);
    char *d = (char *)malloc(sizeof(char)*100);

    scanf("%s",s);
    scanf("%s",d);

    int result = checkword(s,d);
    printf("result = %d\n",result);

    return 0;
}

int checkword(char *s, char *d)
{
        int count[255];
        int i;
        int need_count = strlen(d);
        for(i=0;i<strlen(d);i++)
        {
            count[d[i]]++;
        }

        for(i=0;i<strlen(s);i++)
        {
            printf("need count = %d\n",need_count);
            if(i >= strlen(d))
            {
                if(++count[s[i-strlen(d)]] > 0)
                {
                    need_count++;
                }
            }

            if(--count[s[i]] >= 0)
            {
                need_count--;
            }

            if(need_count == 0)
                return 1;
        }
        return 0;
}
