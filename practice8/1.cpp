#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point();
    Point(double x_value, double y_value);
    double getX();
    double getY();
    void setXY(double x1, double y1);
    void setX(double x_value);
    void setY(double y_value);
    double getDisTo(Point &p);
    ~Point();
};
Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(double x_value, double y_value)
{
    x = x_value;
    y = y_value;
}
double Point::getX()
{
    return x;
}
double Point::getY()
{
    return y;
}
void Point::setXY(double x1, double y1)
{
    x = x1;
    y = y1;
}
void Point::setX(double x_value)
{
    x = x_value;
}
void Point::setY(double y_value)
{
    y = y_value;
}
double Point::getDisTo(Point &p)
{
    double d, a = p.getX(), b = p.getY();
    d = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    return d;
}
Point::~Point()
{
}

class Circle
{
private:
    Point centre;
    double radius;

public:
    Circle(double x = 0, double y = 0) : centre(x, y)
    {
        radius = 1;
    }
    Circle(double x, double y, double r);
    double getArea();
    void moveCentreTo(double x1, double y1);
    int contain(Point &p);
    ~Circle();
};
Circle::Circle(double x, double y, double r)
{
    centre.setXY(x, y);
    radius = r;
}
double Circle::getArea()
{
    return 3.14 * radius * radius;
}
void Circle::moveCentreTo(double x1, double y1)
{
    centre.setXY(x1, y1);
}
int Circle::contain(Point &p)
{
    double d, a = p.getX(), b = p.getY();
    double x = centre.getX(), y = centre.getY();
    d = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    if (d > radius)
        return 0;
    else
        return 1;
}
Circle::~Circle()
{
}

int main()
{
    double x, y, r;
    int n;
    cin >> x >> y >> r >> n;
    Circle c(x, y, r);
    Point p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        p[i].setXY(x, y);
    }
    for (int i = 0; i < n; i++)
    {
        if (c.contain(p[i]))
        {
            cout << "inside" << endl;
        }
        else
            cout << "outside" << endl;
    }
    cin >> x >> y;
    c.moveCentreTo(x, y);
    cout << "after move the centre of circle:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (c.contain(p[i]))
        {
            cout << "inside" << endl;
        }
        else
            cout << "outside" << endl;
    }
    return 0;
}
/*
题目描述


类Point是我们写过的一个类，类Circle是一个新的类，Point作为其成员对象，请完成类Circle的成员函数的实现。

在主函数中生成一个圆和若干个点，判断这些点与圆的位置关系，如果点在圆内(包括在圆的边上)，输出“inside”，否则输出"outside"；然后移动圆心的位置，再次判断这些点与圆的位置关系。

输入
圆的x坐标 y坐标 半径

点的个数n

第一个点的x坐标 y坐标

第二个点的x坐标 y坐标

......

第n个点的x坐标 y坐标

圆心移动到的新的x坐标 y坐标

输出
第一个点与圆的关系

第二个点与圆的关系

.......

第n个点与圆的关系

after move the centre of circle

圆心移动后第一个点与圆的关系

圆心移动后第二个点与圆的关系

.....

圆心移动后第n个点与圆的关系

样例输入
0 0 5
4
1 1
2 2
5 0
-6 0
-1 0
样例输出
inside
inside
inside
outside
after move the centre of circle:
inside
inside
outside
inside
*/