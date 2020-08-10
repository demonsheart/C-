#include <iostream>
using namespace std;
class Cube;
class Point
{
private:
    float x, y, z;

public:
    Point() {}
    Point(float a, float b, float c);
    friend class Cube;
};
Point::Point(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}
class Cube
{
private:
    Point *p;

public:
    Cube(float x1, float y1, float z1, float x2, float y2, float z2);
    int collide(Cube &r);
    ~Cube();
};
int Cube::collide(Cube &r)
{
    if (p[1].x < r.p[0].x || r.p[1].x < p[0].x || p[1].y < r.p[0].y || r.p[1].y < p[0].y || p[0].z < r.p[1].z || r.p[0].z < p[1].z)
        return 0;
    else
        return 1;
}
Cube::Cube(float x1, float y1, float z1, float x2, float y2, float z2)
{
    p = new Point[2];
    p[0].x = x1;
    p[0].y = y1;
    p[0].z = z1;
    p[1].x = x2;
    p[1].y = y2;
    p[1].z = z2;
}
Cube::~Cube()
{
    delete[] p;
}

int main()
{
    int n;
    float x1, y1, z1, x2, y2, z2;

    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        Cube c1(x1, y1, z1, x2, y2, z2);
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        Cube c2(x1, y1, z1, x2, y2, z2);
        if (c1.collide(c2))
            cout << "collide" << endl;
        else
            cout << "have distance" << endl;
    }
}
/*
题目描述
假设坐标系采用下图中的三维坐标系(x,y,z)，圆点为（0,0,0）。

定义点类CPoint，包含数据成员x坐标，y坐标，z坐标。方法有：带参构造函数，析构函数等。

假设立方体的边与坐标轴平行。定义立方体类CCube，包含数据成员：CPoint *point。方法有：



带参构造函数动态生成点对象数组，数组大小为2。并根据参数设置立方体的坐标点1，坐标点2，如上图所示。

int collide(CCube r);  判定与r立方体是否发生碰撞。碰撞返回1，否则返回0。

析构函数，释放分配的空间。

可根据需要，为CPoint和CCube添加需要的方法。

输入
测试次数t

每组测试数据两行：

第一行：第一个立方体的坐标点1、坐标点2

第二行：第二个立方体的坐标点1、坐标点2

输出
对每组测试数据，输出结果：

碰撞输出：collide; 否则输出：have distance

样例输入
2
7 7 10 10 10 7
7 8 12 11 12 8
-1 -1 8 6 6 1
-10 -10 10 -8 -8 8


样例输出
collide
have distance
*/