#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Point
{
private:
    float x, y;

public:
    Point(float xx, float yy) : x(xx), y(yy) {}
    float GetX() { return x; }
    float GetY() { return y; }
};

class Circle
{
private:
    float x, y, r;

public:
    Circle(float xx, float yy, float rr) : x(xx), y(yy), r(rr) {}
    float getArea()
    {
        return 3.14 * r * r;
    }
    float getLength()
    {
        return 2 * 3.14 * r;
    }
    bool contain(Point &p)
    {
        float dis = sqrt((x - p.GetX()) * (x - p.GetX()) + (y - p.GetY()) * (y - p.GetY()));
        if (dis <= r)
            return true;
        else
            return false;
    }
};
int main()
{
    int x, y, r;

    cin >> x >> y >> r;
    Circle c(x, y, r);

    cin >> x >> y;
    Point p(x, y);

    cout << fixed << setprecision(2) << c.getArea() << " " << fixed << setprecision(2) << c.getLength() << endl;
    if (c.contain(p))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
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