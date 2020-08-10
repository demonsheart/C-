#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Time
{
protected:
    int h, m, s;

public:
    Time(int a, int b, int c) : h(a), m(b), s(c) {}
};

class Time_12hours : public Time
{
private:
    string interval;

public:
    Time_12hours(int a, int b, int c, string i) : Time(a, b, c), interval(i) {}
    void adds();
    void minuss();
    void printTime()
    {
        cout << interval << " " << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;
    }
};
void Time_12hours::adds()
{
    if (s < 59)
        s++;
    else
    {
        if (m < 59)
        {
            s = 0;
            m++;
        }
        else
        {
            if (h < 11)
            {
                s = 0;
                m = 0;
                h++;
            }
            else
            {
                s = 0;
                m = 0;
                h = 0;
                if (interval == "PM")
                    interval = "AM";
                else
                    interval = "PM";
            }
        }
    }
}
void Time_12hours::minuss()
{
    if (s > 0)
        s--;
    else
    {
        if (m > 0)
        {
            s = 59;
            m--;
        }
        else
        {
            if (h > 0)
            {
                s = 59;
                m = 59;
                h--;
            }
            else
            {
                s = 59;
                m = 59;
                h = 11;
                if (interval == "PM")
                    interval = "AM";
                else
                    interval = "PM";
            }
        }
    }
}
int main()
{
    int flag, h, m, s, num;
    string c, st;
    while (1)
    {
        cin >> flag;
        if (flag == 0)
            break;
        cin >> h >> m >> s >> c >> num;
        if (flag == 121)
            st = "AM";
        else if (flag == 122)
            st = "PM";
        Time_12hours t(h, m, s, st);
        if (c == "+")
            for (int i = 0; i < num; i++)
                t.adds();
        if (c == "-")
            for (int i = 0; i < num; i++)
                t.minuss();
        t.printTime();
    }
    return 0;
}
/*
题目描述
基类Time类包含属性时、分、秒。

建立一个派生类Time_12hours类，用于表示十二进制时间，增加以下成员数据：

char interval[5]; //标识为AM或者PM，interval=”AM”或interval=”PM”

增加加一秒和减一秒的函数成员。

生成上述类并编写主函数，根据输入的初始时间信息、自增或者自减类型、自增或者自减次数，输出其最后时间信息。

输入
测试输入包含多个测试用例，一个测试用例为一行，每行共五个数字，第一个数字为进制，121表示输入为12进制AM时间，122表示输入为12进制PM时间，第二个数字为hour，第三个数字为minute，第四个数字为second，第五个字符为运算类型，+表示自增，-表示自减，第六个数字为运算次数，0表示测试用例结束。

输出
操作完成后的时间

样例输入
121 11 59 59 + 3
122 00 00 00 - 3
0
样例输出
PM 00:00:02
AM 11:59:57
*/