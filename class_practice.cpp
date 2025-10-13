#include<iostream>
using namespace std;

class Hero{
    protected:
    int power;
    public:

    void set_power(int p){
        power = p;
    }

    int get_power(){
        return power;
    }
};
class Villan{
    protected:
    int power;

public:
    void set_power(int p)
    {
        power = p;
    }

    int get_power()
    {
        return power;
    }
};

class Comparision: private Hero, private Villan{

    public:
    void power_comp(Hero &H, Villan &V){
        if(H.get_power()>V.get_power()){
            cout<<"Hero is stronger"<<endl;
            return;

        }
        cout<<"Villan is stronger"<<endl;
    }
};

int main(){
    Hero CA;
    Villan Skull;
    CA.set_power(150);
    Skull.set_power(100);
    Comparision C;
    C.power_comp(CA, Skull);
}
