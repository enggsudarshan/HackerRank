#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<stdbool.h>
#include<math.h>


int main()
{
    char s[] = "SUDARSHAN";
    printf("%s\n",s);

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
    for(i=0;i<strlen(s);i++)
    {
        ch = s[i] - 'A';
        if(--c1[ch] != 0)
        {
            printf("\nNot Unique");
            x = false;
            break;
        }
    }

    if(x == true)
        printf("Unique\n");
    return 0;
}


