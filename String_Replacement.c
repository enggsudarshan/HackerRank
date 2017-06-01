/*
 * C Program to Search a Word & Replace it with the Specified Word
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Function to replace a string with another string*/

char *rep_str(const char *s, const char *old, const char *new1)
{
    char *ret;
    int i, count = 0;
    int newlen = strlen(new1);
    int oldlen = strlen(old);

    for (i = 0; s[i] != '\0'; i++)
    {
        printf("i in Loop = %d\n",i);
        printf("strstr = %s    &s[i]=%s\n",strstr(&s[i], old),&s[i]);

        if (strstr(&s[i], old) == &s[i])
        {
            printf("%s\n",&s[i]);
            count++;
            i += oldlen - 1;
            printf("i in If condition = %d\n",i);
        }
    }

    ret = (char *)malloc(i + count * (newlen - oldlen));

    if (ret == NULL)
        exit(EXIT_FAILURE);
    i = 0;
    while (*s)
    {
        printf("Character is %c\n",*s);
        printf("s = %s\n",s);
        printf("ret = %s\n",ret);
        if (strstr(s, old) == s) //compare the substring with the newstring
        {
            strcpy(&ret[i], new1);
            i += newlen; //adding newlength to the new string
            s += oldlen;//adding the same old length the old string
        }
        else
        {
                printf("else character = %c\n",*s);
                ret[i++] = *s++;

        }

    }
    ret[i] = '\0';
    return ret;
}

int main(void)
{
    char mystr[100], c[10], d[10];
    printf("Enter a string along with characters to be rep_strd:\n");
    scanf("%s",mystr);
    printf("Enter the character to be rep_strd:\n");
    scanf(" %s",c);
    printf("Enter the new character:\n");
    scanf(" %s",d);
    char *newstr = NULL;

    printf("%s\n",mystr);
    newstr = rep_str(mystr, c,d);
    printf("%s\n", newstr);
    free(newstr);
    return 0;
}
