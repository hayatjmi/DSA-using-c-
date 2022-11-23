#include<iostream>
using namespace std;
int main()
{
               char button;
               cout<<"Enter a character"<<endl;
               cin>>button; 
               switch(button)
               {
                              case 'a':
                              cout<<"hello";
                              break;
                              case 'b':
                              cout<<"namste";
                              break;
                              case 'c':
                              cout<<"aslamualikum";
                              break;
                              default:
                              cout<<"wrong character";
                              break;
                              return 0;
               }
}