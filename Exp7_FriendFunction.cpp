/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : FRIEND FUNCTION
*/
#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    friend int greatest(A a, B b);
};
class B
{
    int b;

public:
    B(int b)
    {
        this->b = b;
    }
    friend int greatest(A a, B b);
};
int greatest(A a, B b)
{
    if (a.a > b.b)
        return a.a;
    else
        return b.b;
}
int main()
{
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    A a(x);
    B b(y);
    cout << "Greatest : " << greatest(a, b);
    return 0;
}
/*
OUTPUT
------
    Enter two numbers : 5 6
    Greatest : 6
*/