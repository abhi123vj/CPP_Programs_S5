/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : VIRTUAL FUNCTION
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class A
{
public:
    void virtual count(char str[])
    {
        cout << "\nThis is a virtual function";
    }
};
class B : public A
{
    int cw, cc, i;
    char s[100];

public:
    void count(char str[])
    {
        cw = 0;
        cc = 0;
        int n = strlen(str);
        for (i = 0; i < n; i++)
        {
            if (str[i] != ' ')
            {
                cc++;
            }
            else
            {
                cw++;
            }
        }
        cw++;
        cout << "\nNo: of characters in the text is " << cc << " and no: of words in the text is " << cw;
    }
};
int main()
{
    A *a;
    B b;
    char s[100];
    cout << "\nEnter a text : ";
    gets(s);
    a = &b;
    a->count(s);
    return 0;
}

/*
OUTPUT
------
Enter a text : My son is a lawyer

No: of characters in the text is 14 and no: of words in the text is 5
*/
