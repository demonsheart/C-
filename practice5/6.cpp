#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point
{
private:
    float x,y;
public:
    void SetPoint(float x, float y);
    float GetX();
    float GetY();
};

void Point::SetPoint(float x, float y)
{
    this->x = x;
    this->y = y;
}
float Point::GetX()
{
    return x;
}
float Point::GetY(/* args */)
{
    return y;
}
class Circle
{
private:
    float x,y,r;
public:
    void SetCenter(float x, float y);
    void SetRadius(float r);
    float getArea();
    float getLength();
    bool Contain(Point p);
};

void Circle::SetCenter(float x, float y)
{
    this->x = x;
    this->y = y;
}
void Circle::SetRadius(float r)
{
    this->r = r;
}
float Circle::getArea()
{
    return 3.14*r*r;
}
float Circle::getLength()
{
    return 2*3.14*r;
}
bool Circle::Contain(Point p)
{
    float dis,a,b;
    a = p.GetX();
    b = p.GetY();
    dis = sqrt((x-a)*(x-a)+(y-b)*(y-b));
    if(dis<=r)
     return true;
    else
     return false;
}

int main()
{
    float area, s, x, y;
    Point p;
    Circle c;
    cin>>x>>y;
    c.SetCenter(x,y);
    cin>>x;
    c.SetRadius(x);
    cin>>x>>y;
    p.SetPoint(x,y);
    area = c.getArea();
    s = c.getLength();
    cout<<fixed<<setprecision(2)<<area<<" "<<fixed<<setprecision(2)<<s<<endl;
    if(c.Contain(p))
     cout<<"yes";
    else
     cout<<"no";
    return 0;
}