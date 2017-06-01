/* Sort a String */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int gemstone;
    scanf("%d", &gemstone);
    char letters[26] = {0};
    int count = 0;
    int r;
    for (r = 0; r < gemstone; r++)
    {
        char s[100];
        scanf("%s", s);
        int i;
        for (i = 0; i < strlen(s); i++)
        {
            char c = s[i];
            if (letters[c - 'a'] == r)
            {
                letters[c - 'a']++;
                if (letters[c - 'a'] == gemstone)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
