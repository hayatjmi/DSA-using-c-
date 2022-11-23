#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a; 
    short int x;
    long int y;
    float b;
    char c;
    bool d;
    cout << "size of int " << sizeof(a) << endl;
    cout << "size of float " << sizeof(b) << endl;
    cout << "size of char " << sizeof(c) << endl;
    cout << "size of bool " << sizeof(d) << endl;
    cout << "size of shortint " << sizeof(x) <<endl;
    cout << "size of longint " << sizeof(y) <<endl;
}