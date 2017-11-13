#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int n;
    int i;
    int ans=0;
    printf("Enter 1st Array Elements\n");
    scanf("%d",&n);

    int *A = (int *)malloc(n*sizeof(A));
    int *B = (int *)malloc(n*sizeof(B));

    //int index;
    int *no1 = (int *)malloc(n*sizeof(no1));
    int *no2 = (int *)malloc(n*sizeof(no2));

    printf("Enter elements for A:\n");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter elements for B:\n");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&B[i]);
    }

    for(i=1;i<=n;i++)
    {
        //printf("%d\t%d\n",A[i],B[i]);
        no1[i] = no2[i] = 0;
    }

    for(i=1;i<=n;i++)
    {
        no1[A[i] - 0]++;
        no2[B[i] - 0]++;
    }

    for(i=1;i<=n;i++)
    {
        printf("%d\t%d\n",no1[i],no2[i]);
    }

    for(i=1;i<=n;i++)
    {
        ans += abs(no1[i] - no2[i]);
    }

    printf("%d\n",ans/2);
    return 0;
}
