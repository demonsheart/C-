#include <iostream>
#include <cmath>
using namespace std;
class C2D
{
protected:
    float x, y;

public:
    C2D(float a, float b) : x(a), y(b) {}
    virtual float getDistance()
    {
        return sqrt(x * x + y * y);
    }
};

class C3D : public C2D
{
private:
    float z;

public:
    C3D(float a, float b, float c) : C2D(a, b), z(c) {}
    float getDistance()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    float a, b, c;
    cin >> a >> b;
    C2D s1(a, b);
    cout << s1.getDistance() << endl;
    cin >> a >> b >> c;
    C3D s2(a, b, c);
    cout << s2.getDistance() << endl;
    cin >> a >> b >> c;
    C3D s3(a, b, c);
    cout << s3.getDistance() << endl;
    cout << ((C2D)s3).getDistance() << endl;
    return 0;
}
/*
题目描述
定义一个平面上的点C2D类，它含有一个getDistance()的成员函数，计算该点到原点的距离；从C2D类派生出三维空间的点C3D类，它的getDistance()成员函数计算该点到原点的距离。试分别生成一个C2D和C3D的对象，计算它们到原点的距离。
三维空间的两点（x, y, z）和（x1, y1, z1）的距离公式如下：
[(x-x1)^2+(y-y1)^2+(z-z1)^2]^(1/2) 
输入
第一行二维坐标点位置

第二行三维坐标点位置1

第三行三维坐标点位置2

输出
第一行二维坐标点位置到原点的距离

第二行三维坐标点位置1到原点的距离

第三行三维坐标点位置2到原点的距离

第四行三维坐标点位置2赋值给二维坐标点变量后，二维坐标点到原点的距离

样例输入
3 4
3 4 5
6 8 8
样例输出
5
7.07107
12.8062
10
*/