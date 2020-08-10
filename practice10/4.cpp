#include <iostream>
using namespace std;
#include <iomanip>
class Time;
class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    friend void Display(Date &d, Time &t);
};

class Time
{
private:
    int h, m, s;

public:
    Time(int hh, int mm, int ss) : h(hh), m(mm), s(ss) {}
    friend void Display(Date &d, Time &t);
};
void Display(Date &d, Time &t)
{
    cout << d.year << "-" << setw(2) << setfill('0') << d.month;
    cout << "-" << setw(2) << setfill('0') << d.day << " ";
    cout << setw(2) << setfill('0') << t.h << ":" << setw(2) << setfill('0') << t.m;
    cout << ":" << setw(2) << setfill('0') << t.s << endl;
}
int main()
{
    int n, year, month, day, h, m, s;
    cin >> n;
    while (n--)
    {
        cin >> year >> month >> day >> h >> m >> s;
        Date d(year, month, day);
        Time t(h, m, s);
        Display(d, t);
    }
    return 0;
}
/*
题目描述
已知日期类Date，有属性：年、月、日，其他成员函数根据需要自行编写，注意该类没有输出的成员函数
已知时间类Time，有属性：时、分、秒，其他成员函数根据需要自行编写，注意该类没有输出的成员函数
现在编写一个全局函数把时间和日期的对象合并起来一起输出，
函数原型为：void Display(Date &, Time &)
函数输出要求为：
1、时分秒输出长度固定2位，不足2位补0
2、年份输出长度固定为4位，月和日的输出长度固定2位，不足2位补0
例如2017年3月3日19时5分18秒
则输出为：2017-03-03 19:05:18
程序要求
1、把函数Display作为时间类、日期类的友元
2、分别创建一个日期对象和时间对象，保存日期的输入和时间的输入
3、调用Print函数实现日期和时间的合并输出
输入
第一行输入t表示有t组示例

接着一行输入三个整数，表示年月日

再接着一行输入三个整数，表示时分秒

依次输入t组示例

输出
每行输出一个日期和时间合并输出结果

输出t行

样例输入
2
2017 3 3
19 5 18
1988 12 8
5 16 4
样例输出
2017-03-03 19:05:18
1988-12-08 05:16:04
*/