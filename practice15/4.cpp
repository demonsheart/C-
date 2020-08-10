#include <iostream>
#include <cmath>
using namespace std;
class CPoint
{
private:
    int x, y;

public:
    CPoint() {}
    CPoint(int xx, int yy) : x(xx), y(yy) {}
    int getX() { return x; }
    int getY() { return y; }
};
class CRectangle
{
private:
    CPoint leftPoint, rightPoint;

public:
    CRectangle(int x1, int y1, int x2, int y2) : leftPoint(x1, y1), rightPoint(x2, y2) {}
    bool operator>(CPoint &c)
    {
        if (c.getX() < leftPoint.getX() || c.getX() > rightPoint.getX() || c.getY() > leftPoint.getY() || c.getY() < rightPoint.getY())
            return false;
        else
            return true;
    }
    bool operator>(CRectangle &c)
    {
        if (c.leftPoint.getX() >= leftPoint.getX() && c.leftPoint.getY() <= leftPoint.getY() && c.rightPoint.getX() <= rightPoint.getX() && c.rightPoint.getY() >= rightPoint.getY())
            return true;
        else
            return false;
    }
    bool operator==(CRectangle &c)
    {
        if (c.leftPoint.getX() == leftPoint.getX() && c.leftPoint.getY() == leftPoint.getY() && c.rightPoint.getX() == rightPoint.getX() && c.rightPoint.getY() == rightPoint.getY())
            return true;
        else
            return false;
    }
    bool operator*(CRectangle &c)
    {
        if (c.leftPoint.getX() > rightPoint.getX() || c.rightPoint.getX() < leftPoint.getX() || c.rightPoint.getY() > leftPoint.getY() || c.leftPoint.getY() < rightPoint.getY())
            return false;
        else
            return true;
    }
    operator int()
    {
        return abs(leftPoint.getX() - rightPoint.getX()) * abs(leftPoint.getY() - rightPoint.getY());
    }
    friend ostream &operator<<(ostream &out, CRectangle &c)
    {
        out << c.leftPoint.getX() << " " << c.leftPoint.getY() << " " << c.rightPoint.getX() << " " << c.rightPoint.getY();
        return out;
    }
};

int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;

    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);

        cout << "矩形1:" << rect1 << " " << (int)rect1 << endl;
        cout << "矩形2:" << rect2 << " " << (int)rect2 << endl;

        if (rect1 == rect2)
            cout << "矩形1和矩形2相等" << endl;
        else if (rect2 > rect1)
            cout << "矩形2包含矩形1" << endl;
        else if (rect1 > rect2)
            cout << "矩形1包含矩形2" << endl;
        else if (rect1 * rect2)
            cout << "矩形1和矩形2相交" << endl;
        else
            cout << "矩形1和矩形2不相交" << endl;
        cout << endl;
    }
    return 0;
}
/*
题目描述
定义一个字符串类str，该类中包含2个属性，字符串长度和一个char型指针保存字符串内容。增加以下运算符的重载：+、- 。+运算符表示把2个字符串拼接成一个字符串。-运算符表示例如a2-a1，则删除a2中出现的a1字符串。



要求如下：
1.实现str类；
2.编写main函数，初始化2个str对象A、B，输出这2个对象相加后的对象C的结果信息。输出C与B之间相减后的结果信息。
(提示:strstr(char *a,char*b)可以从a字符串中查找出b首次出现的地址)
输入
第1行：输入一个字符串，初始化第一个str对象。
(提示:通过cin. getline(char *,int strCount)可以输入一个字符串到char数组中)
第2行：输入一个字符串，初始化第二个str对象。
输出
第1行：输出两个字符串相加后的长度和字符串。

第2行：输出两个字符串相减后的长度和字符串。

样例输入
i am a 
student!
样例输出
length=15 i am a student!
length=7 i am a 
*/