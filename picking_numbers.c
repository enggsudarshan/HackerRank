/* Sorting */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void Quick_Sort(int *a,int low,int high);
int Partition(int *a,int low,int high);
void swap(int *a,int *b);

void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int Partition(int *a,int low,int high)
{
    int piv = a[high];
    int i = low-1;
    int j;

    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=piv)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}

void Quick_Sort(int *a,int low,int high)
{
    if(low < high)
    {
        int pivot = Partition(a,low,high);

        Quick_Sort(a,low,pivot-1);
        Quick_Sort(a,pivot+1,high);

    }

}

int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int *a = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    //printf("%d",a[0]);
    //printf("%d",abs(1-2));

    Quick_Sort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    /*

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == 0)
                break;
            if(abs(a[i]-a[j])<=1)
            {
                count++;
                //a[j]=0;
            }

        }
    }
    */
    return 0;
}
