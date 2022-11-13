#include <iostream>
using namespace std;
int sum(int *, int *); // function declaration
int main()
{
    int a = 5;
    int b = 6;
    int result = sum(&a, &b); // actual arguments 
    cout << result;
    return 0;
}
int sum(int *x, int *y) // funtion defination && call by address becouse we pass the address in formal arguments here:
{
    return (*x + *y);
}