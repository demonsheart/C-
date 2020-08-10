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
int judge(SLine s1, SLine s2);
int main()
{
    int t;
    SLine s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> s1.p1.x >> s1.p1.y >> s1.p2.x >> s1.p2.y;
        cin >> s2.p1.x >> s2.p1.y >> s2.p2.x >> s2.p2.y;
        if (judge(s1, s2))
            cout << "intersect" << endl;
        else
            cout << "disjoint" << endl;
    }
    return 0;
}
int judge(SLine s1, SLine s2)
{
    int u, v, w, z;

    u = (s2.p1.x - s1.p1.x) * (s1.p2.y - s1.p1.y) - (s1.p2.x - s1.p1.x) * (s2.p1.y - s1.p1.y);

    v = (s2.p2.x - s1.p1.x) * (s1.p2.y - s1.p1.y) - (s1.p2.x - s1.p1.x) * (s2.p2.y - s1.p1.y);

    w = (s1.p1.x - s2.p1.x) * (s2.p2.y - s2.p1.y) - (s2.p2.x - s2.p1.x) * (s1.p1.y - s2.p1.y);

    z = (s1.p2.x - s2.p1.x) * (s2.p2.y - s2.p1.y) - (s2.p2.x - s2.p1.x) * (s1.p2.y - s2.p1.y);

    return (u * v <= 0 && w * z <= 0);
}
/*
��Ŀ����
ÿ���߶�����ƽ���ϵ����������������ýṹ��ʵ�ֶ������������2���߶Σ��ж����Ƿ��ཻ��

��ʾ������(x1,y1), (x2,y2) ��ֱ��б����k=(y2-y1)/(x2-x1).

����
�жϴ�����2���߶ε�x1��y1��x2��y2

���
�Ƿ��ཻ

��������
3
1 5 2 9
1 3 2 4
5 6 7 8
5 7 7 7
2 5 1 0
9 4 2 9
�������
disjoint
intersect
disjoint
*/