#include <iostream>
#include <iomanip>
using namespace std;
class Geometry
{
public:
    virtual double getArea() = 0;
};
class Rect : public Geometry
{
private:
    double lenth, width;

public:
    Rect(double l, double w) : lenth(l), width(w) {}
    double getArea() { return lenth * width; }
};

class Circle : public Geometry
{
private:
    double r;

public:
    Circle(double rr) : r(rr) {}
    double getArea() { return 3.14 * r * r; }
};

class TotalArea
{
public:
    static void computerTotalArea(Geometry **t, int n)
    {
        double ma = t[0]->getArea();
        for (int i = 0; i < n; ++i)
        {
            if (ma < t[i]->getArea())
                ma = t[i]->getArea();
        }
        cout << "最大面积=" << fixed << setprecision(2) << ma << endl;
    }
};

int main()
{
    int n, flag, i = 0;
    double a, b;

    cin >> n;

    Geometry **p = new Geometry *[n];
    while (n--)
    {
        cin >> flag;
        if (flag == 1)
        {
            cin >> a >> b;
            p[i++] = new Rect(a, b);
        }
        else if (flag == 2)
        {
            cin >> a;
            p[i++] = new Circle(a);
        }
    }
    TotalArea t;
    t.computerTotalArea(p, i);
    return 0;
}