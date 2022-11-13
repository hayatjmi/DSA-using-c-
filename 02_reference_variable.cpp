#include<iostream>
using namespace std;
int main()
{
    int x=5;
    // int *p=&x;
    // cout<<*p;
    int &y=x;
    y++;
    cout<<x;
}