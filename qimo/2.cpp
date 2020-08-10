#include <iostream>
using namespace std;
class Metal
{
private:
    int hard, weight, volume;

public:
    Metal(int h, int w, int v) : hard(h), weight(w), volume(v){};
    void print()
    {
        cout << "硬度" << hard << "--"
             << "重量" << weight << "--"
             << "体积" << volume << endl;
    }
    Metal operator++()
    {
        hard++;
        weight = weight + weight * 0.1;
        volume = volume + volume * 0.1;
        return *this;
    }
    Metal operator--(int)
    {
        Metal tmp(*this);
        hard--;
        int tm1 = weight * 0.1, tm2 = volume * 0.1;
        weight -= tm1;
        volume -= tm2;
        return tmp;
    }
    friend Metal operator+(Metal m1, Metal m2);
    friend Metal operator*(Metal m, int n);
};
Metal operator+(Metal m1, Metal m2)
{
    Metal tmp(m1.hard + m2.hard, m1.weight + m2.weight, m1.volume + m2.volume);
    return tmp;
}
Metal operator*(Metal m, int n)
{
    m.volume *= n;
    return m;
}
int main()
{
    int h, w, v, n;

    cin >> h >> w >> v;
    Metal m1(h, w, v);

    cin >> h >> w >> v;
    Metal m2(h, w, v);
    cin >> n;

    Metal m3 = m1 + m2;
    m3.print();

    Metal m4 = m1 * n;
    m4.print();

    ++m1;
    m1.print();

    m2--;
    m2.print();
    return 0;
}
/*
题目描述
在金属加工中，金属具有硬度、重量、体积的属性（都是整数），包括四种操作：
1、合并，每两块金属可以合并成一块新的金属。新金属的重量等于原两块金属的重量之和，体积和硬度也类似计算。
2、巨化，金属通过熔炼风吹的方法会巨化，体积变大n倍，重量和硬度不变
3、硬化，在金属中加入高分子材料可以硬化金属，每提升硬度一级，重量和体积都增加10%。
4、软化，在金属中加入特殊化学溶液可以降低金属硬度，每降低硬度一级，重量和体积都减少10%
用类来描述金属，用运算符重载方式实现金属的四种操作，并定义打印函数，具体要求如下
1、用加法运算符、友元的方式实现合并
2、用乘法运算符、友元的方式实现巨化，含两个参数：金属对象、巨化倍数
3、用++运算符、成员函数、前增量的方式实现硬化
4、用--运算符、成员函数、后增量的方式实现软化
5、打印函数用来输出金属的信息，输出格式看参考样本
  

操作中所有属性的运算结果都只保留整数部分。

上述所有类属性都不是public，用面向对象思想和C++语言实现上述要求

输入
第一行输入第一块金属的信息，包括硬度、重量、体积

第二行输入第二块金属的信息，包括硬度、重量、体积

第三行输入一个参数n，表示巨化n倍

输出
第一行输出两块金属合并后的信息

第二行输出第一块金属巨化n倍的信息

第三行输出第一块金属提升硬度一级后的信息

第四行输出第二块金属降低硬度一级后的信息

样例输入
3 3000 300
5 5000 500
2
样例输出
硬度8--重量8000--体积800
硬度3--重量3000--体积600
硬度4--重量3300--体积330
硬度4--重量4500--体积450
*/