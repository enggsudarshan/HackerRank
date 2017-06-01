/*
You are given  sticks, where the length of each stick is a positive integer. A cut operation is performed on the sticks such that all of them are reduced by the length of the smallest stick.

Suppose we have six sticks of the following lengths:

5 4 4 2 2 8
Then, in one cut operation we make a cut of length 2 from each of the six sticks. For the next cut operation four sticks are left (of non-zero length), whose lengths are the following: 

3 2 2 6
The above step is repeated until no sticks are left.

Given the length of  sticks, print the number of sticks that are left before each subsequent cut operations.

Note: For each cut operation, you have to recalcuate the length of smallest sticks (excluding zero-length sticks).
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    int pi;
    if (low < high)
    {
        pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n,elements,count=0,first_element=0;
    int x,j=0,k=0;
    //int l;
    scanf("%d",&n);
    int a[n],i;
    for(i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }

    quickSort(a, 0, n-1);
    /*
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    */



    elements = n;
    while(n!=1)
    {
        x=n;
        printf("%d\n",n);
        first_element = a[j];
        for(i=j;i<elements;i++)
        {
            //printf("Up i = %d\n",i);
            //printf("Before a[%d] = %d\n",i,a[i]);
            a[i] = a[i] - first_element;
            //printf("After a[%d] = %d\n",i,a[i]);
            if(a[i] == 0)
            {
                k++;
                x--;
                //printf("Inside loop x=%d\n",x);
            }
            count++;
           /* for (l=0; l < elements; l++)
                printf("%d ", a[l]);
            printf("\n");
            //printf("Down i = %d\n",i);   */
        }
       // printf("\n");
        //printf("count = %d\n",count);
        count=0;
        //printf("Outside loop x=%d\n",x);
        n=x;

        //printf("Outside loop n=%d\n",n);

        j=k;
        if(n == 0)
            break;
    }
    if(n!=0)
        printf("%d\n",n);



    return 0;


}
