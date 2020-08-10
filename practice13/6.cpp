#include <iostream>
#include <iomanip>
using namespace std;
class Geometry
{
public:
    virtual double getArea() = 0;
};
class Rect : public Geometry
{
private:
    double lenth, width;

public:
    Rect(double l, double w) : lenth(l), width(w) {}
    double getArea() { return lenth * width; }
};

class Circle : public Geometry
{
private:
    double r;

public:
    Circle(double rr) : r(rr) {}
    double getArea() { return 3.14 * r * r; }
};

class TotalArea
{
public:
    static void computerTotalArea(Geometry **t, int n)
    {
        double ma = t[0]->getArea();
        for (int i = 0; i < n; ++i)
        {
            if (ma < t[i]->getArea())
                ma = t[i]->getArea();
        }
        cout << "最大面积=" << fixed << setprecision(2) << ma << endl;
    }
};

int main()
{
    int n, flag, i = 0;
    double a, b;

    cin >> n;

    Geometry **p = new Geometry *[n];
    while (n--)
    {
        cin >> flag;
        if (flag == 1)
        {
            cin >> a >> b;
            p[i++] = new Rect(a, b);
        }
        else if (flag == 2)
        {
            cin >> a;
            p[i++] = new Circle(a);
        }
    }
    TotalArea t;
    t.computerTotalArea(p, i);
    return 0;
}
/*
题目描述
请编写程序，从图形数组中找出最大面积。基类框架如下所示：

class Geometry{

public:

    virtual double getArea()=0; //计算面积，结果保留小数点后两位

};

以Geometry为基类，构建出Rect（矩形，数据成员为长和宽）和Circle（圆，数据成员为半径）两个类，重写getArea()方法，其他方法根据需要自拟。

写一个TotalArea类，该类结构如下：

class TotalArea{

public:

   static void computerTotalArea(Geometry** t,int n)；//t为基类二级指针，指向一个基类动态数组，数组的每个元素指向一个子类图形，n为数组的大小

};

生成上述四个类并编写主函数，结果保留两位小数。

输入
第一行表示测试次数。从第二行开始，每个测试用例占一行，每行数据意义如下：图形类型（1为Rect(矩形)，2为Circle(圆)）、基本信息（Rect是长和宽，Circle是半径）。

输出
最大图形的面积
样例输入
3
1 3 4
2 5
2 6
样例输出
最大面积=113.04
*/