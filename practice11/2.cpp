#include <iostream>
using namespace std;
class CPoint
{
protected:
    float x, y;

public:
    CPoint(float a, float b) : x(a), y(b) {}
};

class CCircle : public CPoint
{
protected:
    float r;

public:
    CCircle(float a, float b, float rr) : CPoint(a, b), r(rr) {}
    float getArea() { return 3.14 * r * r; }
};

class CCylinder : public CCircle
{
private:
    float h;

public:
    CCylinder(float a, float b, float rr, float hh) : CCircle(a, b, rr), h(hh) {}
    float getVolume() { return 3.14 * r * r * h; }
};

int main()
{
    float a, b, rr, hh;

    cin >> a >> b >> rr;
    CCircle s1(a, b, rr);
    cout << "Circle:(" << a << "," << b << ")," << rr << endl;
    cout << "Area:" << s1.getArea() << endl;

    cin >> a >> b >> rr >> hh;
    CCylinder s2(a, b, rr, hh);
    cout << "Cylinder:(" << a << "," << b << ")," << rr << "," << hh << endl;
    cout << "Volume:" << s2.getVolume() << endl;

    return 0;
}
/*
题目描述
定义一个CPoint点类，包含数据成员x,y（坐标点）。

以CPoint为基类，派生出一个圆形类CCircle，增加数据成员r(半径）和一个计算圆面积的成员函数。

再以CCircle做为直接基类，派生出一个圆柱体类CCylinder，增加数据成员h(高)和一个计算体积的成员函数。

生成圆和圆柱体对象，调用成员函数计算面积或体积并输出结果。

输入
输入圆的圆心位置、半径

输入圆柱体圆心位置、半径、高

输出
输出圆的圆心位置 半径

输出圆面积

输出圆柱体的圆心位置 半径 高

输出圆柱体体积

样例输入
0 0 1
1 1 2 3
样例输出
Circle:(0,0),1
Area:3.14
Cylinder:(1,1),2,3
Volume:37.68
*/