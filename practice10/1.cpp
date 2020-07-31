#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point(double xx, double yy);
    friend double Distance(Point &a, Point &b);
};

Point::Point(double xx, double yy)
{
    x = xx;
    y = yy;
}
double Distance(Point &a, Point &b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main()
{
    int n;
    double x1, y1, x2, y2;

    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        Point p1(x1, y1);
        Point p2(x2, y2);
        cout << int(Distance(p1, p2)) << endl;
    }
    return 0;
}