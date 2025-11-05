#include<iostream>
using namespace std;

class base{
    int a;
    public:
    virtual void show(){
        cout<<"hi"<<endl;
    }

};

class derived : public base{
    int b;
    public:
    virtual void show(){
        cout<<"hello"<<endl;
    }
};

int main(){
    base* ob = new derived;
    ob->show();




    return 0;
}