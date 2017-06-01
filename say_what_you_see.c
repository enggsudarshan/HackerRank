#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void say_what_you_see(char a[],int l)
{
    int i;
    char x,y;
    int cnt1,cnt2;
    cnt1=0;cnt2=0;
    a = a+2;

    for(i=0;i<l;i++)
    {
        cnt1=0;cnt2=0;
        //printf("%s",&a[i]);
        if(a[i] == '\"')
        {
            if(a[i+1] == ']')
                break;
            //printf("%s\n",&a[i]);
            if(a[i+1] == ',')
            {
                i++;
                continue;
            }
        }
        while(a[i] != '\"')
        {
            x = a[i];
            cnt1++;
            i++;
            if(a[i] == x)
            {
                cnt1++;
                y = '\0';
            }
            else
            {
                y = a[i];
                cnt2++;
            }

            printf("%d%c%d%c\n",cnt1,x,cnt2,y);
            //i++;
            break;
        }
    }
}

int main()
{
    char *a;
    int l;
    a = (char*)malloc(sizeof(char));
    printf("Enter input\n");
    scanf("%s",a);
    l = strlen(a);
    l = l-2;
    //printf("%s",a);
    printf("%d\n",l);
    say_what_you_see(a,l);
    return 0;
}


