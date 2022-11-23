#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\n"<<a;
        }
        else
        {
            cout<<"\n"<<c;
        } 
    }
    else 
    {
        if(c<b)
        {
            cout<<"\n"<<b;
        }
        else
        {
            cout<<"\n"<<c;
        }
    }
}