#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    Distance()
    { // default
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft, float in)
    { // 1 argument -> user defined
        feet = ft;
        inches = in;
    }
    void set()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        cout << endl;
    }
    void show()
    {
        cout << "Feet: " << feet << endl;
        cout << "inches: " << inches << endl;
        cout << endl;
    }
    Distance Add(Distance);
};
int main()
{
    Distance dist1(15, 9.5);
    Distance dist2;
    dist2.set();
    Distance dist3;
    dist3 = dist1.Add(dist2);
    cout << "Distance 1: " << endl;
    dist1.show();
    cout << "Distance 2: " << endl;
    dist2.show();
    cout << "Distance 3: " << endl;
    dist3.show();
}
Distance Distance ::Add(Distance d1)
{
    Distance temp;                    // user defined datatype
    temp.inches = inches + d1.inches; // inches--> calling object(d1)// d1.inches -> d2
    temp.feet = 0;
    if (temp.inches >= 12)
    {
        temp.inches -= 12;
        temp.feet++;
    }
    temp.feet += feet + d1.feet;
    return temp;
}