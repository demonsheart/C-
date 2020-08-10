#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
class Date
{
protected:
    int year, day, month;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};
class Time
{
protected:
    int h, m, s;

public:
    Time(int a, int b, int c) : h(a), m(b), s(c)
    {
        if (h > 11)
            h -= 12;
    }
};

class Schedule : public Date, public Time
{
private:
    int id;

public:
    Schedule(int y, int m, int d, int h, int mm, int s, int i)
        : Date(y, m, d), Time(h, mm, s), id(i) {}
    friend bool before(const Schedule &s1, const Schedule &s2);
    friend void print(Schedule &p);
};
bool before(const Schedule &s1, const Schedule &s2)
{
    int a1, a2, b1, b2;
    a1 = s1.year * 10000 + s1.month * 100 + s1.day;
    b1 = s1.h * 10000 + s1.m * 100 + s1.s;
    a2 = s2.year * 10000 + s2.month * 100 + s2.day;
    b2 = s2.h * 10000 + s2.m * 100 + s2.s;
    if (a1 < a2)
        return true;
    else if (a1 == a2)
    {
        if (b1 < b2)
            return true;
        else if (b1 == b2)
        {
            if (s1.id <= s2.id)
                return true;
            else
                return false;
        }
    }
    return false;
}
void print(Schedule &p)
{
    cout << "The urgent schedule is No." << p.id << ": " << p.year << "/"
         << setw(2) << setfill('0') << p.month << "/"
         << setw(2) << setfill('0') << p.day << " "
         << setw(2) << setfill('0') << p.h << ":"
         << setw(2) << setfill('0') << p.m << ":"
         << setw(2) << setfill('0') << p.s << endl;
}
int main()
{
    int id, y, m, d, h, mm, s;
    vector<Schedule> v;

    while (1)
    {
        cin >> id;
        if (id == 0)
            break;
        cin >> y >> m >> d >> h >> mm >> s;
        Schedule temp(y, m, d, h, mm, s, id);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), before);
    print(v[0]);
    return 0;
}
/*
题目描述
已有一个日期类Date，包括三个protected成员数据year，month，day;

另有一个时间类Time，包括三个protected成员数据hour，minute，second，12小时制;

现需根据输入的日程的日期时间，安排前后顺序，为此以Date类和Time类为基类，建立一个日程类Schedule，包括以下新增成员：

int ID；//日程的ID

定义友元函数bool before(const Schedule & s1，const Schedule & s2);//判断日程s1时间是否早于日程s2。 

编写主函数，根据输入的各项日程信息，建立日程对象，找出需要最早安排的日程(日期和时间相等时，输出较早建立的日程），并输出该日程对象的信息。相同的日程，取先输入的。

输入
测试输入包含若干日程，每个日程占一行（日程ID 日程日期 日程时间）。

当读入0时输入结束，相应的结果不要输出。

输出
时间最靠前的日程

样例输入
1 2019 6 27 8 0 1
2 2019 6 28 8 0 1
3 2020 1 1 8 0 0
0
样例输出
The urgent schedule is No.1: 2019/06/27 08:00:01
*/