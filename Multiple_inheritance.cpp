//Multiple inheritance --> when one class inherits(Child class) properties from two 
//classes silmultaneously such that there is no relation between the two classes. 
#include<iostream>
using namespace std;
class parent1{
    public:
    void hair(){
        cout<<"Hair colour is brown\n";
    }
};
class parent2{
    public:
    void eyes(){
        cout<<"Eyes are green\n";
    }
};
class child: public parent1 ,public parent2{
    public:
    void result(){
        cout<<"The child looks like\n";
    }
};
int main(){
    child c;
    c.result();
    c.hair();
    c.eyes();
    return 0;
}

