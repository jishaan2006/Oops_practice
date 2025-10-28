#include<iostream>
using namespace std;
class amit{
    int age=25;
    int salary=2500;
    public:
    void change_salary(int a){
        salary=a;
    }
    void change_age(int b){
        age=b;
    }
    void retrieve_data(){
        cout<<"Age : "<<age<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
};
int main(){
    amit a1;
    a1.change_salary(1000);
    a1.change_age(19);
    a1.retrieve_data();
}