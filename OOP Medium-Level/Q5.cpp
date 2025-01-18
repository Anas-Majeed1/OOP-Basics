#include <iostream>
using namespace std;
class unary
{
    int num;

public:
    unary()
    {
        num = 0;
    }
    unary(int x)
    {
        num = x;
    }
    void set()
    {
        cin >> num;
    }
    void show()
    {
        cout << num << endl;
    }
    unary operator++(int)
    { // postfix form
        return unary(num++);
        //  return unary(num1++); // returning unnamed object
    }
    // unary operator++ (int)
    // {                        // postfix form
    //     return unary(num1++); // returning unnamed object
    // }
};
int main()
{
    unary u1, u2;
    cout << "Enter two numbers: ";
    u1.set();
    u2.set();
    u1++;
    u2++;
    cout << "\t-----------------------------------------\t" << endl;
    cout << "\t After incrementing: " << endl;
    cout << "\t\t";
    u1.show();
    cout << endl;
    cout << "\t\t";
    u2.show();
    cout << "\t-----------------------------------------\t" << endl;
    return 0;
}