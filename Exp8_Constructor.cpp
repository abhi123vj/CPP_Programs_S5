/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : CONSTRUCTOR
*/
#include <iostream>
using namespace std;
class fib
{
    int t1, t2, t3;

public:
    fib()
    {
        t1 = 0;
        t2 = 1;
    }
    void disp(int n)
    {
        if (n == 1)
            cout << t1;

        else if (n == 2)
            cout << t1 << "\t" << t2;
        else if (n > 2)
        {
            cout << t1 << "\t" << t2;
            for (int i = 2; i < n; i++)
            {
                t3 = t1 + t2;
                t1 = t2;
                t2 = t3;
                cout << "\t" << t3;
            }
        }
        else
        {
            cout << "Invalid limit";
        }
    }
};
int main()
{
    int n;
    fib f;
    cout << "\nEnter limit : ";
    cin >> n;
    cout << "\n";
    f.disp(n);
    return 0;
}
/*
OUTPUT
------
    Enter limit : 5

    0       1       1       2       3
*/