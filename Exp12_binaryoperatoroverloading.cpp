/*
    Name : S Abhiram
    Roll no : 18404036
    Program  : BINARY OPERATOR OVERLOADING
*/
#include <iostream>
#include <string.h>
using namespace std;
class Add
{
public:
    string str;
    Add() {}
    Add(string s1)
    {
        str = s1;
    }
    Add operator+(Add s2)
    {
        Add s3;
        s3.str = str + s2.str;
        return s3;
    }
};
int main()
{
    char str1[30], str2[30];
    string st1, st2;
    cout << "Enter two strings :\n";
    getline(cin, st1);
    getline(cin, st2);
    Add a1(st1);
    Add a2(st2);
    Add a3;
    // fflush(stdin);
    // gets(str1);
    // gets(str2);
    // Add a1(str1);
    // Add a2(str2);

    a3 = a1 + a2;
    cout << "\nConcatenate string is " << a3.str;
    return 0;
}
/*
OUTPUT
------
    Enter two strings : 
    S Abhi
    ram

    Concatenate string is S Abhiram
*/