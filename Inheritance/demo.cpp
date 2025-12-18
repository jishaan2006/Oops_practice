#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    Demo(){
        x=2;
        cout<<"Constructed\n";
    }
    ~Demo(){
        cout<<"Destructed\n";
    }
};
int main(){
    Demo a;
    {
        Demo b;
    }
    Demo *C=new Demo;
}