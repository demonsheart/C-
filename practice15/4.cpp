#include <iostream>
#include <cmath>
using namespace std;
class CPoint
{
private:
    int x, y;

public:
    CPoint() {}
    CPoint(int xx, int yy) : x(xx), y(yy) {}
    int getX() { return x; }
    int getY() { return y; }
};
class CRectangle
{
private:
    CPoint leftPoint, rightPoint;

public:
    CRectangle(int x1, int y1, int x2, int y2) : leftPoint(x1, y1), rightPoint(x2, y2) {}
    bool operator>(CPoint &c)
    {
        if (c.getX() < leftPoint.getX() || c.getX() > rightPoint.getX() || c.getY() > leftPoint.getY() || c.getY() < rightPoint.getY())
            return false;
        else
            return true;
    }
    bool operator>(CRectangle &c)
    {
        if (c.leftPoint.getX() >= leftPoint.getX() && c.leftPoint.getY() <= leftPoint.getY() && c.rightPoint.getX() <= rightPoint.getX() && c.rightPoint.getY() >= rightPoint.getY())
            return true;
        else
            return false;
    }
    bool operator==(CRectangle &c)
    {
        if (c.leftPoint.getX() == leftPoint.getX() && c.leftPoint.getY() == leftPoint.getY() && c.rightPoint.getX() == rightPoint.getX() && c.rightPoint.getY() == rightPoint.getY())
            return true;
        else
            return false;
    }
    bool operator*(CRectangle &c)
    {
        if (c.leftPoint.getX() > rightPoint.getX() || c.rightPoint.getX() < leftPoint.getX() || c.rightPoint.getY() > leftPoint.getY() || c.leftPoint.getY() < rightPoint.getY())
            return false;
        else
            return true;
    }
    operator int()
    {
        return abs(leftPoint.getX() - rightPoint.getX()) * abs(leftPoint.getY() - rightPoint.getY());
    }
    friend ostream &operator<<(ostream &out, CRectangle &c)
    {
        out << c.leftPoint.getX() << " " << c.leftPoint.getY() << " " << c.rightPoint.getX() << " " << c.rightPoint.getY();
        return out;
    }
};

int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;

    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);

        cout << "矩形1:" << rect1 << " " << (int)rect1 << endl;
        cout << "矩形2:" << rect2 << " " << (int)rect2 << endl;

        if (rect1 == rect2)
            cout << "矩形1和矩形2相等" << endl;
        else if (rect2 > rect1)
            cout << "矩形2包含矩形1" << endl;
        else if (rect1 > rect2)
            cout << "矩形1包含矩形2" << endl;
        else if (rect1 * rect2)
            cout << "矩形1和矩形2相交" << endl;
        else
            cout << "矩形1和矩形2不相交" << endl;
        cout << endl;
    }
    return 0;
}