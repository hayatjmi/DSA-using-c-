#include<iostream>
using namespace std;
int main()
{
    struct car
    {
       string brand;
       string model;
       int year;
    };
    car my_car1;
    my_car1.brand= "maruti suzuki";
    my_car1.model= "baleno";
    my_car1.year=2015;

    
    car my_car2;
    my_car2.brand="mahindra";
    my_car2.model="thar";
    my_car2.year=2020;

    cout<<endl;


    cout<<my_car1.brand<<" "<<my_car1.model<<" "<<my_car1.year<<endl;
    cout<<my_car2.brand<<" "<<my_car2.model<<" "<<my_car2.year;

}