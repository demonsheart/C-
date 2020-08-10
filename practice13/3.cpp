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
/*
��Ŀ����
����һ��������Shape�������������ݳ�Ա�����ơ�x��y����
��������麯���ֱ��ǣ������Լ�x��y��get�����������������0.0���������������0.0��
����һ�����麯��shapeName�������������ơ�
----

����Point��̳�Shape���ڹ��캯����ʼ��x��y���꣬��������Ϊ"Point"
����Circlet��̳�Point����������r��ʾ�뾶����������Ϊ"Circle"����������������Ҫ�Լ���д
����Cylinder��̳�Circle����������h��ʾ�߶ȣ���������Ϊ"Cylinder"����������������Ҫ�Լ���д
Ҫ��������������������Ʋ����ڹ��캯��������........
----

��дһ��ȫ�ֺ���Print���޷���ֵ������������ΪShape*���ͣ����������ͼ�ε������Ϣ�����ơ�x��y���ꡢ����������Ҫ���������ʹ�ó����������麯����������Ϣ
�����ʽ���ο���������������ֻ��Ҫ����������֣����������룩��Բ����Ϊ3.14159
Ҫ������б���ʹ�ó������......������Point��Circle��Cylinder�����
����
��һ������һ�����X��Y����
�ڶ�������һ��Բ��X��Y���ꡢ�뾶
����������һ�������X��Y���ꡢ�뾶���߶�
���
Ҫ�����Print�������ͼ�ε���Ϣ��ÿ��ͼ�����һ�С�

��������
1.1 2.2
3.3 4.4 5.5
6.6 7.7 8.8 9.9
�������
Point--(1.1,2.2)--0--0
Circle--(3.3,4.4)--95--0
Cylinder--(6.6,7.7)--1033--2408
*/