#include<iostream>
using namespace std;
class outer
{ 
    public:
    class inner
    {
        public:
        void display()
        {
            cout<<"Inner class\n";
        }
    };
};
int main()
{
    outer::inner obj;
    obj.display();

    return 0;
}