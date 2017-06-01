#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    char* str = (char *)malloc(10240 * sizeof(char));
    char* dest = (char *)malloc(10240 * sizeof(char));
    char *p;
    scanf("%s",str);
    p = memcpy (dest, str, sizeof (dest));
    printf("\n\n\n%s",p);
    int i=0,k=0;
    //printf("\n\n%d",strlen(str));
    //for(i=0;i<strlen(str);i++)
    /*
    while(strlen(str) != 0)
    {
        printf("\n%c   %c",str[i],str[i+1]);
        if(str[i] == str[i+1])
        {
            //str+=2;
            i+=2;
        }
        else
        {
            //dest[k] = str[i];
            k++;
            i++;
        }

        //printf("\n%s",dest);
    }
   // printf("\n\n\n%s",dest);

   */
    return 0;
}







