#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<math.h>
#include<stdbool.h>

int main()
{

    char s1[100];
    //char s2[100];
    char A[4][20];
  //  char b[20][20];
    int count=0;
//    int j=0;
    int i;
    printf("Enter number of characters:\n");

    scanf("%[^\n]",s1);

    printf("%s\n",s1);

        /*
        char b[2][10] = {"Sud","Deo"};

        int l,m;
        for(l=0;l<2;l++)
        {
            for(m=0;m<3;m++)
            {
                printf("%c\n",b[l][m]);
            }
        }
*/

    int i_count=0,j_count=0;
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i] == '\0')
            break;
        if(s1[i] != ' ')
        {
            A[i_count][j_count] = s1[i];
            //printf("\nBlank\n");
            count++;
            j_count++;
        }
        else
        {
            A[i_count][j_count] = '\0';
            i_count++;
            j_count = 0;
        }

    }

        for(i=0;i<4;i++)
            printf("%s\n",A[i]);
        /*
        printf("%c\n",A[3][0]);
        printf("%c\n",A[3][1]);
        printf("%c\n",A[3][2]);
        printf("%s\n",A[3]);
     //printf("%d\n",count);


*/


    return 0;
}
