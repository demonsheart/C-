#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point(double xx = 0, double yy = 0) : x(xx), y(yy){};
    double getX() { return x; }
    double getY() { return y; }
    void setX(double xx) { x = xx; }
    void setY(double yy) { y = yy; }
    double distance(Point p)
    {
        double dis = sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY()));
        return dis;
    }
};
int main()
{
    int t;
    double x1, y1, x2, y2;

    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        Point p1(x1, y1);
        Point p2(x2, y2);

        double dis = p1.distance(p2);
        cout << "Distance of Point(" << fixed << setprecision(2)
             << p1.getX() << "," << fixed << setprecision(2) << p1.getY()
             << ") to Point("
             << p2.getX() << "," << fixed << setprecision(2) << p2.getY()
             << ") is " << fixed << setprecision(2) << dis << endl;
    }
    return 0;
}
/*
��Ŀ����
������һ��ƽ���ϵĵ���ඨ�壬��������ʵ���������з����������ɵ��������



����
�������ݵ����� t

��һ��������ݵ�p1��x����   ��һ��������ݵ�p1��y����  ��һ��������ݵ�p2��x����   ��һ��������ݵ�p2��y����

..........

���
���p1��p2�ľ���

��C++�У����ָ�����ȵĲο��������£�

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

}

��������
2
1 2 3 4
-1 0.5 -2 5
�������
Distance of Point(1.00,2.00) to Point(3.00,4.00) is 2.83
Distance of Point(-1.00,0.50) to Point(-2.00,5.00) is 4.61
*/