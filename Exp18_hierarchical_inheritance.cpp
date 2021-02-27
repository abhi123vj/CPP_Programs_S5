/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : HIERARCHICAL INHERITANCE
*/
#include <iostream>
using namespace std;
class SHAPE
{
protected:
    double a, b;

public:
    void getdata(double x, double y)
    {
        a = x;
        b = y;
    }
    void virtual display()
    {
        cout << "\nThis is a virtual function";
    }
};
class TRIANGLE : public SHAPE
{
    double area;

public:
    void display()
    {
        area = 0.5 * a * b;
        cout << "\nArea of the triangle is " << area << " square unit";
    }
};
class RECTANGLE : public SHAPE
{
    double area;

public:
    void display()
    {
        area = a * b;
        cout << "\nArea of the rectangle is " << area << " square unit";
    }
};
int main()
{
    SHAPE *s;
    RECTANGLE r;
    TRIANGLE t;
    double x, y;
    cout << "\nEnter length and breadth of rectangle: ";
    cin >> x >> y;
    r.getdata(x, y);
    cout << "\nEnter base and height of triangle: ";
    cin >> x >> y;
    t.getdata(x, y);
    s = &r;
    s->display();
    s = &t;
    s->display();
    return 0;
}

/*
OUTPUT
------
    Enter length and breadth of rectangle: 4.5 3.5

    Enter base and height of triangle: 5.2 7.3

    Area of the rectangle is 15.75 square unit
    Area of the triangle is 18.98 square unit
*/
