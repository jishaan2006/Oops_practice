#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle\n";
    }
};
class Fare{
    public:
    Fare(){
        cout<<"Fare of Vehicle\n";
    }
};
class car{
    public:
    car(){
        cout<<"This Vehicle is a car\n";
    }
};
class Bus : public Vehicle, public Fare{
    public:
    Bus(){
        cout<<"This Vehicle is  a bus with fare\n";
    }
};
int main(){
    Bus obj;
    return 0;
}