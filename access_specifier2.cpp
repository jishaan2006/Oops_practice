#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    double attendance;
    public:
    string name;

void setname(string n)
{
    name = n;
}
string getname()
{
    return name; 
}
void setmarks(int m)
{
    marks= m;
}
int getmarks()
{
    return marks;
}
void setattendance(double a)
{
    attendance=a;
}
double getattendance()
{
    return attendance;
}
};
int main()
{
    Student s1;
    s1.setname("Jishaan");
    s1.setmarks(70);
    s1.setattendance(85);
    cout<<"name = "<<s1.getname()<<endl;
    cout<<"marks = "<<s1.getmarks()<<endl;
    cout<<"attendence = "<<s1.getattendance()<<endl;

}
