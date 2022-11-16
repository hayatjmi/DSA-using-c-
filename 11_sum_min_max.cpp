#include <iostream>
using namespace std;

int main() {
int x=5;
int max;
int min;
int arrsum=0;
int maxsum;
int minsum;
// cin>>x;
 int arr[x];
 int brr[x];
 for(int i=0;i<x;i++)
 {
    cin>>arr[i];
   
 }
 for(int i=0;i<x;i++)
 {
     brr[i]=arr[i];
 }
 
//  for(int j=0;j<x;j++)
//  {
//     cout<<brr[j];
//  }
 for(int i=1;i<x;i++)
 {
    if(arr[0]<arr[i])
    arr[0]=arr[i];
    max=arr[0];

 }
//  cout<<endl << max;
 for(int j=1;j<x;j++)
 {
    if(brr[0]>brr[j])
    brr[0]=brr[j];
    min=brr[0];
 }
//  cout<<endl<<min;
 for(int i=0;i<x;i++)
 {
    arrsum+=brr[i];
   
 }
  
  cout<<arrsum-max<<" "<<arrsum-min;
 
//  cout<<maxsum;
  return 0;
}
