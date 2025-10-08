#include<iostream>
using namespace std;
class rectangle{
    int length,breath;
    public:
    rectangle(int a,int b){
        length=a;
        breath=b;
    }
    void area(){
        cout<<"Area is :"<<length*breath<<endl;
    }
    void perimeter(){
        cout<<"perimeter is :"<<2*(length+breath)<<endl;
    }
    void isSquare(){
        if(length==breath){
            cout<<"It is a Square";
        }
        else{
            cout<<"It is not a Square";
        }
    }
};
int main(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter Breath: ";
    cin>>b;
    rectangle obj(l,b);
    obj.area();
    obj.perimeter();
    obj.isSquare();

}