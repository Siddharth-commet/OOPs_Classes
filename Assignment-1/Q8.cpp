//8.Implement namespace in a program to illustrate the use of same name variables and functions in different sections/libraries of the code.

#include <iostream>
using namespace std;
int value = 1314;
namespace Library1 {
    int value = 10;

    void show() {
        cout << "Library1::value = " << value << endl;
    }
}
namespace Library2 {
    int value = 20;
    void show() {
        cout << "Library2::value = " << value << endl;
    }
}

int main() {
    cout << "Using Library1:" << endl;
    Library1::show();           
    cout << "Value = " << Library1::value << endl;
    cout << "\nUsing Library2:" << endl;
    Library2::show();
    cout << "Value = " << Library2::value << endl;
    cout << "Value = " << value << endl;
    return 0;
}


