#include<stdio.h>
#include<stdlib.h>

int main()
{


    char* number = (char *)malloc(10240 * sizeof(char));
    //scanf("%s",number);
    number= "Sud";

    printf("%s\n",number);

    printf("%c\n",number[0]);
    *number = '\0';
    printf("%c\n",number[0]);
    return 0;
}
