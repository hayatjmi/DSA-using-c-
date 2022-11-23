#include<iostream>
using namespace std;
int main()
{  int rows,coloumn;
               cout<<"Enter the number of rows and coloumn"<<endl;
               cin>>rows>>coloumn;
               for(int i=1;i<=rows;i++)
               {
                              for(int j=1;j<=coloumn;j++)
                              if(i==1||j==1)
                              {
                                   cout<<" * ";
                              }
                              cout<<endl;

               }
}