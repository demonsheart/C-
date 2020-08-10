#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class box
{
private:
    string no;
    int length, width, height;

public:
    box(string n = "NULL", int l = 0, int w = 0, int h = 0) : no(n), length(l), width(w), height(h) {}
    int operator-(box &r)
    {
        if (length <= r.length && width <= r.width)
        {
            if (height >= r.height)
                return width * length * r.height;
            else
                return width * length * height;
        }
        else
            return 0;
    }
    string getNo()
    {
        return no;
    }
};
int main()
{
    int t, l, w, h, max = 0;
    string no, no1, no2;
    vector<box> v;
    cin >> t;
    while (t--)
    {
        cin >> no >> l >> w >> h;
        box tmp(no, l, w, h);
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            if (max < v[i] - v[j])
            {
                max = v[i] - v[j];
                no1 = v[i].getNo();
                no2 = v[j].getNo();
            }
            if (max < v[j] - v[i])
            {
                max = v[j] - v[i];
                no1 = v[j].getNo();
                no2 = v[i].getNo();
            }
        }
    }
    cout << no1 << "盒子放入" << no2 << "盒子溢出的水最多，为" << max << "。";
}

/*
题目描述
定义盒子容器类，包含4个成员：编号、长、宽、高，(长大于等于宽)且该盒子容积就为它的体积，现向每个盒子容器里面倒满水，重定义“-”运算符，实现求出一个盒子放入另一个盒子容器内溢出来水的体积，并输入溢出水最多的两个盒子容器的编号以及溢出水的体积(温馨提示：不一定就是两个体积相减)。盒子容器类的基本形式如下：

class box{

private string num;
private int length;
private int width;
private int height;
…
}
输入
第一行输入圆柱体的个数
第二行开始依次输入每个圆柱体的编号、长、宽、高
输出
溢出水最多的两个圆柱体容器的编号以及溢出水的体积

样例输入
3
01 10 10 12
02 12 9 8
03 12 10 8
样例输出
02盒子放入03盒子溢出的水最多，为864。
*/