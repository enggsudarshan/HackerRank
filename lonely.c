/*Consider an array of  integers, , where all but one of the integers occur in pairs.
In other words, every element in  occurs exactly twice except for one unique element.
Sample Input 1

3
1 1 2
Sample Output 1

2*/

#include<stdio.h>
#include<stdlib.h>

void Func_Lonely_Integer(int a[], int n);

void Func_Lonely_Integer(int a[], int n)
{
    //printf("%d",*a);
    int i,j,count=0,b[50],k=0;
    for(i=0;i<n;i++)
    {
        count=0;
        if(a[i] != 0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i] == a[j])
                {
                    a[j] = 0;
                    count++;
                    //printf("%d   %d\n",a[i],a[j]);
                }

            }
            if(count==0)
            {
                //printf("In count 0\n");
                b[k] = a[i];
                k++;
            }
        }
    }

    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}

int main()
{
    int i,n,a[50];
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Func_Lonely_Integer(a,n);
    return 0;
}
