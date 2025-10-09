#include <iostream>
using namespace std;
class two;
class one{
    friend class two;
    int a=24;
    public:
    void show(){
        cout<<"This is class one"<<endl;
    }
};
class two{
    friend class one;
    public:
    void show(){
        cout<<"This is class two"<<endl;
    }
    void accessoneprivate(one &obj){
        cout<<"accessing data of base class "<<obj.a<<endl;
    }
};
int main(){
    one a;
    two b;
    b.accessoneprivate(a);
}