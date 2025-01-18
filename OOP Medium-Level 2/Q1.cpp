#include <iostream>
using namespace std;
class student_personal
{
private:
    string name;
    int roll;
    int age;

public:
    student_personal() {}
    student_personal(string a, int b, int c)
    {
        name = a;
        roll = b;
        age = c;
    }
    void student_show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << endl
             << endl;
    }
};
class student_marks
{
protected:
    double total, mark1, mark2, mark3, mark4, mark5;

public:
    student_marks(double t, double m1, double m2, double m3, double m4, double m5)
    {
        t = total;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
        mark4 = m4;
        mark5 = m5;
    }
};
class result : public student_personal, student_marks // concept of multiple inheritance used
{
private:
    double obtained, percentage;

public:
    result(double t, double m1, double m2, double m3, double m4, double m5) : student_marks(t, m1, m2, m3, m4, m5) {}
    void calculation()
    {
        obtained = mark1, mark2, mark3, mark4;
        percentage = (obtained / total) * 100;
    }
    void show_result()
    {
        cout << "You Got: " << endl;
        if (percentage > 80)
        {
            cout << "----- A GRADE -----" << endl;
        }
        else
        {
            if (percentage < 80 && percentage > 70)
            {
                cout << "----- B GRADE -----" << endl;
            }
            else
            {
                if (percentage < 70 && percentage > 50)
                {
                    cout << "----- C GRADE -----" << endl;
                }
                else
                {
                    if (percentage < 50)
                    {
                        cout << "----- F GRADE -----" << endl;
                    }
                }
            }
        }
    }
};
int main()
{
    student_personal s("Anas", 19, 18);
    s.student_show();
    result r(500, 80, 90, 50, 75, 95);
    r.calculation();
    r.show_result();
}