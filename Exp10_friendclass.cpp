/*
    Name : S Abhiram
    Roll no : 118404036
    Program  : FRIEND CLASS
*/
#include <iostream>
using namespace std;
class student
{
    int mark1, mark2, mark3;
    float avg;
    string name;

public:
    void get_data(string N, int m1, int m2, int m3)
    {
        name = N;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }
    friend class fstudent;
};
class fstudent
{
public:
    void mark_avg(student &s1)
    {
        s1.avg = float(s1.mark1 + s1.mark2 + s1.mark3) / 3;
    }
    void display(student s2)
    {
        cout << "\nName : " << s2.name << "\tAverage : " << s2.avg;
    }
};
int main()
{
    class student st;
    class fstudent fst;
    string nml;
    int mk1, mk2, mk3;
    cout << "\nEnter name and marks in 3 subjects: ";
    cin >> nml >> mk1 >> mk2 >> mk3;
    st.get_data(nml, mk1, mk2, mk3);
    fst.mark_avg(st);
    fst.display(st);
}
/*
OUTPUT
------
    Name : Abhi     Average : 38.3333
*/