#include<iostream>
using namespace std;
class yo{
    public:
    int x;
    // private:    
    int y;
};
int main(){
    yo obj;
    obj.x=25;
    obj.y=50;   //y is inaccessible due to it being private.
    return 0;

}