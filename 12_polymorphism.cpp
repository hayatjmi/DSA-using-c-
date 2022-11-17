/* A program to know about polymorphism in fuctions and tell us about function overloading , operation overloading and virtual funtions*/
#include<iostream>
using namespace std;
int area(int, int);
float area(int);
int main()
{
    int r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    float A=area(r);

    cout<<"Area of circle is : "<<A<<endl;
    int l, b ,a;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectange is : "<<a;
}
float area(int r )
{
    return (3.14*r*r);
}
int area(int l , int b)
{
    return(l*b);
}