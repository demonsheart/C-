#include<iostream>
#include<cmath>
using namespace std;
class Point
{
private:
    float x,y;
public:
    Point(){};
    Point(float x, float y);
    ~Point();
    void setXY(float x, float y);
    float getX();
    float getY();
};
Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}
void Point::setXY(float x, float y)
{
    this->x = x;
    this->y = y;
}
Point::~Point()
{
    this->x = 0;
    this->y = 0;
    cout<<"point clear"<<endl;
}
float Point::getX()
{
    return x;
}
float Point::getY()
{
    return y;
}
class Circle
{
private:
    float x,y,r;
public:
    Circle(float x, float y, float r);
    ~Circle();
    bool Contain(float a, float b);
};

Circle::Circle(float x, float y, float r)
{
    this->x = x;
    this->y = y;
    this->r = r;
}

Circle::~Circle()
{
    this->x = 0;
    this->y = 0;
    this->r = 0;
    cout<<"circle clear"<<endl;
}
bool Circle::Contain(float a, float b)
{
    float d = sqrt((x-a)*(x-a)+(y-b)*(y-b));
    if (d>r)
     return false;
    else
     return true;
}
int main()
{
    int n;
    float x,y,r;
    cin>>x>>y;
    Point p(x,y);
    cin>>n;
    Point *q = new Point [n];
    for(int i=0; i<n; ++i)
    {
        cin>>x>>y;
        q[i].setXY(x,y);
    }
    cin>>x>>y>>r;
    Circle c(x,y,r);
    x = p.getX();
    y = p.getY();
    if(c.Contain(x,y))
     cout<<"in"<<endl;
    else 
     cout<<"out"<<endl;
    for (int i = 0; i < n; ++i)
    {
        x = q[i].getX();
        y = q[i].getY();
        if(c.Contain(x,y))
         cout<<"in"<<endl;
        else 
         cout<<"out"<<endl;
    }
    return 0;
}