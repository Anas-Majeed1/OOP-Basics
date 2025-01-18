#include <iostream>
using namespace std;
class student
{
    float avg, marks;

public:
    student()
    {
        marks = 0;
    }
    student(int m1)
    {
        marks = m1;
    }
    void set()
    {
        cin >> marks;
    }
    void show()
    {
        cout << marks << endl;
    }
    student calculateaverage(student); //prototype
};
int main()
{
    student s1,s2, n;
    s2.set();
    cout << "Enter Marks of 1st student: ";
    s1.set();
    cout << "Enter Marks of 2nd student: ";
    s2.set();
     cout << "Marks of 1st student: ";
    s1.show();
     cout << "Marks of 2nd student: ";
    s2.show();
    cout << endl;
    n=s1.calculateaverage(s2); 
    cout << "Average is: "<<endl;
    n.show();
    return 0;
}
student student ::calculateaverage(student s1) //defination
{
    student temp;
    temp.marks=(marks+s1.marks)/2;
    return temp;
}