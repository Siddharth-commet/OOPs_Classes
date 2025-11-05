#include<iostream>
using namespace std;

class X{
    char arr[2] = {'a','b'};
    public:
    X(){

    }

    void showString(){
        for (int i = 0; i < 2; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

class Y{
    char arr[2] = {'c','d'};
    public:
    void showString(){
        for (int i = 0; i < 2; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    Y(){

    }
};

class Z : public X,Y{
    char arr[4];
    public:
    void concateString(){
        for (int i = 0; i < 4; i++)
        {
         
            
        }
    }
    Z(){

    }
};

int main(){

    return 0;
}