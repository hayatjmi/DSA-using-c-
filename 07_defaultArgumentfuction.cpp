#include<iostream>
using namespace std;
int add(int ,int ,int=0);   // default arguments in functions in c++
int main()
{
int a , b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Sum is : "<<add(a,b)<<endl;
int c;
cout<<"Enter three numbers"<<endl;
cin>>a>>b>>c;
cout<<"sum is : "<<add(a,b,c);
return 0;
}
int add(int x,int y,int z)
{
    return (x+y+z);
}