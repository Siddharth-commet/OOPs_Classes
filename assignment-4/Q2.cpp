// 2.Write a C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
using namespace std;

class squareGiver{
    public:
    int x;
    squareGiver(int x){
        this->x=x;
        cout<<"the square is: "<<x*x<<" ";
    }
};

class cubeGiver: public squareGiver{
    public:
    cubeGiver(int x) : squareGiver(x){ cout<<"but the cube is this: "<<x*x*x;}
};


int main(){
    cubeGiver A(10);
    return 0;
}