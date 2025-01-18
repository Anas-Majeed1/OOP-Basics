#include <iostream>
using namespace std;
class MathOperation
{
private:
  int x;
public:
  MathOperation()
  {
    int x = 0;
  }
  MathOperation(int num)
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
  MathOperation operator++()
  {
    return MathOperation(++x);
  }
  MathOperation operator--()
  {
    return MathOperation(--x);
  }
  MathOperation operator++(int)
  {
    return MathOperation(x++);
  }

  MathOperation operator--(int)
  {
    return MathOperation(x--);
  }

  MathOperation operator+=(int)
  {
    return MathOperation(x += 5);
  }
  MathOperation operator-=(int)
  {
    return MathOperation(x -= 5);
  }
  MathOperation operator+(MathOperation);
  MathOperation operator-(MathOperation);
  MathOperation operator*(MathOperation);
  MathOperation operator/(MathOperation);
  MathOperation operator>(MathOperation);
  MathOperation operator<(MathOperation);
};
MathOperation MathOperation ::operator+(MathOperation n)
{
  int sum = x + n.x; 
  return MathOperation(sum);
}
MathOperation MathOperation ::operator-(MathOperation n)
{
  int sub = x - n.x;
  return MathOperation(sub);
}
MathOperation MathOperation ::operator*(MathOperation n)
{
  int mult = x * n.x;
  return MathOperation(mult);
}
MathOperation MathOperation ::operator/(MathOperation n)
{
  float div = x / n.x;
  return MathOperation(div);
}
MathOperation MathOperation ::operator>(MathOperation n)
{
  int max = x; //max=a
  if (x < n.x)
  {
    max = n.x; //max=b
  }
  return MathOperation(max);
}
MathOperation MathOperation ::operator<(MathOperation n)
{
  int min = x;
  if (x > n.x) 
  {
    min = n.x;
  }
  return MathOperation(min);
}
int main()
{
  MathOperation a, b, c, sum, sub, mult, div, max, min;
  a.set();
  b.set();
  c.set();
  sum = a + b + c ;
  sub = a - b - c;
  mult = a * b * c;
  div = a / b / c;
  cout << "Sum: ";
  sum.show();
  cout << endl;
  cout << "Subtraction: ";
  sub.show();
  cout << endl;
  cout << "Multiplication: ";
  mult.show();
  cout << endl;
  cout << "Division: ";
  div.show();
  cout << endl;
  max = a > b;
  cout << "max: ";
  max.show();
  cout << endl;
  min = a < b;
  cout << "min: ";
  min.show();
  cout << endl;
  ++a;
  cout << "Increment in prefix form ++a: ";
  a.show();
  cout << endl;
  --a;
  cout << "Decrement in prefix form --a: ";
  a.show();
  cout << endl;
  a++;
  cout << "Increment in postfix form a++: ";
  a.show();
  cout << endl;
  a--;
  cout << "Decrement in postfix form a--: ";
  a.show();
  cout << endl;
  a += 5;
  cout << "a+=5: ";
  a.show();
  cout << endl;
  a -= 5;
  cout << "a-=5: ";
  a.show();
  cout << endl;

  return 0;
}