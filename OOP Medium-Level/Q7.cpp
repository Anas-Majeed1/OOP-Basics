#include <iostream>
using namespace std;
class binary
{
    int num;

public:
    binary()
    {
        num = 0;
    }
    binary(int x)
    {
        num = x;
    }
    void set()
    {
        static int i = 97;
        cout << "Enter value of " << char(i) << " : ";
        cin >> num;
        i++;
    }
    void show()
    {
        cout << num << endl;
    }
    binary operator-(binary x)
    { // returnning named object (user-defined type)
        binary temp;
        temp.num = num - x.num;
        return temp;
    }
};
int main()
{
    binary b1, b2, b3;
    b1.set();
    b2.set();
    b3 = b1 - b2;
    cout << "a-b : ";
    b3.show();
}