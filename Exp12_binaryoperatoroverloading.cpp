/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : BINARY OPERATOR OVERLOADING
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Add
{
public:
    char str[30];
    Add() {}
    Add(char s1[])
    {
        strcpy(str, s1);
    }
    Add operator+(Add s2)
    {
        Add s3;
        strcpy(s3.str, str);
        strcat(s3.str, s2.str);
        return s3;
    }
};
int main()
{
    char str1[30], str2[30];
    cout << "\nEnter two strings : ";
    fflush(stdin);
    gets(str1);
    gets(str2);
    Add a1(str1);
    Add a2(str2);
    Add a3;
    a3 = a1 + a2;
    cout << "\nConcatenate string is " << a3.str;
    return 0;
}
/*
OUTPUT
------
    Enter two strings : S Abhi
ram

Concatenate string is S Abhiram
*/