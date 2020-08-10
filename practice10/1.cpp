#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point(double xx, double yy);
    friend double Distance(Point &a, Point &b);
};

Point::Point(double xx, double yy)
{
    x = xx;
    y = yy;
}
double Distance(Point &a, Point &b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main()
{
    int n;
    double x1, y1, x2, y2;

    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        Point p1(x1, y1);
        Point p2(x2, y2);
        cout << int(Distance(p1, p2)) << endl;
    }
    return 0;
}
/*
��Ŀ����
Point��Ļ�����ʽ���£�



���������Ҫ��

1.ʵ��Point�ࣻ
2.ΪPoint������һ����Ԫ����double Distance(Point &a, Point &b),���ڼ�������֮��ľ��롣ֱ�ӷ���Point�����˽�����ݽ��м��㡣
3.��дmain������������������ֵ����������֮��ľ��롣
����
��1�У�������������ĵ�Ե���Ŀ

��2�п�ʼ��ÿ�����������������x��y����

���
ÿ���������һ����֮��ľ��루���ֱ��ȡ��������,���������� ��

��������
2
1 0 2 1
2 3 2 4
�������
1
1
*/