/*
A Discrete Mathematics professor has a class of N students. Frustrated with their lack of discipline, 
he decides to cancel class if fewer than K students are present when class starts.

Given the arrival time of each student, determine if the class is canceled.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    char str[10000];
    char *x = "YES";
    char *y = "NO";
    int k=0;
    for(i=0;i<n; i++)
    {
        int tot_students,present_students;
        scanf("%d %d",&tot_students,&present_students);
        int a[tot_students];
        int j;
        for(j=0; j<tot_students;j++)
        {
           scanf("%d",&a[j]);
        }
        int count=0;
        int flag = 1;
        for(j=0; j<tot_students;j++)
        {
            if(a[j] <=0)
                count++;
            if(count == present_students)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            //printf("YES\n");
            k += sprintf(str + k,"%s\n",x);
        else
            //printf("NO");
            k += sprintf(str + k,"%s\n",y);
       // printf("\n%s\n",str);
    }
    printf("%s",str);
    return 0;
}
