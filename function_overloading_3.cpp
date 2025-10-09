#include <iostream>
using namespace std;
int volume(int a,int b,int h){
    return a*b*h;
}
float volume(int r){
    return (4/3)*3.14*r*r*r;
}
int main(){
    cout<<"The volume of sphere is "<<volume(12)<<endl;
    cout<<"the volume of cuboid is "<<volume(20,18,14)<<endl;
    return 0;
}