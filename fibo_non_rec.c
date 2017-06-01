/* Fibonacci Non-Recursive */
#include<stdio.h>
#include<stdlib.h>

int fibo(int n);

int fibo(int n)
{
    int a=0,b=1,c,i;

    for(i=2;i<n+1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("Fibonacci No is : %d\n",fibo(n+1));
    printf("Number of steps is : %d\n",fibo(n+1));
    return 0;
}
