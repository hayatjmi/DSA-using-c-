#include<iostream>
using namespace std;
int main()
{
               int num=5;
               for(int i=1;i<=num;i++)
               {
                              for(int j=num;j>=1;j--)
                              {
                                 if(j<num-1)
                                 {
                                             cout<<" ";
                                 }
                                 else
                                 {
                                             cout<<" *";
                                 }
                              }
                              cout<<endl;
               }

               

}