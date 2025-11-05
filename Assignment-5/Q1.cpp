#include <iostream>
using namespace std;

class alpha
{
    int a, b;

public:
    alpha(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    int returnVars()
    {
        cout << a << endl;
        cout << b << endl;
        return a, b;
    }
};

class beta
{
    int c, d;

public:
    beta(int c = 0, int d = 0)
    {
        this->c =c;
        this->d=d;
    };
    int returnVars()
    {
        cout << c << endl;
        cout << d << endl;
        return c, d;
    }
};

class gamma : public alpha, beta
{
    public:
    gamma(int a=0, int b=0, int c=0, int d=0): alpha(a,b), beta(c,d)
    {
        
    }
    void show()
    {
        alpha::returnVars();
        beta::returnVars();
    }
};

int main()
{
    gamma obj1(1,2,3,4);
    obj1.show();

    return 0;
}