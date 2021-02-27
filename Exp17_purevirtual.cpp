/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : PURE VIRTUAL FUNCTION
*/
#include <iostream>
using namespace std;
int *q, *s;
class LIST
{
public:
	virtual void store(int item) = 0;
	virtual void retrieve() = 0;
};
class STACK : public LIST
{
	int TOP, MAX;

public:
	STACK(int N)
	{
		MAX = N;
		s = new int(N);
		TOP = -1;
	}
	void store(int item)
	{
		if (TOP < MAX - 1)
		{
			TOP++;
			*(s + TOP) = item;
			cout << "\nSuccessfully stored";
		}
		else
		{
			cout << "\nStack overflow";
		}
	}
	void retrieve()
	{
		if (TOP == -1)
		{
			cout << "\nStack underflow";
		}
		else
		{
			int item = *(s + TOP);
			TOP--;
			cout << "\nRetrieved item is " << item;
		}
	}
};
class QUEUE : public LIST
{
	int FRONT, REAR, MAX;

public:
	QUEUE(int N)
	{
		MAX = N;
		q = new int(N);
		FRONT = -1;
		REAR = -1;
	}
	void store(int item)
	{
		if ((FRONT == -1 && REAR == -1) || (FRONT > REAR))
		{
			FRONT = 0;
			REAR = 0;
			*(q + REAR) = item;
			cout << "\nSuccessfully stored";
		}
		else if (REAR < MAX - 1)
		{
			REAR++;
			*(q + REAR) = item;
			cout << "\nSuccessfully stored";
		}
		else
		{
			cout << "\nQueue overflow";
		}
	}
	void retrieve()
	{
		if (FRONT > REAR || FRONT == -1)
		{
			cout << "\nQueue underflow";
		}
		else
		{
			int item;
			item = *(q + FRONT);
			FRONT++;
			cout << "\nRetrieved item is " << item;
		}
	}
};
int main()
{
	LIST *l;
	int x, y, ch, z;
	cout << "\nEnter size of stack and queue : ";
	cin >> x >> y;
	STACK stk(x);
	QUEUE que(y);
	do
	{
		cout << "\n\tMenu\n1.Stack Store\n2.Stack Retrieve\n3.Queue Store\n4.Queue Retrieve\n5.Exit";
		cout << "\nChoose from (1-5) : ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter an element to be stored: ";
			cin >> z;
			l = &stk;
			l->store(z);
			break;
		case 2:
			l = &stk;
			l->retrieve();
			break;
		case 3:
			cout << "\nEnter an element to be stored: ";
			cin >> z;
			l = &que;
			l->store(z);
			break;
		case 4:
			l = &que;
			l->retrieve();
			break;
		case 5:
			break;
		default:
			cout << "\nInvalid Entry";
		}
	} while (ch != 5);
	return 0;
}

/*
OUTPUT
------
	Enter size of stack and queue : 4 5

		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : ^C
	s5cs42@sslab-ThinkCentre-M55e:~/Desktop/Anantha Raman S5 cse$ ./a.out
	Enter size of stack and queue : 3 3

		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 1 

	Enter an element to be stored: 2

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 1

	Enter an element to be stored: 55

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 1

	Enter an element to be stored: 45

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 1

	Enter an element to be stored: 85

	Stack overflow
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 2

	Retrieved item is 45
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 3

	Enter an element to be stored: 45

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 3

	Enter an element to be stored: 89

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 3 

	Enter an element to be stored: 65

	Successfully stored
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 3

	Enter an element to be stored: 8

	Queue overflow
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 2

	Retrieved item is 55
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 2

	Retrieved item is 2
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 2

	Stack underflow
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 4

	Retrieved item is 45
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 4

	Retrieved item is 89
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 4

	Retrieved item is 65
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 4

	Queue underflow
		Menu
	1.Stack Store
	2.Stack Retrieve
	3.Queue Store
	4.Queue Retrieve
	5.Exit
	Choose from (1-5) : 5
*/
