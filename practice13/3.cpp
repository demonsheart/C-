#include <iostream>
#include <string>
using namespace std;
class Shape
{
protected:
    string name;
    float x, y;

public:
    Shape(string n, float xx, float yy) : name(n), x(xx), y(yy) {}
    virtual string getName() { return name; }
    virtual float getX() { return x; }
    virtual float getY() { return y; }
    virtual float getArea() { return 0.0; }
    virtual float getVolume() { return 0.0; }
    virtual void shapeName() = 0;
};

class Point : public Shape
{
private:
    /* data */
public:
    Point(float xx, float yy) : Shape("Point", xx, yy) {}
    void shapeName() {}
};
class Circle : public Shape
{
protected:
    float r;

public:
    Circle(float xx, float yy, float rr) : Shape("Circle", xx, yy), r(rr) {}
    float getArea() { return 3.14159 * r * r; }
    void shapeName() {}
};
class Cylinder : public Circle
{
private:
    float h;

public:
    Cylinder(float xx, float yy, float rr, float hh) : Circle(xx, yy, rr), h(hh)
    {
        name = "Cylinder";
    }
    float getArea() { return 3.14159 * 2.0 * r * (r + h); }
    float getVolume() { return 3.14159 * r * r * h; }
    void shapeName() {}
};

void Print(Shape *p)
{
    cout << p->getName() << "--(" << p->getX() << "," << p->getY() << ")--" << (int)p->getArea() << "--" << (int)p->getVolume() << endl;
}
int main()
{
    float x, y, r, h;
    string name;

    cin >> x >> y;
    Point p(x, y);

    cin >> x >> y >> r;
    Circle c(x, y, r);

    cin >> x >> y >> r >> h;
    Cylinder cy(x, y, r, h);

    Print(&p);
    Print(&c);
    Print(&cy);

    return 0;
}