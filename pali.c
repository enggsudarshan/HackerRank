#include<stdio.h>
int main()
{
    int num,temp,rem=0,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    temp=num;
    while(num)
    {
        rem = num%10;
        num=num/10;
        sum=sum*10+rem;
    }

    if(temp==sum)
        printf("Pali...\n");
    else
        printf("Not Pali...\n");
    return 0;
}
