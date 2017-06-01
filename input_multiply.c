#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void calculate_product(int a[],int l)
{
    int i,n,b[5];
    n=1;
    for(i=0;i<l;i++)
    {
        //printf("%d\n",a[i]);
        n = a[i] * n;
    }
    //printf("%d",n);
    for(i=0;i<l;i++)
    {
        b[i] = n/a[i];
        printf("%d\t",b[i]);
    }

}

int main()
{
    int *a;
    int n,i;
    printf("Enter input size\n");
    scanf("%d",&n);
    //printf("n = %d\n",n);
    a = malloc(sizeof(int) * n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("%d\n",a);
    calculate_product(a,n);
    return 0;
}
