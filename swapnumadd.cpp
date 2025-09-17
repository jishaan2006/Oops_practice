#include<iostream>
using namespace std;
int main()
{

    int a,b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"\n Values before swapping a= "<<a<<" b= "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n Values after swapping a= "<<a<<" b= "<<b;
    return 0;
}