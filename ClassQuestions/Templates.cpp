#include<iostream>
using namespace std;

template <class X1, class X2> void show(X1 a, X2 c){
    X2 b;
    b=7.8;
    cout<<sizeof(a)<<endl;
}

// void show(int a){
//     cout<<"int\n";
// }
// void show(double a){
//     cout<<"double\n";
// }

// void show(char a){
//     cout<<"char\n";
// }

int main(){

    show(4,4);
    show(4.5,5);
    show('a',4);
}