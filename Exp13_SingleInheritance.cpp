/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : SINGLE INHERITANCE
*/
#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 100;

class Basic_info

{
private:
    string name;
    string sex;
    int rollno;

public:
    void getdata();
    void display();
};
class Physical_fit : public Basic_info

{
private:
    float height;
    float weight;

public:
    void getdata();
    void display();
};
void Basic_info::getdata()
{
    cout << "Enter a name :";
    cin >> name;
    cout << "Roll no: ";
    cin >> rollno;
    cout << "Sex: ";
    cin >> sex;
}
void Basic_info::display()
{
    cout << name << "\t";
    cout << rollno << "\t";
    cout << sex << "\t";
}
void Physical_fit::getdata()
{
    Basic_info::getdata();
    cout << "Height : ";
    cin >> height;
    cout << "weight : ";
    cin >> weight;
}
void Physical_fit::display()
{
    Basic_info::display();
    cout << height << "\t";
    cout << weight << " ";
}
int main()
{
    Physical_fit a[MAX];
    int i, n;
    cout << "How many students\n";
    cin >> n;
    cout << "Enter the following infromation\n";
    for (i = 0; i < n; i++)
    {
        cout << "Record :" << i + 1 << endl;
        a[i].getdata();
    }
    cout << "______________________________________\n";
    cout << "Name\tRollNo\tSex\tHeight\tWeight\n";
    cout << "______________________________________\n";
    for (i = 0; i < n; i++)
    {
        a[i].display();
        cout << endl;
    }
    cout << "______________________________________\n";
    return 0;
}
/*
OUTPUT
------
    How many students
    3
    Enter the following infromation
    Record :1
    Enter a name :Abhi
    Roll no: 36
    Sex: Male
    Height : 175
    weight : 60
    Record :2
    Enter a name :Ram
    Roll no: 32
    Sex: Male
    Height : 150
    weight : 57
    Record :3
    Enter a name :Kichu
    Roll no: 24
    Sex: Female
    Height : 163
    weight : 59
   ______________________________________
    Name    RollNo  Sex     Height  Weight
    ______________________________________
    Abhi    36      Male    175     60
    Ram     32      Male    150     57 
    Kichu   24      Female  163     59
    ______________________________________
*/