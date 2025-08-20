// No effect of public or Private
// cant be defined in a class
// cant be called with an object

#include<bits/stdc++.h>
using namespace std;

class MyClass {
private:
    int secret;

public:
    MyClass(int s=10) : secret(s) {}

    // Declaring a friend function
    friend void revealSecret(MyClass obj);
};

// Definition of friend function
void revealSecret(MyClass obj) {
    // Even though revealSecret is not a member of MyClass,
    // it can still access private data
    std::cout << "Secret is: " << obj.secret << std::endl;
}

int main(){
    MyClass secretClass(152);
    revealSecret(secretClass);

    return 0;
}