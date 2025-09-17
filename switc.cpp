#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char o;
    cin>> a >> b >> o;
    switch (o)
    {
    case '+' :cout<<a+b;break;
    case '-' :cout<<a-b;break;
    case '*' :cout<<a*b;break;
    case '/' :cout<<a/b;break;

    default:cout<< "Invalid Operator";break;
    }
    return 0;
}