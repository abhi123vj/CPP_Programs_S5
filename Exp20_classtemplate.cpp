/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : CLASS TEMPLATE
*/
#include <iostream>
using namespace std;
template <typename T>
class fsum
{
	T x, y;

public:
	void getdata(T a, T b)
	{
		x = a;
		y = b;
	}
	void sum()
	{
		T sum;
		sum = x + y;
		cout << "\nSum of " << x << " and " << y << " = " << sum;
	}
};
int main()
{
	fsum<int> obj1;
	fsum<float> obj2;
	fsum<double> obj3;
	int x1, y1;
	float x2, y2;
	double x3, y3;
	cout << "\nEnter two integer values :";
	cin >> x1 >> y1;
	cout << "\nEnter two float values :";
	cin >> x2 >> y2;
	cout << "\nEnter two double values :";
	cin >> x3 >> y3;
	obj1.getdata(x1, y1);
	obj2.getdata(x2, y2);
	obj3.getdata(x3, y3);
	obj1.sum();
	obj2.sum();
	obj3.sum();
	return 0;
}

/*
OUTPUT
------
	Enter two integer values :45 4 

	Enter two float values :2.5 63.4

	Enter two double values :45.898 36.486

	Sum of 45 and 4 = 49
	Sum of 2.5 and 63.4 = 65.9
	Sum of 45.898 and 36.486 = 82.384
*/
