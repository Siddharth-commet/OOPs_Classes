#include<iostream>
using namespace std;

class A{
    protected:
    int i;
    public:
    A(){
        cout<<"A class of def constructor"<<endl;
    }
    A(int r){

        i=r;
    }

};


class B: public A{
    int j;
    public:
    B(int j){
        cout<<"B class const"<<endl;
        this->j=j;
    }
};

int main(){
    B ob(5);
    return 0;
}