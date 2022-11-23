#include <iostream>
using namespace std;
int main()
{
               // the diff btw in while loop and do while loop is that , while loop runs accord-
               // ing to the conditions every time, but do while runs atleast one while the
               // condition matched or not..
               int n;
               cin >> n;
               do
               {
                              cout << n << endl;
                              cin >> n;
               } while (n > 0);
               return 0;
}