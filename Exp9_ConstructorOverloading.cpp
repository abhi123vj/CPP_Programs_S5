/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : CONSTRUCTOR OVERLOADING
*/
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
    }
    complex sum(complex obj1, complex obj2)
    {
        complex temp;
        temp.real = obj1.real + obj2.real;
        temp.img = obj1.img + obj2.img;
        return temp;
    }
    complex(int a)
    {
        real = a;
        img = a;
        cout << "The complex number is ";
        cout << real;
        if (img < 0)
        {
            cout << " - i" << -img;
        }
        else
        {
            cout << " + i" << img;
        }
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
        cout << "The complex number is ";
        cout << real;
        if (img < 0)

            cout << " - i" << -img;

        else

            cout << " + i" << img;
    }
    void display()
    {
        cout << real;
        if (img < 0)

            cout << "- i" << -img;
        else
            cout << " + i" << img;
    }
};
int main()
{
    int a, c, d;
    complex z;
    cout << "\nEnter real and imaginary part of X: ";
    cin >> a;
    complex x(a);
    cout << "\nEnter real and imaginary part of Y: ";
    cin >> c >> d;
    complex y(c, d);
    z = z.sum(x, y);
    cout << "\nSum=";
    z.display();
    return 0;
}
/*
OUTPUT
------
    Enter real and imaginary part of X: 5
    The complex number is 5 + i5
    Enter real and imaginary part of Y: 4 6
    The complex number is 4 + i6
    Sum=9 + i11
*/