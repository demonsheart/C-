#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y;

public:
    Point() {}
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    ~Point()
    {
        x = 0;
        y = 0;
        cout << "point clear" << endl;
    }
    void setXY(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx() { return x; }
    int gety() { return y; }
};
class Circle
{
    int x, y;
    int r;

public:
    Circle(int a, int b, int c)
    {
        x = a;
        y = b;
        r = c;
    }
    ~Circle()
    {
        x = 0;
        y = 0;
        r = 0;
        cout << "circle clear" << endl;
    }
    char Contain(Point a)
    {
        float d;
        d = pow(pow(a.getx() - x, 2) + pow(a.gety() - y, 2), 1.0 / 2);
        if (d <= r)
        {
            cout << "in" << endl;
        }
        else
        {
            cout << "out" << endl;
        }
    }
};
int main()
{
    int x, y;
    cin >> x >> y;
    Point a(x, y);
    int n, i;
    cin >> n;
    Point *b;
    b = new Point[n];
    for (i = 0; i < n; i++)
    {
        int x1, y1;
        cin >> x1 >> y1;
        b[i].setXY(x1, y1);
    }
    int cx, cy, cr;
    cin >> cx >> cy >> cr;
    Circle c(cx, cy, cr);
    c.Contain(a);
    for (i = 0; i < n; i++)
    {
        c.Contain(b[i]);
    }
    system("pause");
    return 0;
}