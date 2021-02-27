/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : Unary OPERATOR OVERLOADING
*/
#include <iostream>
using namespace std;
class C
{
public:
    static int count;
    void operator++()
    {
        count++;
        cout << "\nNo: of customers inside the bank is " << count;
    }
    void operator++(int)
    {
        count++;
        cout << "\nNo: of customers inside the bank is " << count;
    }
    void operator--()
    {
        count--;
        cout << "\nNo: of customers inside the bank is " << count;
    }
    void operator--(int)
    {
        count--;
        cout << "\nNo: of customers inside the bank is " << count;
    }
};
int C::count = 0;
int main()
{
    C obj;
    int ch;
    do
    {
        cout << "\n\tMenu\nl. Customer Enters\n2. Customer Leaves\n3. Exit";
        cout << "\nPress any key from 1-3: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj++;
            break;
        case 2:
            if (obj.count == 0)
                cout << "\nThere are no customers inside the bank";

            else
                obj--;

            break;
        case 3:
            break;
        default:
            cout << "\nInvalid key ";
        }
    } while (ch != 3);
}
/*
OUTPUT
------
        Menu
    l. Customer Enters
    2. Customer Leaves
    3. Exit
    Press any key from 1-3: 1

    No: of customers inside the bank is 1
            Menu
    l. Customer Enters
    2. Customer Leaves
    3. Exit
    Press any key from 1-3: 1

    No: of customers inside the bank is 2
            Menu
    l. Customer Enters
    2. Customer Leaves
    3. Exit
    Press any key from 1-3: 2

    No: of customers inside the bank is 1
            Menu
    l. Customer Enters
    2. Customer Leaves
    3. Exit
    Press any key from 1-3: 2

    No: of customers inside the bank is 0
            Menu
    l. Customer Enters
    2. Customer Leaves
    3. Exit
    Press any key from 1-3: 3
*/