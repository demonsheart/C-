#include <iostream>
using namespace std;
class Rect;
class Point
{
private:
    float x, y;

public:
    Point(float a = 0, float b = 0) : x(a), y(b){};
    void upD(Point &p)
    {
        x = p.x;
        y = p.y;
    }
    friend bool overlap(Rect &s1, Rect &s2);
    friend class Rect;
};
class Rect
{
private:
    Point p1;
    Point p2;

public:
    Rect(){};
    Rect(float x1, float y1, float x2, float y2) : p1(x1, y1), p2(x2, y2) {}
    friend bool overlap(Rect &s1, Rect &s2);
};
bool overlap(Rect &s1, Rect &s2)
{
    Rect s;
    if (s1.p1.x > s1.p2.x)
    {
        s.p1.upD(s1.p1);
        s1.p1.upD(s1.p2);
        s1.p2.upD(s.p1);
        if (s1.p1.y > s1.p2.y)
        {
            s.p1.y = s1.p1.y;
            s1.p1.y = s1.p2.y;
            s1.p2.y = s.p1.y;
        }
    }
    if (s2.p1.x > s2.p2.x)
    {
        s.p1.upD(s2.p1);
        s2.p1.upD(s2.p2);
        s2.p2.upD(s.p1);
        if (s2.p1.y > s2.p2.y)
        {
            s.p1.y = s2.p1.y;
            s2.p1.y = s1.p2.y;
            s2.p2.y = s.p1.y;
        }
    }
    if (s1.p1.x > s2.p2.x || s1.p2.x < s2.p1.x || s1.p2.y < s2.p1.y || s1.p1.y > s2.p2.y)
        return false;
    else
        return true;
}
int main()
{
    int n;
    float x1, y1, x2, y2, a1, b1, a2, b2;

    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
        Rect r1(x1, y1, x2, y2);
        Rect r2(a1, b1, a2, b2);
        if (overlap(r1, r2))
            cout << "overlapped" << endl;
        else
            cout << "not overlapped" << endl;
    }

    return 0;
}
/*
题目描述
用CPoint表示点，用两个CPoint对象表示矩形类CRect的对角线两点。分别实现CPoint类和CRect类，并在主函数用输入的坐标定义4个CPoint类对象，每2个CPoint对象再构造1个CRect对象，然后写个友元函数，判断2个矩形是否重叠。

输入
判断次数

矩形1的对角线顶点坐标x1, y1, x2, y2

矩形2的对角线顶点坐标x1, y1, x2, y2

......

输出
 是否重叠

样例输入
3
1 5 2 9
1 3 2 4
5 6 7 8
5 7 7 7
2 5 1 0
9 4 2 9
样例输出
not overlapped
overlapped
overlapped
*/