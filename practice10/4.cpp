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