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
题目描述
每个线段是用平面上的两个点来描述，用结构体实现对于任意输入的2个线段，判断其是否相交。

提示：两点(x1,y1), (x2,y2) 间直线斜率是k=(y2-y1)/(x2-x1).

输入
判断次数和2条线段的x1、y1、x2、y2

输出
是否相交

样例输入
3
1 5 2 9
1 3 2 4
5 6 7 8
5 7 7 7
2 5 1 0
9 4 2 9
样例输出
disjoint
intersect
disjoint
*/