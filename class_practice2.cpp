#include<iostream>
using namespace std;
class myFriend{
    public:
    virtual void  myshoes(){
        cout << "These are my friend's shoes." << endl;
    }
};
class me :public myFriend{
    public:
    void myshoes()override{
        cout<<"These are my shoes now"<<endl;
    }
};
int main(){
    me m;
    m.myshoes();
}