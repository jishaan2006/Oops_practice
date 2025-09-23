#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Animal is eating\n";
    }
};
class bird : public animal{
    public:
    void wings(){
        cout<<"Bird is flying\n";
    }
};
class mamal : public animal{
    public:
    void navigation(){
        cout<<"Mamal is navigating\n";
    }
};
class bat:public bird , public mamal{
    public :
    void colour(){
        cout<<"Bat is black in colour\n";
    }
};
int main(){
    bat b;
    b.colour();
    b.wings();
    b.navigation();
    return 0;
}