#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int x=5;
    A(float a)
    {
        x = a;
        cout << "Default Const\n";
    }
    A(A &z)
    {
        cout << "Copy Const\n";
        x = z.x + 90;
    }
    void output()
    {
        cout << x << "\n";
    }
};
int main()
{
    A ob1(9);
    A ob2 = ob1; //A ob2(ob1);
    ob1.output();
    ob2.output();
    // Ob1.f();
    return 0;
}