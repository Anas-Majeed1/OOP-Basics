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
    void Add(Distance, Distance); //
};
int main()
{
    Distance dist1(15, 9.5);
    Distance dist2;
    dist2.set();
    Distance dist3;
    dist3.Add(dist1, dist2);
    cout << "distance 1: "<<endl;
    dist1.show();
    cout << "distance 2: "<<endl;
    dist2.show();
    cout << "distance 3: "<<endl;
    dist3.show();
}
void Distance ::Add(Distance d1, Distance d2)
{
    inches = d2.inches + d1.inches;
    feet = 0;
    if (inches >= 12)
    {
        inches -= 12;
        feet++;
    }
    feet += d2.feet + d1.feet;
}
