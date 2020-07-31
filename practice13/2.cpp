#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool isLeapYear(int year) { return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0); }
class CDate
{
private:
    int year, day, month;

public:
    CDate(int y, int m, int d) : year(y), month(m), day(d) {}
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
    friend class Pet;
    bool operator<(const CDate &d)
    {
        if (d.year > year || (d.year == year && d.month > month) || (d.year == year && d.month == month && d.day > day))
            return true;
        else
            return false;
    }
};

class Pet
{
protected:
    string name;   //姓名
    float length;  //身长
    float weight;  //体重
    CDate current; //开始记录时间
public:
    Pet(string n, float l, float w, int y, int m, int d) : name(n), length(l), weight(w), current(y, m, d) {}
    virtual void display(CDate day) = 0; //输出目标日期时宠物的身长和体重
};
class Cat : public Pet
{
private:
    /* data */
public:
    Cat(string n, float l, float w, int y, int m, int d) : Pet(n, l, w, y, m, d) {}
    void display(CDate day)
    {
        if (day < current)
        {
            int dis = current.getDays() - day.getDays();
            length += 0.1 * dis;
            weight += 0.2 * dis;
            cout << name << " after " << dis << " day: length=" << fixed << setprecision(2) << length << ",weight=" << fixed << setprecision(2) << weight << endl;
        }
        else
            cout << "error" << endl;
    }
};

class Dog : public Pet
{
private:
    /* data */
public:
    Dog(string n, float l, float w, int y, int m, int d) : Pet(n, l, w, y, m, d) {}
    void display(CDate day)
    {
        if (day < current)
        {
            int dis = current.getDays() - day.getDays();
            length += 0.2 * dis;
            weight += 0.1 * dis;
            cout << name << " after " << dis << " day: length=" << fixed << setprecision(2) << length << ",weight=" << fixed << setprecision(2) << weight << endl;
        }
        else
            cout << "error" << endl;
    }
};

int main()
{
    int t, y, m, d, flag;
    float weight, lenth;
    string name;

    cin >> t;
    cin >> y >> m >> d;
    CDate base(y, m, d);
    while (t--)
    {
        cin >> flag >> name >> lenth >> weight >> y >> m >> d;
        if (flag == 1)
        {
            Cat c(name, lenth, weight, y, m, d);
            c.display(base);
        }
        if (flag == 2)
        {
            Dog g(name, lenth, weight, y, m, d);
            g.display(base);
        }
    }
    return 0;
}