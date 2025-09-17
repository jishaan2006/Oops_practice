#include<iostream>
using namespace std;
class Car
{
    public:
    string Brand;
    string Model;
    int year;
    Car(string x,string y,int z)
    {
        Brand=x;
        Model=y;
        year=z;
    }
};
int main()
{
Car car1("BMW","MV Comp",2024);
Car car2("Swift","desire",2019);
cout<< car1.Brand<<" "<<car1.Model<<" "<<car1.year<<"\n";
cout<< car2.Brand<<" "<<car2.Model<<" "<<car2.year<<"\n";
}