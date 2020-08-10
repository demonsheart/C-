#include <iostream>
using namespace std;
struct SPoint
{
    int x, y;
};
struct SLine
{
    SPoint p1, p2;
};
int direction(const SLine &ab, const SPoint &c);
int main()
{
    int t, q;
    SPoint s;
    SLine l;
    cin >> t;
    while (t--)
    {
        cin >> l.p1.x >> l.p1.y >> l.p2.x >> l.p2.y;
        cin >> s.x >> s.y;
        q = direction(l, s);
        if (q < 0)
            cout << "clockwise" << endl;
        else if (q == 0)
            cout << "intersect" << endl;
        else if (q > 0)
            cout << "anti clockwise" << endl;
    }
    return 0;
}
int direction(const SLine &ab, const SPoint &c)
{
    return (ab.p2.x - ab.p1.x) * (c.y - ab.p1.y) - (ab.p2.y - ab.p1.y) * (c.x - ab.p1.x);
}
/*
��Ŀ����
�þ���x,y�������ͱ�����Ա�Ľṹ����SPoint����ʾ����㡣��SLine�ṹ�����������߶Σ����а���p1��p2����SPoint��Ա��

��д����direction(const SLine &ab, const SPoint &c)����������ab��ac��˵�ֵ�жϵ�c��ֱ��ab��λ�ù�ϵ��
����
�жϴ���

�ߵ���������x1��y1��x2��y2

������x��y

......

���
λ�ù�ϵ

��������
3
1 5 2 9
1 3
5 6 7 8
6 7
2 3 1 0
3 3
�������
clockwise
intersect
anti clockwise
��ʾ

����a(x1,y1)������b(x2,y2)�Ĳ�˶���Ϊa.x*b.y-a.y*b.x,�����С��0����ʾ����b������a��˳ʱ�뷽�����������0����ʾ����b������a����ʱ�뷽��������0����ʾ����a������bƽ�С�
*/