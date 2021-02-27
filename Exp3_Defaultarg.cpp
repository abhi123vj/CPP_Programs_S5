/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : DEFAULT ARGUMENT
*/
#include <iostream>
using namespace std;
class P
{
public:
    void power(double m, int n = 2)
    {
        int i = 0;
        double result = 1;
        while (i < n)
        {
            result *= m;
            i++;
        }
        cout << "\n"
             << m << " to the power " << n << " is " << result;
    }
};
int main()
{
    P obj;
    double a;
    int b;
    cout << "\nEnter a double type number and integer number :";
    cin >> a >> b;
    obj.power(a, b);
    obj.power(a);
}
/*
OUTPUT
------
    Enter a double type number and integer number :3.2 4
    3.2 to the power 4 is 104.858
    3.2 to the power 2 is 10.24
*/