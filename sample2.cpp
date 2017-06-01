#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<strings.h>

using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    int age;

    void getStudent(int r,char n[],int a);
    int setStudent(int r);
};

void Student::getStudent(int r,char *n,int a)
{
    roll = r;
    strcpy(name,n);
    age = a;
}

int Student::setStudent(int r)
{
    roll = r;
    return roll;
}

int main()
{
    Student s;
    s.getStudent(1,"SUD",25);
    s.setStudent(2);
    cout<<"Roll\t"<<s.roll<<"Name\t"<<s.name<<"Age\t"<<s.age<<endl;
}
