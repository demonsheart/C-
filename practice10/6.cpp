#include <iostream>
using namespace std;
class Cube;
class Point
{
private:
    float x, y, z;

public:
    Point() {}
    Point(float a, float b, float c);
    friend class Cube;
};
Point::Point(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}
class Cube
{
private:
    Point *p;

public:
    Cube(float x1, float y1, float z1, float x2, float y2, float z2);
    int collide(Cube &r);
    ~Cube();
};
int Cube::collide(Cube &r)
{
    if (p[1].x < r.p[0].x || r.p[1].x < p[0].x || p[1].y < r.p[0].y || r.p[1].y < p[0].y || p[0].z < r.p[1].z || r.p[0].z < p[1].z)
        return 0;
    else
        return 1;
}
Cube::Cube(float x1, float y1, float z1, float x2, float y2, float z2)
{
    p = new Point[2];
    p[0].x = x1;
    p[0].y = y1;
    p[0].z = z1;
    p[1].x = x2;
    p[1].y = y2;
    p[1].z = z2;
}
Cube::~Cube()
{
    delete[] p;
}

int main()
{
    int n;
    float x1, y1, z1, x2, y2, z2;

    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        Cube c1(x1, y1, z1, x2, y2, z2);
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        Cube c2(x1, y1, z1, x2, y2, z2);
        if (c1.collide(c2))
            cout << "collide" << endl;
        else
            cout << "have distance" << endl;
    }
}
/*
��Ŀ����
��������ϵ������ͼ�е���ά����ϵ(x,y,z)��Բ��Ϊ��0,0,0����

�������CPoint���������ݳ�Աx���꣬y���꣬z���ꡣ�����У����ι��캯�������������ȡ�

����������ı���������ƽ�С�������������CCube���������ݳ�Ա��CPoint *point�������У�



���ι��캯����̬���ɵ�������飬�����СΪ2�������ݲ�������������������1�������2������ͼ��ʾ��

int collide(CCube r);  �ж���r�������Ƿ�����ײ����ײ����1�����򷵻�0��

�����������ͷŷ���Ŀռ䡣

�ɸ�����Ҫ��ΪCPoint��CCube�����Ҫ�ķ�����

����
���Դ���t

ÿ������������У�

��һ�У���һ��������������1�������2

�ڶ��У��ڶ���������������1�������2

���
��ÿ��������ݣ���������

��ײ�����collide; ���������have distance

��������
2
7 7 10 10 10 7
7 8 12 11 12 8
-1 -1 8 6 6 1
-10 -10 10 -8 -8 8


�������
collide
have distance
*/