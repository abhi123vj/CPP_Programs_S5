/*
    Name : S Abhiram
    Roll no : 18404036
    Program  : FUNCTION OVERLOADING
*/
#include <iostream>
using namespace std;
class V
{
    float vol;

public:
    void volume(int a)
    {
        vol = (a * a * a);
        cout << "\nVolume of cube is " << vol << " cubic unit";
    }
    void volume(float r)
    {
        vol = (4 / 3) * 3.14 * (r * r * r);
        cout << "\nVolume of sphere is " << vol << " cubic unit";
    }
    void volume(float r, float h)
    {
        vol = 3.14 * (r * r) * h;
        cout << "\nVolume of cylinder is " << vol << " cubic unit";
    }
};
int main()
{
    V obj;
    int a;
    float r1, r2, h;
    cout << "Enter edge length of cube :";
    cin >> a;
    cout << "Enter radius of sphere :";
    cin >> r1;
    cout << "Enter radius and height of cylinder :";
    cin >> r2 >> h;
    obj.volume(a);
    obj.volume(r1);
    obj.volume(r2, h);
}
/*
OUTPUT
------
    Enter edge length of cube :5
    Enter radius of sphere :6
    Enter radius and height of cylinder :7 8

    Volume of cube is 125 cubic unit
    Volume of sphere is 678.24 cubic unit
    Volume of cylinder is 1230.88 cubic unit
*/