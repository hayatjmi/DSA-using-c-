#include<iostream>
using namespace std;
inline void fun();
int main()
{
   cout<<"you are in main fuction right now"<<endl;
   fun();
}
void fun()
{
    cout<<"you are in fun function right now";
}