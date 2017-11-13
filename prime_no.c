#include <stdio.h>

int primeno(int, int);

int main()
{
    int num, check;
    printf("Enter a number limit: ");
    scanf("%d", &num);
    int i=2;

    while(i<=num)
    {
        check = primeno(i, i / 2);
        if (check == 1)
        {
            printf("%d ", i);
        }
        //else
        //{
          //  printf("%d is not a prime number\n", i);
        //}
        i++;
    }

    return 0;
}

int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }
}
