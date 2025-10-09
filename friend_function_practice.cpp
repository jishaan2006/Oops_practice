#include <iostream>
using namespace std;
class jishaan;
class vanshika{
    int amt;
    public:
    void set(int a){
        amt=a;
    }
    friend void multiply(jishaan,vanshika);
};
class jishaan{
    int amt;
    public:
    void set(int a){
        amt=a;
    }
    friend void multiply(jishaan,vanshika);
};
void multiply(jishaan obj1,vanshika obj2){
    cout<<"Product of amt is : "<<obj1.amt*obj2.amt<<endl;
}
int main(){
    jishaan j;
    vanshika v;
    j.set(20);
    v.set(3);
    multiply(j,v);
    return 0;
}