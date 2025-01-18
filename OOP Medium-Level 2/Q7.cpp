#include <iostream>
using namespace std;
class shape
{
public:
    void fun()
    {
        cout << "This is a shape" << endl;
    }
};
class polygon : public shape
{
public:
    void fun()
    {
        cout << "Polygon is a shape" << endl;
    }
};
class rectangle
{
public:
    void fun()
    {
        cout << "Rectangle is a polygon" << endl;
    }
};
class triangle
{
public:
    void fun()
    {
        cout << "Triangle is a polygon" << endl;
    }
};
class square
{
public:
    void fun()
    {
        cout << "Square is a triangle" << endl;
    }
};
int main()
{
    polygon p;
    rectangle r;
    triangle t;
    square sq;
    
    p.fun();
    r.fun();
    t.fun();
    sq.fun();
}