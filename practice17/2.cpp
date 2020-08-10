#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
struct str
{
    string s;
    bool operator<(str &rhs)
    {
        return s.compare(rhs.s) < 0;
    }
    friend ostream &operator<<(ostream &os, const str &rhs)
    {
        os << rhs.s;
        return os;
    }
};

class Point
{
private:
    double x, y;

public:
    Point(double xx, double yy) : x(xx), y(yy) {}
    template <class T>
    friend void mysort(vector<T> &v);
    operator double()
    {
        return sqrt(x * x + y * y);
    }
    friend ostream &operator<<(ostream &os, const Point &p)
    {
        os << "(" << fixed << setprecision(1) << p.x << ", " << fixed << setprecision(1) << p.y << ")";
        return os;
    }
};
template <class T>
void mysort(vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j < len - 1; ++j)
        {
            if (v[j + 1] < v[j])
                swap(v[j], v[j + 1]);
        }
    }
}
template <class T>
void print(vector<T> &v)
{
    for (int i = 0; i < (int)v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    int t, n;
    char typ;

    cin >> t;
    while (t--)
    {
        cin >> typ >> n;
        if (typ == 'I')
        {
            int tmp;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'D')
        {
            double tmp;
            vector<double> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'P')
        {
            double x, y;
            vector<Point> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> x >> y;
                Point tmp(x, y);
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'S')
        {
            str tmp;
            vector<str> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp.s;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
    }
    return 0;
}
/*
题目描述
编写一个对n个元素的数组升序排序的函数模板mysort，其中元素类型可以是基本数据类型,也可以是点对象(按点到原点的距离比较)。（要求不能用C++提供的sort函数模板）

输入
第一行输入测试次数

每次测试输入二行，第1行先输入一个大写字母表示数组类型，I表示整数类型，S表示字符串型，D表示双精度数类型，P表示点，最后输入n表示数组长度。第2行输入n个数据。

输出
每次测试输出一行排序后的结果

样例输入
4
I 10
15 3 51 27 9 35 78 14 65 8
D 3
-11.3 25.42 13.2
P 6
1.1 2.2 2.4 -6.5 12 32 1.2 1.3 -3.5 0.1 9.2 1.1
S 4
sandy david eason cindy
样例输出
3 8 9 14 15 27 35 51 65 78 
-11.3 13.2 25.42 
(1.2, 1.3) (1.1, 2.2) (-3.5, 0.1) (2.4, -6.5) (9.2, 1.1) (12.0, 32.0)
cindy david eason sandy
*/