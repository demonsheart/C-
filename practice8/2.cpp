#include <iostream>
using namespace std;
class Date
{
private:
    int year, month, day;

public:
    Date() { year = month = day = 0; }
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
    ~Date();
};
Date::~Date()
{
}
class VIP
{
private:
    int id;
    Date birth;

public:
    VIP() { id = 0; };
    void set(int no, int y, int m, int d)
    {
        id = no;
        birth.setYear(y);
        birth.setMonth(m);
        birth.setDay(d);
    }
    int getID() { return id; }
    float Discount(Date &d);
};
float VIP::Discount(Date &d)
{
    if (birth.getDay() == d.getDay() && birth.getMonth() == d.getMonth())
        return 0.5;
    else
        return 0.95;
}
int main()
{
    int id, y, m, d, t;
    float dis;
    cin >> y >> m >> d;
    Date today(y, m, d);
    cin >> t;
    VIP v[t];
    float *p = new float[t];
    for (int i = 0; i < t; i++)
    {
        cin >> id >> y >> m >> d;
        v[i].set(id, y, m, d);
        cin >> p[i];
    }
    for (int i = 0; i < t; i++)
    {
        dis = v[i].Discount(today);
        p[i] = p[i] * dis;
    }
    for (int i = 0; i < t; i++)
    {
        cout << v[i].getID() << "'s consumption is " << int(p[i]) << endl;
    }
    delete[] p;
    return 0;
}
/*
��Ŀ����
����һ��������Date���������ݳ�Աyear\month\day�����������캯������������(������Ҫ�Լ����)

����һ����Ա��VIP���������ݳ�Աid��birth������id��������ʾ��Ա��ţ�birth��Date���ͱ�ʾ���ա�

��VIP�������캯��������������������Ҫ�Լ���ӣ���������һ���ۿۺ���Discount������Discount���ؽ��Ϊ��������ʾ�ۿۣ���������1������Ϊ�������ͣ������������жϲ��������Ƿ��Ա���գ������ۿ�Ϊ0.5���������ۿ�Ϊ0.95

��д����ʵ�������๦�ܲ�ʵ�����������Ҫ��

����
��һ�������ꡢ�¡��գ���ʾ��������

�ڶ�������t��ʾ��t����Ա

�����������1����Ա��ID�����յ��ꡢ�¡���

�����������1����Ա�����ѽ��

��������������һ����Ա����������.....

���
���ݻ�Ա�����ѽ�����Discount�����жϽ����Ƿ��Ա���ղ��õ��ۿۣ�Ȼ������Ա�����۵����ѽ��

ÿһ���������Ա��ţ��������Ա�����۵����ѽ����ѽ��ֻ��Ҫ�����������

��ʾ�Ѹ�����ת����

double x = 123.456

cout<<int(x)<<endl;

��������
2017 4 20
2
1111 2000 4 20
136
2222 2000 3 30
125
�������
1111's consumption is 68
2222's consumption is 118
*/