#include<iostream>
using namespace std;
class Parent // Parent is base class (parent class)
{
    public :
    int n;
    void print(){
        cout<<n<<endl;
    }
};
class Child : public Parent  // Child is derived class (Child class)
{
    public :
    void set_name(){
        n=22;
    }
};
int main(){
    Parent P1;
    Child C1;
    C1.set_name();
    C1.print();
}