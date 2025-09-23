#include<iostream>
using namespace std;
class Animal{
    public :
    void eat(){
        cout<<"The animal eats food\n";
    }
};
class Mamal : public Animal{
    public :
    void walk(){
        cout<<"The mamal walks on land\n";
    }
};
class Dog : public Mamal{
    public :
    void Bark(){
        cout<<"The dog barks\n";
    }
};
int main(){
    Dog d;
    d.eat();
    d.walk();
    d.Bark();
    return 0;
}
    
