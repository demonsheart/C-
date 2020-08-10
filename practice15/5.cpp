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
    cout << v[ii].getName() << "��" << v[jj].getName() << "����������Ϊ" << maxi << "�졣" << endl;
    return 0;
}
/*
��Ŀ����
����һ��ѧ����Student��������ѧ���������������ꡢ�¡��� ���ض��� ��-����ʵ������ѧ��֮����������ıȽϡ����������صġ�-���������������ѧ��������������������˵������Լ����������
����
��һ�У���������Ҫ�����ѧ��������
�ڶ��п�ʼ����������ÿ��ѧ���������������ꡢ�¡��ա�
���
�������������������˵������Լ����������
��������
3
Tom 1995 1 1
Joe 1995 2 28
Jimmy 1996 1 8
�������
Tom��Jimmy����������Ϊ372�졣
*/