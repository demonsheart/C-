#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
bool isLeapYear(int year) { return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0); }
class Student
{
private:
    int year, day, month;
    string name;

public:
    Student(string n, int y, int m, int d) : name(n), year(y), month(m), day(d) {}
    string getName()
    {
        return name;
    }
    int getDays()
    {
        int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeapYear(year))
            m[2]++;
        int result = 0;
        for (int i = 1; i < year; i++)
        {
            result += 365;
            if (isLeapYear(i))
                result++;
        }
        for (int i = 1; i < month; i++)
        {
            result += m[i];
        }
        result += day;
        return result;
    }
    int operator-(Student &d)
    {
        return abs(this->getDays() - d.getDays());
    }
};
int main()
{
    int n, y, m, d;
    vector<Student> v;

    cin >> n;
    while (n--)
    {
        string s;
        cin >> s >> y >> m >> d;
        Student tmp(s, y, m, d);
        v.push_back(tmp);
    }
    int size = v.size(), maxi = 0, t, ii, jj;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 1; j < size; ++j)
        {
            t = v[i] - v[j];
            if (maxi < t)
            {
                maxi = t;
                ii = i;
                jj = j;
            }
        }
    }
    cout << v[ii].getName() << "和" << v[jj].getName() << "年龄相差最大，为" << maxi << "天。" << endl;
    return 0;
}
/*
题目描述
定义一个学生类Student，包含该学生的姓名、出生年、月、日 ，重定义 “-”号实现两个学生之间相差多少天的比较。并利用重载的“-”运算符，求所有学生中年龄相差最大的两个人的名字以及相差天数。
输入
第一行：输入所需要输入的学生个数；
第二行开始，依次输入每个学生的姓名、出生年、月、日。
输出
输出年龄相差最大的两个人的名字以及相差天数。
样例输入
3
Tom 1995 1 1
Joe 1995 2 28
Jimmy 1996 1 8
样例输出
Tom和Jimmy年龄相差最大，为372天。
*/