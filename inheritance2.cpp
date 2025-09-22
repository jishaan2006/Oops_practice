#include<iostream>
#include<string>
using namespace std;
class Vehicle // Vehicle is base class (parent class)
{
    public:
    string brand ="Ford";
    void honk(){
        cout<<"tuut,tuut !\n";
    }
};
class Car : public Vehicle // Car is derived class as it inherits from Vehicle (Child class)
{
    public :
    string model = "Mustang";
};
int main(){
    Car mycar;
    mycar.honk();
    cout<<mycar.brand + " " + mycar.model;
    return 0;
}