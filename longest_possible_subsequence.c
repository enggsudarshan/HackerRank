#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<math.h>
#include<stdbool.h>

int main()
{

    int m,n;
    int i,j;

    printf("Enter the array size 1:");
    scanf("%d",&m);
    printf("Enter the array size 2:");
    scanf("%d",&n);
    char *X = malloc(sizeof(char) * m);
    for(i=0;i<=m;i++)
        scanf("%c",&X[i]);

    for(i=0;i<=m;i++)
        printf("%c",X[i]);
    printf("\n");
    char *Y = (char *)malloc(sizeof(char)*n);
    for(j=0;j<=n;j++)
        scanf("%c",&Y[j]);

    for(j=0;j<=n;j++)
        printf("%c",Y[j]);
    printf("\n");

    X[4] = '\0';
    Y[4] = '\0';
    char *A[2] = {X,Y};


    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%c ",A[i][j]);
        }
        printf("\n");
    }
    A[4][4] = '\0';


    return 0;
}
