/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : MULTIPLE INHERITANCE
*/
#include <iostream>

using namespace std;

class Rectangle
{

protected:
    float length;
    float breadth;
};

class Shape
{
public:
    float getArea(float l, float b, float h)
    {
        return 2 * (l * b + b * h + h * l);
    }
    float getVolume(float l, float b, float h)
    {
        return l * b * h;
    }
};

class Cuboid : public Rectangle, public Shape
{

    float height;

public:
    Cuboid()
    {
        length = 25.4;
        breadth = 12.8;
        height = 2.65;
    }
    float Area()
    {
        return getArea(length, breadth, height);
    }
    float Volume()
    {
        return getVolume(length, breadth, height);
    }
};

int main()
{
    Cuboid rt;
    cout << "Area : " << rt.Area() << endl;
    cout << "Volume  : " << rt.Volume() << endl;
    return 0;
}
/*
OUTPUT
------
    Area : 852.7
    Volume  : 861.568
*/