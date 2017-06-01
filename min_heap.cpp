#include<iostream>

using namespace std;

class Shape
{
public:
    void Name();
    void SurfaceArea();
} ;

class Circle:Shape
{
public:
    int radius;
void Area(int r1)
{
    cout<<"Area is "<<22.7*r1<<"\n";
}

void Area(double r2)
{
    cout<<"Area is "<<22.7*r2<<"\n";
}

};

class Rectangle:public Shape
{
public:
    int l,b;
public:
    void IS_Square();
    void setLength_Breadth(int l,int b);
};




void Rectangle::IS_Square()
{

    cout<<l<<"\t"<<b<<"\n";
    if(l==b)
        cout<<"Square"<<"\n";
    else
        cout<<"Not a Square"<<"\n";
}

void Rectangle::setLength_Breadth(int len,int bre)
{

    l = len;
    b = bre;
}

void Shape::Name()
{
    cout<<"Rectangle"<<"\n";
}

int main()
{
    Rectangle r;
    r.setLength_Breadth(2,5);
    cout<<r.l<<"\t"<<r.b<<"\n";
    r.setLength_Breadth(4,1);
    cout<<r.l<<"\t"<<r.b<<"\n";
    r.IS_Square();
    r.Name();
    Circle c;
    c.Area(5);
    c.Area(2.5);
    return 0;
}
