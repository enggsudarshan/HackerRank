#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Classroom
{
    int roll_no;
    char name[10];
};

int main()
{
    int i;
    char ch='A';
    int j;
    struct Classroom Classroom1[10];
    struct Classroom Classroom2;

    for(i=0;i<10;i++)
    {
        Classroom1[i].roll_no = i+1;
        itoa(ch+i,Classroom1[i].name,10);
    }

    for(i=0;i<10;i++)
    {
        j=atoi(Classroom1[i].name);
        cout<<Classroom1[i].roll_no<<"\t\t"<<(char)j<<endl;
    }
}
