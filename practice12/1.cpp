#include <iostream>
#include <iomanip>
using namespace std;
class Shape
{
private:
public:
    Shape() {}
    virtual float Area() = 0;
};
class Circle : public Shape
{
private:
    float r;

public:
    Circle(float rr) : r(rr) {}
    float Area()
    {
        return 3.14 * r * r;
    }
};
class Square : public Shape
{
private:
    float a;

public:
    Square(float aa) : a(aa) {}
    float Area()
    {
        return a * a;
    }
};
class Rectangle : public Shape
{
private:
    float lenth, width;

public:
    Rectangle(float a, float b) : lenth(a), width(b) {}
    float Area()
    {
        return lenth * width;
    }
};

int main()
{
    int t;
    float a, b;
    Shape *p;

    cin >> t;
    while (t--)
    {
        cin >> a;
        p = new Circle(a);
        cout << fixed << setprecision(2) << p->Area() << endl;

        cin >> a;
        p = new Square(a);
        cout << fixed << setprecision(2) << p->Area() << endl;

        cin >> a >> b;
        p = new Rectangle(a, b);
        cout << fixed << setprecision(2) << p->Area() << endl;
    }
    return 0;
}
/*
��Ŀ����
��дһ�����򣬶���������Shape����Shape���ж����麯��Area()������������3�������ࣺCircle(Բ��)��Square(������)��Rectangle(����)�����麯���ֱ���㼸��ͼ�������
1��Ҫ��������������λС����
2��Ҫ���û���ָ�����飬ʹ��ÿһ��Ԫ��ָ��ÿһ�����������
����
�������ݵ����� t

��һ�����������Բ�İ뾶

��һ�����������������εı߳�

��һ����������о��εĳ�����

.......

�� t �����������Բ�İ뾶

�� t �����������������εı߳�

�� t ����������о��εĳ�����

���
��һ��������Բ�����

��һ�������������ε����

��һ�������о��ε����

......

�� t ��������Բ�����

�� t �������������ε����

�� t �������о��ε����

��������
2
1.2
2.3
1.2 2.3
2.1
3.2
1.23 2.12
�������
4.52
5.29
2.76
13.85
10.24
2.61
*/