/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : MULTILEVEL INHERITANCE
*/
#include <iostream>
#include <cstring>

using namespace std;

class STUDENT
{
protected:
    string name;
    int rollno;

public:
    STUDENT()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollno;
    }
};
class EXAM : public STUDENT
{
protected:
    float marks[6];

public:
    EXAM()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Marks in Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};
class RESULT : public EXAM
{
private:
    float total_mark;

public:
    RESULT()
    {
        total_mark = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5];
        cout << "\nName :" << name << "\t"
             << "Roll No : " << rollno << "\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "\nSubject " << i + 1 << " : " << marks[i];
        }
        cout << "\n-----------------";
        cout << "\nTotal Marks : " << total_mark;
    }
};
int main()
{
    RESULT a;
    return 0;
}
/* 
OUTPUT
------
    Name : Abhi
    Roll No: 36
    Marks in Subject 1: 10
    Marks in Subject 2: 20
    Marks in Subject 3: 30
    Marks in Subject 4: 40
    Marks in Subject 5: 50
    Marks in Subject 6: 60

    Name :Abhi      Roll No : 36

    Subject 1 : 10
    Subject 2 : 20
    Subject 3 : 30
    Subject 4 : 40
    Subject 5 : 50
    Subject 6 : 60
    -----------------
    Total Marks : 210
*/