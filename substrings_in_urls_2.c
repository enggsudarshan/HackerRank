#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<math.h>
#include<stdbool.h>

char **Func(char *s1)
{

    int i;
    //char A[3][20];
    char **A = malloc(sizeof(char *)*5);
    printf("Enter number of characters:\n");

    scanf("%[^\n]",s1);

    printf("%s\n",s1);

    int i_count=0,j_count=0;
    for(i=0;i<strlen(s1);i++)
    {
        A[i] = malloc(sizeof(char)*20);
        if(s1[i] == '\0')
            break;
        if(s1[i] != '.')
        {
            A[i_count][j_count] = s1[i];
            printf("i_count = %d\tj_count = %d\tcharacter = %c\n",i_count,j_count,s1[i]);
            j_count++;
        }
        else
        {
            A[i_count][j_count] = '\0';
            i_count++;
            j_count = 0;
        }
        printf("i_count = %d\tj_count = %d\tcharacter = %c\n",i_count,j_count,s1[i]);
        printf("i = %d\n",i);
        printf("%s\n",A[i_count]);
        printf("\n");
    }

        //for(i=0;i<3;i++)
          //  printf("%s\n",A[i]);
        /*
        printf("%c\n",A[3][0]);
        printf("%c\n",A[3][1]);
        printf("%c\n",A[3][2]);
        printf("%s\n",A[3]);
     //printf("%d\n",count);


*/
    return A;
}


int main()
{

    char s1[100];
    //char s2[100];
    //char A[3][20];
  //  char b[20][20];


    char **A = Func(s1);

    printf("%s",A[0]);
    return 0;
}
