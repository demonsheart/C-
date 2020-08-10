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
��Ŀ����
����һ��������Date����������protected��Ա����year��month��day;

����һ��ʱ����Time����������protected��Ա����hour��minute��second��12Сʱ��;

�������������ճ̵�����ʱ�䣬����ǰ��˳��Ϊ����Date���Time��Ϊ���࣬����һ���ճ���Schedule����������������Ա��

int ID��//�ճ̵�ID

������Ԫ����bool before(const Schedule & s1��const Schedule & s2);//�ж��ճ�s1ʱ���Ƿ������ճ�s2�� 

��д����������������ĸ����ճ���Ϣ�������ճ̶����ҳ���Ҫ���簲�ŵ��ճ�(���ں�ʱ�����ʱ��������罨�����ճ̣�����������ճ̶������Ϣ����ͬ���ճ̣�ȡ������ġ�

����
����������������ճ̣�ÿ���ճ�ռһ�У��ճ�ID �ճ����� �ճ�ʱ�䣩��

������0ʱ�����������Ӧ�Ľ����Ҫ�����

���
ʱ���ǰ���ճ�

��������
1 2019 6 27 8 0 1
2 2019 6 28 8 0 1
3 2020 1 1 8 0 0
0
�������
The urgent schedule is No.1: 2019/06/27 08:00:01
*/