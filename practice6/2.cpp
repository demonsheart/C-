#include <iostream>
#include <string.h>
using namespace std;
class CDate
{
public:
    CDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
        this->getWeekofDay();
    }
    void print()
    {
        string st;
        switch (week)
        {
        case 1:
            st = "Monday";
            break;
        case 2:
            st = "Tuesday";
            break;
        case 3:
            st = "Wednesday";
            break;
        case 4:
            st = "Thursday";
            break;
        case 5:
            st = "Friday";
            break;
        case 6:
            st = "Saturday";
            break;
        case 7:
            st = "Sunday";
            break;
        default:
            break;
        }
        cout << month << "/" << day << "/" << year << ", " << st << endl;
    }
    void getWeekofDay()
    {
        int month = this->month, year = this->year;
        if (month == 1)
        {
            month = 13;
            year--;
        }
        if (month == 2)
        {
            month = 14;
            year--;
        }
        this->week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7 + 1;
    }

private:
    int month;
    int day;
    int year;
    int week;
};
int main()
{
    int n, y, m, d;
    cin >> n;
    while (n--)
    {
        cin >> y >> m >> d;
        CDate s(y, m, d);
        s.print();
    }
    return 0;
}
/*
题目描述
完成如下所示的CDate类中构造函数和其它成员函数的定义，并编写程序实现按下列格式打印某个日期的功能：mm/dd/yyyy, 星期。

(提示：计算某个日期(day, month, year)为星期几的公式如下：
week = (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7 + 1;
其中，如果month实际为1或2,则计算时公式里month的值取13或14, 且year的值取其实际值减1的值）。

class CDate
{
public:
     void print();
      void getWeekofDay();
private:
        int month;
        int day;
        int year;
        int week;
};

输入
日期个数

第一个日期

第二个日期

.......

输出
日期1月/日期1日/日期1年, 日期1星期

日期2月/日期2日/日期2年, 日期2星期

......

样例输入
3
1949 10 1
2015 1 1
2011 11 11
样例输出
10/1/1949, Saturday
1/1/2015, Thursday
11/11/2011, Friday
*/