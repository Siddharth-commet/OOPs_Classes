#include<iostream>
using namespace std;

class Test{
};
class B
{
private:
    int x;
protected:
    int y;
public:     
    int z;
};

class D:protected B{
    public:
    void show(){
        y=20;
        //cout<<B::x<<" "<<y<<" "<<z;
        cout<<y<<" "<<z;
    }
};

class E: public D{
    void display(){

    }
};

int main(){
    D ob;
    B ob1;
    ob1.z = 100;
    ob.show();
    Test *t[5];
    return 0;
}