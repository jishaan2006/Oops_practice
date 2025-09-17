#include<iostream>
using namespace std;
int main()
{
    int key= 1234,code;
    cout<<"enter code: ";
    cin>>code;
    (code==key) ? cout<<"granted" : cout<<"denied";
    return 0;
}