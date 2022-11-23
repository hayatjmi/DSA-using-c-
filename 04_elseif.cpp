#include<iostream>
using namespace std;
int main()
{
    int budget;
    cout <<" what is your budget ";
    cin >> budget;
    if(budget>=5000)
    {
        cout<<"Roadtrip";
    }
    else if (budget<5000)
    {
        cout<<"MOvie";
    }
    else
    {
        cout<<"burgar";
    }
}