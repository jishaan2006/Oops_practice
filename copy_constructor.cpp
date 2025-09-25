#include <iostream>
using namespace std;
class myclass
{
    int x;
    float y;
    public:
    myclass(){
        x = 0;
        y = 2;
    }
    myclass(const myclass &other){
        x = other.x;
        y = other.y;
    }
    void display(){
        cout << "x:" << x << ",y:" << y << endl;
    }
};
int main() {
    myclass a1;    
    a1.display();
    myclass b1=a1; //using the copy constructor to create a new object as a copy of a1.
    b1.display();
    return 0;
}