/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : SINGLE INHERITANCE
*/
#include <iostream>
#include <string>

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
    getline(cin, name); 
    getline(cin, name); 
    cout << "Roll no: ";
    cin >> rollno;
    cout << "Sex: ";
    getline(cin,sex);
    getline(cin,sex);

}
void Basic_info::display()
{
    cout << name << "\t\t";
    cout << rollno << "\t";
    cout << sex << "\t";
}
void Physical_fit::getdata()
{
    Basic_info::getdata();
    cout << "Height (cm) : ";
    cin >> height;
    cout << "weight (Kg): ";
    cin >> weight;
}
void Physical_fit::display()
{
    Basic_info::display();
    cout << height << "cm \t";
    cout << weight << "Kg \t";
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
    cout << "_______________________________________________________\n";
    cout << "Name\tRollNo\tSex\tHeight\tWeight\n";
    cout << "_______________________________________________________\n";
    for (i = 0; i < n; i++)
    {
        a[i].display();
        cout << endl;
    }
    cout << "_______________________________________________________\n";
    return 0;
}
/*
OUTPUT
------
    How many students
    5
    Enter the following infromation
    Record :1
    Enter a name :S Abhiram
    Roll no: 36
    Sex: Male
    Height (cm) : 175
    weight (Kg): 68
    Record :2
    Enter a name :Joveal k
    Roll no: 29
    Sex: Male
    Height (cm) : 170
    weight (Kg): 62
    Record :3
    Enter a name :Ashly Rajan
    Roll no: 26         
    Sex: Female
    Height (cm) : 150
    weight (Kg): 53
    Record :4
    Enter a name :Karthika  
    Roll no: 17
    Sex: Female
    Height (cm) : 160
    weight (Kg): 50
    Record :5
    Enter a name :Anand Ashwin Kv
    Roll no: 36
    Sex: Male
    Height (cm) : 173
    weight (Kg): 70
    _______________________________________________________
    Name                    RollNo  Sex     Height  Weight
    _______________________________________________________
    S Abhiram               36      Male    175 cm   68 Kg
    Joveal k                29      Male    170 cm   62 Kg
    Ashly Rajan             26      Female  150 cm   53 Kg
    Karthika                17      Female  160 cm   50 Kg
    Anand Ashwin Kv         36      Male    173 cm   70 Kg
    _______________________________________________________
*/