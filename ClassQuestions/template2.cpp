#include<iostream>
using namespace std;
template<class X1, class X2>
class A{

    public:
    X1 a;
    X2 b;
    template<class X3, class X4> void show(X1 x,X2 y, X3 z){
        X4 t;
        cout<<sizeof(x)<<" ";
        cout<<sizeof(y)<<" ";
        cout<<sizeof(z)<<" ";
        cout<<endl;
        
    }

};

int main(){
    A <int, double> obj1;
    obj1.show<float,int>(1,1.2,3.0);
}