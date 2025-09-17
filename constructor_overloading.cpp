#include<iostream>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    int year;
    Car(){
        brand="None";
        model="None";
        year=0;
    }
    Car(string a,string b,int c){
        brand=a;
        model=b;
        year=c;
    }
};
int main()
{
    Car car1;
    Car car3("WagonR","Base",2011);
    Car car2("Swift","desire",2006);
    cout<<"car1:"<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<"car2:"<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;
    cout<<"car3:"<<car3.brand<<" "<<car3.model<<" "<<car3.year<<endl;
}