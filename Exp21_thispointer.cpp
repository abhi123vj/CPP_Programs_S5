/*
    Name : S Abhiram
    Roll no : 18404036
    Program  : THIS POINTER
*/
#include <iostream>
#include <stdio.h>
using namespace std;
class box
{
	int l, b, h, vol;
	string name;

public:
	void getdata(int l, int b, int h, string name)
	{
		this->l = l;
		this->b = b;
		this->h = h;
		this->name = name;
		this->vol = l * b * h;
	}
	void comp(box b)
	{
		if (this->vol > b.vol)
		{
			cout << "\nVolume of " << this->name << " is larger than " << b.name;
		}
		else
		{
			cout << "\nVolume of " << b.name << " is larger than " << this->name;
		}
	}
};
int main()
{
	box bx1, bx2;
	string n1, n2;
	int l1, l2, b1, b2, h1, h2;
	cout << "\nEnter name of first box : ";
	getline(cin, n1);
	cout << "\nEnter name of second box : ";
	getline(cin, n2);
	cout << "\nEnter length, breadth and height of first box : ";
	cin >> l1 >> b1 >> h1;
	cout << "\nEnter length, breadth and height of second box : ";
	cin >> l2 >> b2 >> h2;
	bx1.getdata(l1, b1, h1, n1);
	bx2.getdata(l2, b2, h2, n2);
	bx1.comp(bx2);
	return 0;
}

/*
OUTPUT
------
	Enter name of first box : Kitkat

	Enter name of second box : Fivestar

	Enter length, breadth and height of first box : 5 4 3

	Enter length, breadth and height of second box : 7 8 9

	Volume of Fivestar is larger than Kitkat
*/
