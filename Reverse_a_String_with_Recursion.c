#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void reverseString(char *str, int start, int length);

int main()
{
    char *str = (char *)malloc(sizeof(char)*100);
    printf("Enter the String to be reversed\n");
    scanf("%s",str);

    int length = strlen(str);

    reverseString(str,0,length-1);

    printf("Reversed String is\n%s",str);
    return 0;
}

void reverseString(char *str, int start, int length)
{
    char temp;

    temp = str[start];

    str[start] = str[length - start];
    str[length - start] = temp;

    if(start == length / 2)
    {
        return;
    }

    reverseString(str, start + 1, length);
}
