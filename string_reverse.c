
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<stdbool.h>
#include<math.h>

int main()
{

    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);

    //printf("%c",*s);
    char *end = s;
    char temp;

    if(s)
    {
        while(*end)
        {
            ++end;
        }
    }
    --end;

    while(s < end)
    {
        temp = *s;
        *s++ = *end;
        *end-- = temp;
        printf("temp = %c\n",temp);
        printf("s = %c\n",*s);
        printf("end = %c\n",*end);
        printf("%s\n",s);
    }

    printf("%s\n",s);
    //while(*end)
    end = end - (strlen(s)/2 + 2);
    printf("%s",end);
    return 0;
}
