#include<iostream>
using namespace std;

class Number{
    int a,b,c,d;
    public:
    Number(int a=0,int b=0,int c=0,int d=0){
        this->a=a;
        this->c=c;
        this->b=b;
        this->d=d;
    }
    Number(Number &obj){
        a= obj.a;
        b=obj.b;
        c=obj.c;
        d=obj.d;
    }

    void showData(){
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
        cout<<"C: "<<c<<endl;
        cout<<"D: "<<d<<endl;
        cout<<"==============="<<endl;
    }
};

int main(){
    Number n1;
    Number n2(10,20);
    Number n3(30,40,50,60);
    Number n4(n2);
    Number n5 = n1;
    n1.showData();
    n2.showData();
    n3.showData();
    n4.showData();
    n5.showData();
    return 0;
}