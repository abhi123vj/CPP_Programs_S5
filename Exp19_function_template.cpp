/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : FUNCTION TEMPLATE
*/
#include <iostream>
using namespace std;
template <typename T>
void Swap(T x, T y)
{
    T temp;
    cout << "\nBefore swapping variable 1 is " << x << " and variable 2 is " << y;
    temp = x;
    x = y;
    y = temp;
    cout << "\nAfter swapping variable 1 is " << x << " and variable 2 is " << y;
}
int main()
{
    int a1, b1;
    char a2, b2;
    float a3, b3;
    double a4, b4;
    cout << "\nEnter two integers :";
    cin >> a1 >> b1;
    cout << "\nEnter two characters :";
    cin >> a2 >> b2;
    cout << "\nEnter two float values :";
    cin >> a3 >> b3;
    cout << "\nEnter two double values :";
    cin >> a4 >> b4;
    Swap<int>(a1, b1);
    Swap<char>(a2, b2);
    Swap<float>(a3, b3);
    Swap<double>(a4, b4);
    return 0;
}

/*
OUTPUT
------
    Enter two integers :4 8

    Enter two characters :a b

    Enter two float values :4.5 3.6

    Enter two double values :48.33 98.45

    Before swapping variable 1 is 4 and variable 2 is 8
    After swapping variable 1 is 8 and variable 2 is 4
    Before swapping variable 1 is a and variable 2 is b
    After swapping variable 1 is b and variable 2 is a
    Before swapping variable 1 is 4.5 and variable 2 is 3.6
    After swapping variable 1 is 3.6 and variable 2 is 4.5
    Before swapping variable 1 is 48.33 and variable 2 is 98.45
    After swapping variable 1 is 98.45 and variable 2 is 48.33
*/
