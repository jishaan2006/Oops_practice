#include<iostream>
using namespace std;
class BankAccount{
    string name;
    int accnum,balance;
    public:
    BankAccount(string n,int a,int b){
        accnum=a;
        balance=b;
        name=n;
    }
    void deposit(int d){
        balance=balance+d;
    }
    void withdraw(int e){
        if(balance<e){
        cout<<"Insufficient balance\n";
        return;
    }
        balance=balance-e;
    }
    void showBalance(){
        cout<<"Your Name is: "<<name<<endl;
        cout<<"Your Balance is: "<<balance<<endl;
        cout<<"Your Acc number is:"<<accnum<<endl;
    }
};
int main(){
    int ch,damount,wamount;
    BankAccount obj("Jishaan",124,0);
    cout<<"choices:\n1.Deposit\n2.withdraw\n";
    cin>>ch;
    switch (ch)
    {
    case 1:     
        cout<<"Enter amount to deposit :";
        cin>>damount;
        obj.deposit(damount);
        break;
    case 2:
        cout<<"Enter amount to withdraw :";
        cin>>wamount;
        obj.withdraw(wamount);
        break;
    }
    obj.showBalance();
}