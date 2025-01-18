#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
class student
{
    int id;
    string name;
    string dob;
    string adress;
    float gpa[8];
    static int count;

public:
    float cgpa;
    void setter()
    {
        cout << "Enter id of student : ";
        cin >> id;
        cout << "Enter name of student : ";
        cin >> name;
        cout << "Enter DOB of student : ";
        cin >> dob;
        cout << "Enter adress of student : ";
        cin >> adress;
    }
    student()
    {
        for (int i = 0; i < 8; i++)
        {
            gpa[i] = 3.0;
        }
        count++;
    }
    student(const student &copy)
    {
        id = copy.id;
        name = copy.name;
        adress = copy.adress;
        cgpa = copy.cgpa;
    }

    static int NumberOfObject()
    {
        return count;
    }
    float Cgpa()
    {
        float n, sum = 0;
        cout << "Enter number of semester for you want to calculate cgpa of student : ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << "Enter gpa of " << j + 1 << " semester : " << endl;
            cin >> gpa[j];
            sum = sum + gpa[j];
        }
        cgpa = sum / n;
        return cgpa;
    }

    //     string Cr(float max){
    //     	for(int i=1;i<count;i++){
    //     		if(cgpa>max){
    //     			max=cgpa;
    //     			return name;
    //     		}
    //	      }
    //	}

    void scholarship()
    {
        float lar = 3.0;
        if (cgpa >= 3.0)
        {
            cout << "\t*\t" << name << " is eligible for scholarship  \t\t*" << endl;
        }
        else
            cout << "\t*\t" << name << " is not eligible for scholarship  \t\t*" << endl;
        cout << "\t---------------------------------------------------------" << endl;
    }
    void getter()
    {
        cout << "\t---------------------------------------------------------" << endl;

        cout << "\t*\tId of student is " << id << "\t\t\t\t*" << endl;
        cout << "\t*\tName of student is " << name << "\t\t\t\t*" << endl;
        cout << "\t*\tAdress of student is " << adress << "\t\t\t*" << endl;
        cout << "\t*\tDate of birth of student is " << dob << "\t\t\t*" << endl;
        cout << "\t*\tCgpa of " << name << " is " << cgpa << "\t\t\t\t*" << endl;
    }
};
int student::count = 1;
int main()
{
    int n;
    float max;
    cout << "Enter number of objects : ";
    cin >> n;
    student *s = new student[n];
    student::NumberOfObject();
    for (int i = 0; i < n; i++)
    {
        s[i].setter();
        s[i].Cgpa();
        s[i].getter();
        s[i].scholarship();
    }
    student s3 = s[1];
    s3.getter();
    cout << "\t---------------------------------------------------------" << endl;

    cout << "Total number of objects cretaed are : " << s[n].NumberOfObject();
}
