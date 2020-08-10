#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Point
{
private:
    float x, y;

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
    float x, y, r;

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
    return 3.14 * r * r;
}
float Circle::getLength()
{
    return 2 * 3.14 * r;
}
bool Circle::Contain(Point p)
{
    float dis, a, b;
    a = p.GetX();
    b = p.GetY();
    dis = sqrt((x - a) * (x - a) + (y - b) * (y - b));
    if (dis <= r)
        return true;
    else
        return false;
}

int main()
{
    float area, s, x, y;
    Point p;
    Circle c;
    cin >> x >> y;
    c.SetCenter(x, y);
    cin >> x;
    c.SetRadius(x);
    cin >> x >> y;
    p.SetPoint(x, y);
    area = c.getArea();
    s = c.getLength();
    cout << fixed << setprecision(2) << area << " " << fixed << setprecision(2) << s << endl;
    if (c.Contain(p))
        cout << "yes";
    else
        cout << "no";
    return 0;
}
/*
��Ŀ����
���һ������Point���������ԣ�x�����y���꣬�������趨���꣨SetPoint������ȡx���꣨GetX������ȡy���꣨GetY��

���һ��Բ��Circle���������ԣ�Բ������x��y���뾶r������������

1. �趨Բ�ģ�SetCenter��������Բ��x�����y����

2. �趨�뾶��SetRadius�������ð뾶����

3. ���������getArea�������㹫ʽ�����=3.14*r*r

4. �����ܳ���getLength�������㹫ʽ���ܳ�=2*3.14*r

5. ������Contain�����ж�һ��Բ�Ƿ����һ���㣬����Բ�ĵ������ľ��룬Ȼ��Ͱ뾶���Ƚϣ������򲻰�����С�ڵ��������

ע�⣺�ύ����ʱ������ע�ͻ��ֳ����������ඨ�塢��ʵ�֡�������������

//-----�ඨ��------

class XXX

{  // д�ඨ�����

};

//----��ʵ��------

void XXX::Process()

{ // д�ඨ�����

};

//-----������-----

int main()

{

  //�Զ���һЩ����

  //����һ��Բ�����һ�������

 //����Բ����͵�����������ֵ��������ʼ��

 //���Բ�������Բ���ܳ�

//���Բ�Ƿ�����㣬���������yes���������no

  return 0;

}

����
��һ������Բ������������Բ�ĵ�x��y���꣬�뾶

�ڶ�������������������x��y����

���
��һ�����Բ��������ܳ������֮���ÿո������������ȵ�С�����2λ

�ڶ������Բ�Ƿ�����㣬���������yes���������no

��C++�У����ָ�����ȵĲο��������£�

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

��������
1 1 1
2 2
�������
3.14 6.28
no
��ʾ
���������Ĺ�ʽ dis =sqrt [ (x1-x2)^2  + (y1-y2)^2 ] �� ^2��ʾƽ����sqrt��ʾ��ƽ����������ʽֻ�Ǳ�ʾ���壬������ʵ����


��C++ʹ��sqrt����������ƽ������ͷ�ļ�����cmath
*/