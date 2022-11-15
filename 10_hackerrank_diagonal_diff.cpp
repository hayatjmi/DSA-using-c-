#include<iostream>
using namespace std;
int main()
{
    int x;
    // int limit=1;
    int add1=0;
    int add2=0;
    // cout<<"Enter x ";
    cin>>x;
    int arr[x][x];
    // cout<<"Enter the element of the matrix"<<endl;
    for(int i=0;i<=x-1;i++)
    {
        for(int j=0;j<=x-1;j++)
        {
            cin>>arr[i][j];
           
        }
         
       
        
    }
     for(int n=0;n<=x-1;n++)
     {
         for(int j=0;j<=x-1;j++)
        {
            if(n==j)
            {
                add1+=arr[n][j];
            }
            if(n+j==x-1)
            {
                add2+=arr[n][j];
            }
        }
     }
     
          int r=add1-add2;
          if(r<0)
          {
            cout<<(-(r));

          }
          else
          {
            cout<<r;
          }
 
}