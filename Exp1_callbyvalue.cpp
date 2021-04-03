/*
    Name : S Abhiram
    Roll no : 18404036
    Program  : CALL BY VALUE
*/
#include <iostream>
using namespace std;
class S
{
public:
    void swap(int x, int y)
    {
        int temp;
        cout << "\nBefore swapping\n";
        cout << "a = " << x << " b = " << y;
        cout << "\n---------------";
        temp = x;
        x = y;
        y = temp;
        cout << "\nAfter swapping\n";
        cout << "a = " << x << " b = " << y;
    }
};
int main()
{
    S obj;
    int a, b;
    cout << "\nEnter two numbers :";
    cin >> a >> b;
    obj.swap(a, b);
    cout << "\n\nValue of actual parameter a = " << a << " b = " << b;
}
/*
OUTPUT
------
   Enter two numbers :5 6

    Before swapping
    a = 5 b = 6
    ---------------
    After swapping
    a = 6 b = 5

    Value of actual parameter a = 5 b = 6
*/