#include<iostream>
using namespace std;
class Student{
    string name;
    int roll,marks;
    public:
    Student(string a,int m,int r){
        name =a;
        marks= m;
        roll=r;
    }
    void display(){
        cout<<"Name is "<<name<<endl;
        cout<<"Roll nunber is "<<roll<<endl;
        cout<<"Marks are "<<marks<<endl;
    }
};
int main(){
    Student obj1("jishaan",53,63);
    obj1.display();
    return 0;
}
