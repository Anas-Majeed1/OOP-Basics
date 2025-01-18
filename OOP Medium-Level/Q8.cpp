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
  op_overload operator<(op_overload);
};
op_overload op_overload::operator<(op_overload n)
{
  int min = x;
  if (x > n.x)
  {
    min = n.x;
  }
  return op_overload(min);
}
int main()
{
  op_overload a, b, min;
  a.set();
  b.set();
  min = a < b;
  cout << "Lesser number after comparing:  ";
  min.show();
  cout << endl;
}