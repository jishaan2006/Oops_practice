//objects communicate with eachother
#include<iostream>
using namespace std;
class Cars{ 
    public:
    void StartEngine(){
        cout<<"Engine started"<<endl;
    }
};
class driver{
    public:
    void drive(Cars &yo){
        yo.StartEngine();
        cout<<"Car is being driven";
    }
};
int main(){
    Cars maruti;
    driver mahesh;
    mahesh.drive(maruti);
}