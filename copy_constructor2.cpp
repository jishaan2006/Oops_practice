#include <iostream>
using namespace std;
class Myclass{
        int age;
        string name;
    public:
    Myclass(int a,string s){
        age =a;
        name=s;
    }
    Myclass(const Myclass &other){//parameterised copy conctructor.
        age = other.age;
        name = other.name;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main(){
    Myclass obj1(18,"Jishaan");
    Myclass obj2(obj1);
    Myclass obj3(obj1);
    cout << "Displaying objects:\n";
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
