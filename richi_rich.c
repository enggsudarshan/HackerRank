/*
Sandy likes palindromes. A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward as it does forward. For example, madam is a palindrome.

On her  birthday, Sandy's uncle, Richie Rich, offered her an -digit check which she refused because the number was not a palindrome. Richie then challenged Sandy to make the number palindromic by changing no more than digits. Sandy can only change  digit at a time, and cannot add digits to (or remove digits from) the number.

Given  and an -digit number, help Sandy determine the largest possible number she can make by changing digits.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char Find_Max(char *a,int n);

char Find_Max(char *a,int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
    if(max< (a[i]-'0'))
    {
        //printf("a[%d] = %d\n",i,(a[i]-'0'));
        max=(a[i]-'0');
        //printf("max = %d\n",max);
    }

    }
    //printf("Final max = %d\n",max);
    return max;
}

int main()
{
    int n;
    int k;
    int i=0,z=0,j,count=0,flag;
    char max_value;
    //printf("Enter n and k\n");
    scanf("%d %d",&n,&k);
    //printf("Enter the number\n");
    char* a = (char *)malloc(10240 * sizeof(char));
    scanf("%s",a);

    max_value = Find_Max(a,n) + '0';
    //printf("Max Value = %c\n",max_value);

    for(z=0,i=0,j=n-1;z<k && i<n/2 && j>(n-1)/2;z++,i++,j--)
    {
        //printf("Before: %c  %c\n",a[i],a[j]);
        if(a[i] != a[j])
        {
            if(a[i] < max_value)
            {
                a[i] = max_value;
                z++;
            }

            if(a[j] < max_value)
            {
               a[j] = max_value;
               z++;
            }


        }
        //printf("After: %c  %c\n",a[i],a[j]);
        //printf("z =%d  i=%d  j=%d\n",z,i,j);
        count++;
        z--;
        //printf("count = %d\n",count);
    }

    for(i=0,j=n-1;i<n/2 && j>(n-1)/2;i++,j--)
        if(a[i] != a[j])
            flag=1;
        else
            flag=0;
    if(flag == 0)
        printf("%s\n",a);
    else
        printf("-1\n");
    return 0;


}
