#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int *a;
    int *const b;
    const int *const c;

    //*a = 3; Value of a cannot be changed
    a++;    //a can be changed

    *b = 2; //b can be Assigned
    //b++; b cannot be changed

    //*c = 4; c cannot be assigned
    //c++; c cannot be changed

    return 0;
}
