#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
struct book
{
    int bookid;
    string title;
    float price;
    void input()
{
   cout<<"Enter bookid , title and price of the book : ";
   cin>>bookid;
   getline(cin>>ws,title);
   cin>>price;
}
void display()
{
    book b1;
    cout<<bookid<<" ";
    cout<<title<<" ";
    cout<<price;
}
};

int main()
{
    book b1;
    b1.input();
    b1.display();

}
