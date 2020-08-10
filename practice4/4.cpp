#include <iostream>
using namespace std;
struct SDate
{
    int year;
    int month;
    int day;
};
void sortt(SDate stu[], int n);
int main()
{
    int t;
    cin >> t;
    SDate stu[50];
    for (int i = 0; i < t; ++i)
    {
        cin >> stu[i].year >> stu[i].month >> stu[i].day;
    }
    sortt(stu, t);
    cout << stu[1].year << "-" << stu[1].month << "-" << stu[1].day << endl;
}
void sortt(SDate stu[], int n)
{
    SDate s;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (stu[i].year > stu[j].year ||
                stu[i].year == stu[j].year && stu[i].month > stu[j].month ||
                stu[i].year == stu[j].year && stu[i].month == stu[j].month && stu[i].day > stu[j].day)
            {
                s = stu[i];
                stu[i] = stu[j];
                stu[j] = s;
            }
        }
    }
}
/*
题目描述
定义一个结构体，包含年月日，表示一个学生的出生日期。然后在一群学生的出生日期中找出谁的出生日期排行第二

要求：出生日期的存储必须使用结构体，不能使用其他类型的数据结构。

要求程序全过程对出生日期的输入、访问、输出都必须使用结构。

输入
第一行输入t表示有t个出生日期

每行输入三个整数，分别表示年、月、日

依次输入t个实例

输出
输出排行第二老的出生日期，按照年-月-日的格式输出

样例输入
6
1980 5 6
1981 8 3
1980 3 19
1980 5 3
1983 9 12
1981 11 23
样例输出
1980-5-3
*/