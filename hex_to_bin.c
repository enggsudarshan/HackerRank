#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char *hex_to_bin(char *hexadecimal_value);

int main()
{

	char *bin1 = (char *)malloc(100);
	char *bin2 = (char *)malloc(100);
	bin1 = hex_to_bin("B023");
	bin2 = hex_to_bin("A");

	int y = strlen(bin1);
	//int x = sizeof(bin1[0]);
    printf("y = %d\n",y);

    int i=0,count=0;
    for(i=0;i<y;i++)
    {
        if(bin1[i] != bin2[i])
        {
            count++;
        }
    }
    printf("Count = %d\n",count);

	printf("%s",bin1);
	printf("%s",bin2);
	return 0;
}
char *hex_to_bin(char *hexadecimal_value)
{
    long int count = 0;
    printf("\nBinary Value of the Hexadecimal Number:\t");
    while(hexadecimal_value[count])
    {
        switch(hexadecimal_value[count])
        {
            case 'A': printf("1010"); break;
            case 'B': printf("1011"); break;
            case 'C': printf("1100"); break;
            case 'D': printf("1101"); break;
            case 'E': printf("1110"); break;
            case 'F': printf("1111"); break;
            case 'a': printf("1010"); break;
            case 'b': printf("1011"); break;
            case 'c': printf("1100"); break;
            case 'd': printf("1101"); break;
            case 'e': printf("1110"); break;
            case 'f': printf("1111"); break;
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            default:  printf("nEntered Value [%c] is Invalid", hexadecimal_value[count]);
        }
        count++;
    }
    printf("\n");
    return hexadecimal_value;
}
