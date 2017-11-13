#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<stdbool.h>
#include<math.h>


int main()
{
    char s[] = "DEO";

    printf("%s\n",s);
    char d[] = "DEO";

    printf("%s\n",d);
    int c1[26] = {0};
    memset(c1,0,26);

    int i;
    char ch;

    for(i=0;i<strlen(s);i++)
    {
        ch = s[i] - 'A';
        c1[ch]++;
    }

    bool x = true;
    for(i=0;i<strlen(d);i++)
    {
        ch = d[i] - 'A';
        //printf("%d\n",c1[ch]);

        if(--c1[ch] < 0)
        {
            printf("\nNot Anagram\n");
            x = false;
            break;
        }
    }

    if(x == true)
        printf("Anagram\n");
    return 0;
}


