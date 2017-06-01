/*
HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
For example,  will be rounded to  but  will not be rounded because the rounding would result in a number that is less than .

Given the initial value of  for each of Sam's  students, write code to automate the rounding process. For each , round it according to the rules above and print the result on a new line.
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int m,n,z,i,j=0,count=0;
    scanf("%d",&z);
    char str[10000];
    //printf("%d\n",n);
    for(i=0;i<z;i++)
    {
        scanf("%d",&m);
        if(m%5 !=0 && m>=38)
        {
            n = m/5;
            n++;
            n = n*5;
            if(n-m < 3)
            {
                //printf("%d\n",n);
                j += sprintf(str + j,"%d\n",n);
                //printf("%s\n",str);
            }


            else
            {
                //printf("%d\n",m);
                j += sprintf(str + j,"%d\n",m);
                //printf("%s\n",str);
            }
        }
        else
        {
            //printf("%d\n",m);
            j += sprintf(str + j,"%d\n",m);
            //printf("%s\n",str);
        }
    count++;
    }
    //puts(str);
    //printf("count = %d\n",count);
    printf("\n%s\n",str);
    return 0;
}
