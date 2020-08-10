#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    float x, y;

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
    cout << "point clear" << endl;
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
    float x, y, r;

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
    cout << "circle clear" << endl;
}
bool Circle::Contain(float a, float b)
{
    float d = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    if (d > r)
        return false;
    else
        return true;
}
int main()
{
    int n;
    float x, y, r;
    cin >> x >> y;
    Point p(x, y);
    cin >> n;
    Point *q = new Point[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        q[i].setXY(x, y);
    }
    cin >> x >> y >> r;
    Circle c(x, y, r);
    x = p.getX();
    y = p.getY();
    if (c.Contain(x, y))
        cout << "in" << endl;
    else
        cout << "out" << endl;
    for (int i = 0; i < n; ++i)
    {
        x = q[i].getX();
        y = q[i].getY();
        if (c.Contain(x, y))
            cout << "in" << endl;
        else
            cout << "out" << endl;
    }
    return 0;
}
/*
��Ŀ����
���һ������Point������˽������x�����y���꣬��������

1�����캯����Ҫ����������������1.�ܹ�ʹ����Pointȥ����һ���������飨ȱʡ���췽��������2.�ܹ��������������x����������ʼ������ʾ�����캯������

2��������������x�����y���궼��0���������Ϣ��point clear��

3������(setXY)�������������룬������x�����y����

4����ȡx���ֱ꣬�ӷ���xֵ

5����ȡy���ֱ꣬�ӷ���yֵ

���һ��Բ��Circle������˽�����ԣ�Բ������x��y���뾶r������������

1�����캯���������������룬����Բ��x���ꡢy����Ͱ뾶

2��������������Բ������x��y�Լ��뾶�����㣬�����"circle clear"

3��������Contain�����ж�һ��Բ�Ƿ����һ���㣬����Բ�ĵ������ľ��룬Ȼ��Ͱ뾶���Ƚϣ������򲻰�����С�ڵ������������ʾ���õ������������һ���������

����
��һ������һ�����x�����y���꣬��Point��ȥ����һ������󣬲����Զ�ͨ�����캯������ʼ��

�ڶ�������n����Point��ȥ����һ����������飬����n����

������������n�У�ÿ������һ�����x��y���꣬ʹ������(setXY)������ÿ�����x��y����

����һ������������������ʾһ��Բ��Բ������x��y���Լ��뾶��ʹ��Circle��ȥ����һ��Բ���󣬲��Զ�ͨ�����캯������ʼ��

���
ͨ������Բ�İ���(Contain)�������ж�ÿ�����Ƿ���Բ�ڡ�

���յ������˳��ÿ�����һ������жϽ����������������in�������������out

˵������һ�����������Ƕ�̬�����ģ���ô�ڳ������ʱ����������ǲ��ᱻ���ա�ֻ�����Ӵ���delete []p���Ż�������顣

���ⲻҪ���ջ�����.

��������
5 2
3
4 7
9 9
2 4
3 3 3
�������
in
out
out
in
circle clear
point clear
*/