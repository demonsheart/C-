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
/*
题目描述
需要开发一个系统，对宠物的生长状态进行管理。给出下面的基类框架：

class Pet

{ protected:

　　string name;//姓名

int length;//身长

int weight;//体重

CDate current;//开始记录时间

（日期类CDate包含年、月、日三个私有数据，其他方法根据需要自拟。）

public:

virtual void display(CDate day)=0;//输出目标日期时宠物的身长和体重

}

以Pet为基类，构建出Cat和Dog两个类:

Cat一天身长加0.1，体重加0.2。

Dog一天身长加0.2，体重加0.1。

生成上述类并编写主函数，要求主函数中有一个基类指针Pet *pt，用于测试子类数据。

主函数根据输入的信息，相应建立Cat类对象或Dog类对象，并给出测量日期时宠物的身长和体重。

输入
第一行为测试次数

第二行是开始记录日期

从第三行起，每个测试用例占一行，每行给出宠物的基本信息：宠物的类型（1为Cat，2为Dog）、名字、身长、体重、最后测量的日期。

输出
要求输出目标日期宠物姓名、身长和体重（结果要求保留小数点后2位）。若测量日期小于开始日期，输出”error”。

样例输入
3
2019 5 5
1 tony 10 10 2018 12 30
2 jerry 5 6 2019 5 10
1 tom 3 4 2019 6 1
样例输出
error
jerry after 5 day: length=6.00,weight=6.50
tom after 27 day: length=5.70,weight=9.40
*/