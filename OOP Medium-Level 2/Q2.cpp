#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int roll;

public:
    int age;
    void getstudent()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter your age: ";
        cin >> age;
    }
};
class UG : public student
{
protected:
    int fee, stiphend;

public:
    int semester;
    void getUG()
    {
        cout << "Enter Current semester: ";
        cin >> semester;
        cout << "Enter Current semester fee: ";
        cin >> fee;
        cout << "Enter Stiphend amount: ";
        cin >> stiphend;
    }
};
class PG : public student
{
protected:
    int fee, stiphend;

public:
    int semester;
    void getPG()
    {
        cout << "Enter Current semester: ";
        cin >> semester;
        cout << "Enter Current semester fee: ";
        cin >> fee;
        cout << "Enter Stiphend amount: ";
        cin >> stiphend;
    }
};
int main()
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int age1 = 0, age2 = 0, age3 = 0, age4 = 0;
    int avg1, avg2, avg3, avg4;
    string ch;
    student s[6];
    UG obj1;
    PG obj2;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Enter UG for undergraduate and PG for post graduate: ";
        cin >> ch;
        if (ch == "UG")
        {
            s[i].getstudent();
            obj1.getUG();
            if (obj1.semester == 1)
            {
                age1 += s[i].age;
                cnt1++;
            }
            else
            {
                if (obj1.semester == 3)
                {
                    age2 += s[i].age;
                    cnt2++;
                }
            }
        }
        else
        {
            if (ch == "PG")
            {
                s[i].getstudent();
                obj2.getPG();
                if (obj2.semester == 1)
                {
                    age3 += s[i].age;
                    cnt3++;
                }
                else
                {
                    if (obj2.semester == 3)
                    {
                        age4 += s[i].age;
                        cnt4++;
                    }
                }
            }
        }
    }
    avg1 = age1 / cnt1;
    avg2 = age2 / cnt2;
    avg3 = age3 / cnt3;
    avg4 = age4 / cnt4;

    cout << "Average age of Undergraduate student of 1st semester : ";
    cout << avg1 << endl;
    cout << "Average age of Undergraduate student of 3rd semester : ";
    cout << avg2 << endl;
    cout << "Average age of Postgraduate student of 1st semester : ";
    cout << avg3 << endl;
    cout << "Average age of Postgraduate student of 3rd semester : ";
    cout << avg4 << endl;
}