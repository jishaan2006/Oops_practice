#include<iostream>
using namespace std;
class lop
{
    public:
    int plusfunc(int x,int y){
        return x+y;
    }
    double plusfunc(int x,int y,int z){
        return x+y+z;
    }
};
int main()
{
    lop jishaan;
    int num1= jishaan.plusfunc(4,2);
    double num2= jishaan.plusfunc(25,63,31);
    cout<<"Int = "<<num1<<endl;
    cout<<"double = "<<num2<<endl;
    return 0;
}