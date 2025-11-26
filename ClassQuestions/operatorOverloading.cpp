#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x, int y){
        a=x;
        b=y;
    }
    friend void operator++(A &);
    friend void operator++(A &, int);//postincrement
    friend void operator+(A &, A&);
    // void operator-(){
    //     a=-a;
    //     b=-b;
    // }
    void show(){
        cout<<a<<endl<<b<<endl;
    }
};

void operator+(A &a, A&b){

};

void operator++(A &z){
    z.a=-z.a;
    z.b=-z.b;
}

void operator++(A &z, int l){
    z.a=9;
    z.b=10;
}

class complex{
    public:
    int real, imaginary;
    complex(){
        real=0;
        imaginary=0;
    }
    complex(int r, int i) {
        real = r;
        imaginary = i;
    }
    friend complex operator+(complex &, complex &);
    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

complex operator+(complex &a, complex &b) {
    complex temp;
    temp.real = a.real + b.real;
    temp.imaginary = a.imaginary + b.imaginary;
    return temp;
}


int main(){

    A obj(5,6);
    ++obj;//obj.operator-();

    complex c1(1,2);
    complex c2(2,4);
    complex c3 = c1+c2;
    c3.show();
    // unary --,++
    // binary +,-,shift, paranthesis assignment operators;
}
