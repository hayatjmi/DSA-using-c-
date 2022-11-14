#include <stdio.h>
#include<iostream>
using namespace std;



int main(){
    int ac=0;
    int bc=0;
  int arr[3];
    int brr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>brr[i];
    } 
    for(int i =0;i<3;i++)
    {
        if(arr[i]>brr[i])
        {
            ac++;
        }

        if(arr[i]<brr[i])
        {
            bc++;
        }
        

    }
    int rrr[]={ac,bc};
    cout<<rrr[0]<<" "<<rrr[1];
        
    return 0;
}