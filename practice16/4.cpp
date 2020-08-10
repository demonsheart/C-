#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
struct plural
{
    int real, imag;
    friend ostream &operator<<(ostream &os, plural &tmp)
    {
        if (tmp.real >= 0)
            os << tmp.imag << '+' << tmp.real;
        else
            os << tmp.imag << tmp.real;
        return os;
    }
};

template <class T>
string _reverse(T a)
{
    ostringstream os;
    string s;

    os << a;
    s = os.str();
    int fg1 = 0; //复数
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '-' || s[i] == '+') //以字符串中间有正负号断言复数
        {
            fg1 = 1;
            break;
        }
    }
    if (fg1)
        return s;
    int fg2 = 0; //负数
    if (s[0] == '-')
    {
        fg2 = 1;
        s.erase(s.begin()); //先去除符号
    }
    reverse(s.begin(), s.end());             //逆转
    while (s.front() == '0' && s.size() > 1) //去除前面多余的0
        s.erase(s.begin());
    if (fg2) //回添负号
        s = '-' + s;
    return s;
}
int main()
{
    int t;
    char cmd;
    string result;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 'I')
        {
            int s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'D')
        {
            double s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'S')
        {
            string s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'C')
        {
            int a, b;
            cin >> a >> b;
            plural s{a, b};
            result = _reverse(s);
            cout << result << endl;
        }
    }
    return 0;
}
/*
题目描述
编写一个逆序输出数据的函数模板reverse（复数的逆序是实部虚部置换）。

输入
第一行输入测试次数

每次测试输入一行，先输入一个大写字母表示数据类型, I表示整型、D表示双精度型、S表示string类型字符串、C表示复数类对象，最后输入数据。

输出
每次测试输出一行，逆序排列的数据

样例输入
5
I 123456
D -235.172
S thisisatest
C -123 456
C 123 -456
样例输出
654321
-271.532
tsetasisiht
456-123
-456+123
提示
可用类型转换函数将复数类对象转换为string.
模板函数内采用如下所示的方法可将数值型变量a转换成string型变量s:
#include "sstream"
......
ostringstream os;
string s;

os << a;
s = os.str();
*/