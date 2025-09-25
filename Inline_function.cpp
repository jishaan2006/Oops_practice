#include<iostream>
using namespace std;
inline int add(int a,int b){  //this will be inside main and compiler will not need to search it.
    return a+b;
}
int main(){
    cout<<"sum: "<<add(3,7)<<endl;
    return 0;
}