#include <iostream>
using namespace std;
class Course
{
protected:
    string course_name;
    int course_code;

public:
    Course() {}
    Course(string c_n, int c_c) // parameterized constructor
    {
        course_name = c_n;
        course_code = c_c;
    }
    void display()
    {
        cout << "Course Name: " << course_name << endl;
        cout << "Course Code: " << course_code << endl;
    }
};
class Labcourse : public Course
{
private:
    float labhrs;

public:
    Labcourse(float l_h, string c_n, int c_c) : Course(c_n, c_c)
    {
        labhrs = l_h;
    }
    void show(){
    if (course_name=="OOP" || course_name =="DLD" || course_name=="OS")
    {    
        Course::display();
        cout << "Credit Hours: "<<labhrs<<endl;
    }
    else{
        cout << "Not A Lab Course"<<endl;
    }
    }
};
int main(){
    
    Labcourse obj(4.00,"OOP",101);
    obj.show();
    cout << endl;
    Labcourse obj2 (2.00,"ISL",100);
    obj2.show();
}