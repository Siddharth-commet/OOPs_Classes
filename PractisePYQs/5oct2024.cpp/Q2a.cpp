#include<iostream>
using namespace std;

class car{
    int speed;
    float fuel;
    public:
    car(int speed,float fuel){
        this->speed = speed;
        this->fuel = fuel;
    }
    void display(){
        cout<<"fuel: "<<fuel<<"\n";
        cout<<"speed: "<<speed;
    }
};

int main(){
    car c1(10,20);
    c1.display();
    return 0;
}