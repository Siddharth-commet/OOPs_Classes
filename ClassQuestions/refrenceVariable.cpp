//it does not have its own identity bu slias to some variable
// (1) A reference must be initialized when it is declared.
// (2)Once a reference is bound to a variable, it cannot be changed to refer to another variable:

//&a;
//*a;


// 🔹 What is a Reference Variable?

// A reference variable is just another name (alias) for an existing variable.
// It does not create a new variable; it just gives a new way to refer to the same memory location.

// Declared with the "&" symbol.

// 🔹 Syntax
// int x = 10;
// int &ref = x;   // ref is a reference to x


// Here, ref is not a new variable.

// Both x and ref refer to the same memory.

// So:
// ref = 20;   // changes x also
// cout << x;  // prints 20

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &b = a; // b is a reference to a

    cout << "a = " << a << ", b = " << b << endl;

    b = 10; // changing b also changes a
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
