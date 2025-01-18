#include <iostream>
using namespace std;
class op_overload
{
private:
    int x;

public:
    op_overload()
    {
        int x = 0;
    }
    op_overload(int num)
    {
        x = num;
    }
    void set()
    {
        static int i = 97;
        cout << "Enter value of " << char(i) << " : ";
        cin >> x;
        i++;
    }
    void show()
    {
        cout << x;
    }
    op_overload operator-=(op_overload);
};
op_overload op_overload ::operator-=(op_overload n)
{
    op_overload temp;
    temp.x = x -= n.x;
    return temp;
}
int main()
{
    op_overload obj1, obj2;
    obj1.set();
    obj2.set();
    obj1 -= obj2;
    obj1.show();
}