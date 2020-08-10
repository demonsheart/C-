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
题目描述
定义一个日期类Date，包含数据成员year\month\day，还包含构造函数及其他函数(根据需要自己添加)

定义一个会员类VIP，包含数据成员id和birth，其中id是整数表示会员编号；birth是Date类型表示生日。

类VIP包含构造函数和其他函数（根据需要自己添加），还包含一个折扣函数Discount。函数Discount返回结果为浮点数表示折扣，函数包含1个参数为日期类型，函数功能是判断参数日期是否会员生日，是则折扣为0.5，不是则折扣为0.95

编写程序实现上述类功能并实现输入输出的要求

输入
第一行输入年、月、日，表示今天日期

第二行输入t表示有t个会员

第三行输入第1个会员的ID、生日的年、月、日

第四行输入第1个会员的消费金额

依次类推输入下一个会员的两行数据.....

输出
根据会员的消费金额，调用Discount函数判断今天是否会员生日并得到折扣，然后计算会员打完折的消费金额

每一行先输出会员编号，再输出会员打完折的消费金额，消费金额只需要输出整数部分

提示把浮点数转整数

double x = 123.456

cout<<int(x)<<endl;

样例输入
2017 4 20
2
1111 2000 4 20
136
2222 2000 3 30
125
样例输出
1111's consumption is 68
2222's consumption is 118
*/