#include<iostream>
using namespace std;
int sum (int x, int y)     //formal arguments      //function defination
{
      return x+y;
}
// when formal arguments are ordinary / simple variables it is function call by value
int main()      
{

    int a =5;
    int b=6;
    int s=sum(a,b);  //actual arguments            // function call 
    cout<<"sum is "<<s;
}