#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<math.h>
#include<stdbool.h>

char **Calculate_List(char *s1)
{
    int i;
    int count=0;
    //char A[3][20];
    char **A = 0;
    A = malloc(sizeof(char *)*3) ;
    int i_count=0,j_count=0;
    for(i=0;i<strlen(s1);i++)
    {
        A[i] = malloc(sizeof(char)*20);
        printf("A[1] = %s\n",A[1]);
        if(s1[i] == '\0')
            break;
        if(s1[i] != '.')
        {
            A[i_count][j_count] = s1[i];
            //printf("%c\n",A[i_count][j_count]);
            //printf("\nBlank\n");
            count++;
            j_count++;
        }
        else
        {
            A[i_count][j_count] = '\0';
            //printf("i = %d  ",i_count);
            //printf("%s\n",A[i_count]);
            i_count++;
            j_count = 0;
        }
    }
    //printf("A[0] = %c\n",A[1][1]);
    return A;
        //for(i=0;i<3;i++)
          //  printf("%s\n",A[i]);
}

int main()
{

    char s1[100];
    char s2[100];
    //char A[3][20];
    //char B[3][20];


    int i;
    printf("Enter URL 1:\n");
    scanf("%[^\n]",s1);
    printf("%s\n",s1);

    /*
    printf("Enter URL 2:\n");
    scanf("%[^\n]",s2);
    printf("%s\n",s2);
    */
    char **A = Calculate_List(s1);
    //for(i=0;i<3;i++)
        //printf("%s\n",A[1]);

    return 0;
}
