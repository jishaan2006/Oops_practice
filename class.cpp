#include<iostream>
using namespace std;
class test            //function inside class is called method ,it can be called through constructor.
{
    public:
    int val;
    void show()
    {
        cout<<"\n asd "<<val;
    }
};
int main()
{
    test t1,t2;
    t1.val=9;
    t2.val=10;
    t1.show();
    t2.show();
    return 0;
}
