
//define two classe A,B having 2D array as data variable in private scope, multiply the matrices of both the class using friend function; 
//

#include<iostream>
using namespace std;

class constDataVar{
    const int a;
    public:
    int A():a(7){;};
};


class A
{
public:
    A();
    A(int b);
    A(A *);
    int somefunc();
    ~A();
};



A::A(){cout<<"declared without param.\n";};
int A::somefunc(){};
A::A(int a)
{
    cout<<a<<"\n";
}
A::A(A *z){

}

A::~A()
{
}



int main(){
    A obj1;
    A ob2(10);

    return 0;
}