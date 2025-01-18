#include <iostream>
using namespace std;
class student
{
    float marks;

public:
    student()
    {
        marks = 0;
    }
    student(int m)
    {
        marks = m;
    }
    void set()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void show()
    {
        cout << marks << endl;
    }
    void calculateaverage(student);
};
int main()
{
    student s1, s2, n;
    s1.set();
    s2.set();
    cout << "Marks of 1st student: ";
    s1.show();
    cout << endl;
    cout << "Marks of 2nd student: ";
    s2.show();
    cout << endl;
    s1.calculateaverage(s2);
    cout << "Average is: ";
    s1.show();
        return 0;
}
void student ::calculateaverage(student s1)
{
    marks=marks+s1.marks;
    marks=marks/2;
}