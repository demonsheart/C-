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
��Ŀ����
��֪������Date�������ԣ��ꡢ�¡��գ�������Ա����������Ҫ���б�д��ע�����û������ĳ�Ա����
��֪ʱ����Time�������ԣ�ʱ���֡��룬������Ա����������Ҫ���б�д��ע�����û������ĳ�Ա����
���ڱ�дһ��ȫ�ֺ�����ʱ������ڵĶ���ϲ�����һ�������
����ԭ��Ϊ��void Display(Date &, Time &)
�������Ҫ��Ϊ��
1��ʱ����������ȹ̶�2λ������2λ��0
2�����������ȹ̶�Ϊ4λ���º��յ�������ȹ̶�2λ������2λ��0
����2017��3��3��19ʱ5��18��
�����Ϊ��2017-03-03 19:05:18
����Ҫ��
1���Ѻ���Display��Ϊʱ���ࡢ���������Ԫ
2���ֱ𴴽�һ�����ڶ����ʱ����󣬱������ڵ������ʱ�������
3������Print����ʵ�����ں�ʱ��ĺϲ����
����
��һ������t��ʾ��t��ʾ��

����һ������������������ʾ������

�ٽ���һ������������������ʾʱ����

��������t��ʾ��

���
ÿ�����һ�����ں�ʱ��ϲ�������

���t��

��������
2
2017 3 3
19 5 18
1988 12 8
5 16 4
�������
2017-03-03 19:05:18
1988-12-08 05:16:04
*/