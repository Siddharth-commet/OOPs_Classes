#include<iostream>
using namespace std;

class Triangle{
    float base, height;
    public: 
    Triangle(float base = 0, float height = 0){
        this->base = base;
        this->height = height;
    }
    void show(){
        cout<<"base: "<<base;
        cout<<"height: "<<height;
    }
    Triangle compareArea(Triangle &t1,Triangle &t2){
        if (0.5*t1.base*t1.height >= 0.5*t2.base*t2.height)
        {
            return t1;
        }
        else{
            return t2;
        }
        
    }
};

int main(){
    Triangle t1(10,20);
    Triangle t2(20,40);
    Triangle t3 = t2.compareArea(t2,t1);
    t3.show();

    return 0;
}