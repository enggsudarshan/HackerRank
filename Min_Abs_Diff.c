/* Quick Sort */

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
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    int i;
    long min=LONG_MAX;
    for(i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }

    quickSort(a,0,n-1);

    for(i=1;i<n;i++)
    {
        if(min > abs(a[i] - a[i-1]))
            min = abs(a[i] - a[i-1]);

    }
    printf("%ld",min);
    return 0;
}
