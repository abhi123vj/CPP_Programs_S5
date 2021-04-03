/*
    Name : S Abhiram
    Roll no : 18404036
    Program  : CLASS WITH PRIMITIVE DATA MEMBERS
*/
#include <iostream>
#include <cstring>
using namespace std;
class bank
{
    static int count;

public:
    int accno;
    int bal;
    string type, name;
    bank()
    {
        accno = count++;
    }
    void set(string N, string T)
    {
        type = T;
        if (type != "savings")
            bal = 500;
        else
            bal - 0;
        name = N;
        cout << "\nAccount created successfully ";
    }
    void display()
    {
        cout << "\n";
        cout << "Name :\t" << name;
        cout << "\tBalance :\t" << bal;
    }
    void deposit(int amt)
    {
        bal += amt;
        cout << "\nAmount deposited successfully ";
        cout << "\nBalance amount is " << bal;
    }
    void withdraw(int amt)
    {
        if (bal >= amt)
        {
            bal -= amt;
            cout << "\nAmount withdrawn successfully ";
            cout << "\nBalance amount is " << bal;
        }
        else
        {
            cout << "\nSorry, Insufficient Balance :";
        }
    }
};
int bank::count = 10000;
int main()
{
    string t1, t2;
    int x, i = 0, j, t3, t4, flag, pos;
    bank a[100];
    do
    {
        cout << "\n\tMenu\n1. Create\n2. Deposit\n3. Withdraw\n4. View \n5. Exit";
        cout << "\nchoose from (1-5): ";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "Enter name and account type : ";
            cin >> t1 >> t2;
            a[i].set(t1, t2);
            i++;
            break;
        case 2:
            cout << "\nEnter account number : ";
            cin >> t3;
            flag = 0;
            for (j = 0; j < i; j++)
            {
                if (a[j].accno == t3)
                {
                    pos = j;
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                cout << "\nEnter amount : ";
                cin >> t4;
                a[pos].deposit(t4);
            }
            else
                cout << "\nInvalid account number:";

            break;
        case 3:
            cout << "\nEnter account number : ";
            cin >> t3;
            flag = 0;
            for (j = 0; j < i; j++)
            {
                if (a[j].accno == t3)
                {
                    pos = j;
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                cout << "\nEnter amount : ";
                cin >> t4;
                a[pos].withdraw(t4);
            }
            else
                cout << "\nInvalid account number";
            break;
        case 4:
            cout << "\nEnter account number : ";
            cin >> t3;
            flag = 0;
            for (j = 0; j < i; j++)
            {
                if (a[j].accno == t3)
                {
                    pos = j;
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                a[pos].display();
            }
            else
                cout << "\nInvalid account number";
            break;
        case 5:
            cout << "\nThank you for using";
            break;
        default:
            cout << "\nInvalid choice";
        }
    } while (x != 5);
}
/*
OUTPUT
------
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 1
    Enter name and account type : Abhiram Savings

    Account created successfully
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 1
    Enter name and account type : Arabhi Current

    Account created successfully
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 2

    Enter account number : 10000

    Enter amount : 100

    Amount deposited successfully
    Balance amount is 600
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 4

    Enter account number : 10001

    Name :  Arabhi  Balance :       500
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 3

    Enter account number : 10001

    Enter amount : 400

    Amount withdrawn successfully
    Balance amount is 100
            Menu
    1. Create
    2. Deposit
    3. Withdraw
    4. View
    5. Exit
    choose from (1-5): 5

    Thank you for using
*/