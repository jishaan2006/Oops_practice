#include <iostream>
using namespace std;
class suresh;
class mukesh{
    int amt;
    public:
    void set_amt(int a){
        amt=a;
    }
    friend void add(suresh,mukesh);
};
class suresh{
    int amt;
    public:
    void set_amt(int a){
        amt=a;
    }
    friend void add(suresh,mukesh);
};
void add(suresh obj1,mukesh obj2){
    cout<<"Sum of two objects from definition of class one and two is : "<<obj1.amt+obj2.amt<<endl;
}
int main(){
    suresh a;
    mukesh b;
    a.set_amt(200);
    b.set_amt(300);
    add(a,b);
    return 0;
}