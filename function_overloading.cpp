#include<iostream>
using namespace std;
class jk
{
    public:
    int plusfunc(int x,int y){
        return x+y;
    }
    double plusfunc(double x,double y){
        return x+y;
    }
};
int main()
{
    jk jishaan;
    int num1= jishaan.plusfunc(4,7);
    double num2= jishaan.plusfunc(25.34,63.73);
    cout<<"Int = "<<num1<<endl;
    cout<<"Double = "<<num2<<endl;
    return 0;
}