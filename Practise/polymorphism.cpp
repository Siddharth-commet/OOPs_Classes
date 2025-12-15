#include<iostream>
using namespace std;

//Compile time polymorphism:
// static

//virtual function

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading +
    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
};


class Print{
public:
    void show(int x){
        cout<<"char : "<< x << endl;
    }
    void show(char x){
        cout<<"char : "<< x << endl;
    }

};

class Parent{
    public:
    void getInfo()
    {
        cout<<"parent class\n";
    }
    virtual void hello(){
        cout<<"hello from parent";
    }
};

class child : public Parent{
    public:
    void getInfo(){
        cout<<"child classs";
    }
    void hello(){
        cout<<"hello from child";
    }
};
//function overriding: same function, one in parent one in child. child function has higher priority

int main(){
    Print p1;

    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    cout << c3.real << " + " << c3.imag << "i";



    return 0;
}


