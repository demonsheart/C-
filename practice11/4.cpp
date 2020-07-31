#include <iostream>
#include <string>
#include<iomanip>
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
        cout<<interval<<" "<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
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