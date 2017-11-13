

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<stdbool.h>
#include<math.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(char*)a - *(char*)b );
}

int main()
{


   /*
    char a[] = "PQYRDGT";
    qsort(a,7,sizeof(char),cmpfunc);
    printf("%s\n",a);
*/
    char s[] = "ABPLT";
    char d[] = "XYATC";
    int c1[26] = {0};
    int c2[26] = {0};
    char ch;
    int i,ans=0;

    for(i=0;i<strlen(s);i++)
    {
        ch = s[i] - 'A';
        c1[ch]++;

        ch = d[i] - 'A';
        c2[ch]++;
    }


    for(i=0;i<26;i++)
    {
        printf("%d\t",c1[i]);
        printf("%d\t",c2[i]);
        ans += abs(c1[i] - c2[i]);
        printf("%d\n",ans);
    }

    printf("\n%d\n",ans/2);

    return 0;
}


