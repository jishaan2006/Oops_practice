#include<iostream>
using namespace std;
class grandfather{
    public:
    void print(){
    cout<<"jishaan";
    }
};
class father: public grandfather{
};
class son : public father{
};
int main(){
    son obj;
    obj.print();
}