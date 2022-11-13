#include<iostream>
using namespace std;
int sum(int &,int &);  // function declaration
int main()
{
    int a=5;
    int b=6;
    int result=sum(a,b);     // call by reference ,, 
    cout<<result;
    return 0;
}
int sum(int &x, int &y) // function defination && formal arguments are reference variables
{
    return x+y;
}