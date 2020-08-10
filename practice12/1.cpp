#include <iostream>
#include <iomanip>
using namespace std;
class Shape
{
private:
public:
    Shape() {}
    virtual float Area() = 0;
};
class Circle : public Shape
{
private:
    float r;

public:
    Circle(float rr) : r(rr) {}
    float Area()
    {
        return 3.14 * r * r;
    }
};
class Square : public Shape
{
private:
    float a;

public:
    Square(float aa) : a(aa) {}
    float Area()
    {
        return a * a;
    }
};
class Rectangle : public Shape
{
private:
    float lenth, width;

public:
    Rectangle(float a, float b) : lenth(a), width(b) {}
    float Area()
    {
        return lenth * width;
    }
};

int main()
{
    int t;
    float a, b;
    Shape *p;

    cin >> t;
    while (t--)
    {
        cin >> a;
        p = new Circle(a);
        cout << fixed << setprecision(2) << p->Area() << endl;

        cin >> a;
        p = new Square(a);
        cout << fixed << setprecision(2) << p->Area() << endl;

        cin >> a >> b;
        p = new Rectangle(a, b);
        cout << fixed << setprecision(2) << p->Area() << endl;
    }
    return 0;
}
/*
题目描述
编写一个程序，定义抽象基类Shape，在Shape类中定义虚函数Area()；由它派生出3个派生类：Circle(圆形)、Square(正方形)、Rectangle(矩形)。用虚函数分别计算几种图形面积。
1、要求输出结果保留两位小数。
2、要求用基类指针数组，使它每一个元素指向每一个派生类对象。
输入
测试数据的组数 t

第一组测试数据中圆的半径

第一组测测试数据中正方形的边长

第一组测试数据中矩形的长、宽

.......

第 t 组测试数据中圆的半径

第 t 组测测试数据中正方形的边长

第 t 组测试数据中矩形的长、宽

输出
第一组数据中圆的面积

第一组数据中正方形的面积

第一组数据中矩形的面积

......

第 t 组数据中圆的面积

第 t 组数据中正方形的面积

第 t 组数据中矩形的面积

样例输入
2
1.2
2.3
1.2 2.3
2.1
3.2
1.23 2.12
样例输出
4.52
5.29
2.76
13.85
10.24
2.61
*/