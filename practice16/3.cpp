#include <iostream>
using namespace std;
class CClock
{
private:
    int a, b, c;

public:
    CClock(int aa, int bb, int cc) : a(aa), b(bb), c(cc) {}
    friend ostream &operator<<(ostream &out, const CClock &c)
    {
        out << c.a << " " << c.b << " " << c.c;
        return out;
    }
    template<class T> friend  T add(T t1, T t2, int scale);
};
class CRmb
{
private:
    int a, b, c;

public:
    CRmb(int aa, int bb, int cc) : a(aa), b(bb), c(cc) {}
    friend ostream &operator<<(ostream &out, const CRmb &c)
    {
        out << c.a << " " << c.b << " " << c.c;
        return out;
    }
    template<class T> friend  T add(T t1, T t2, int scale);
};

template <class T>
T add(T t1, T t2, int scale)
{
    int a = t1.a + t2.a, b = t1.b + t2.b, c = t1.c + t2.c;
    if (c >= scale)
    {
        c -= scale;
        b++;
    }
    if (b >= scale)
    {
        b -= scale;
        a++;
    }
    T result(a, b, c);
    return result;
}
int main()
{
    int a, b, c, s1 = 60, s2 = 10;

    cin >> a >> b >> c;
    CClock c1(a, b, c);

    cin >> a >> b >> c;
    CClock c2(a, b, c);
    CClock c3 = add(c1, c2, s1);
    cout << c3 << endl;

    cin >> a >> b >> c;
    CRmb r1(a, b, c);

    cin >> a >> b >> c;
    CRmb r2(a, b, c);
    CRmb r3 = add(r1, r2, s2);
    cout << r3 << endl;

    return 0;
}
/*
题目描述
时钟类CClock有时、分、秒；人民币类CRmb有元、角、分三个数据成员。试为这种类型的类对象定义一个两两相加的函数模板add，包括三个参数：2个对象和一个int表示进制。(要求不能用函数重载的方法）

主函数如下所示：

...

CClock c1(...), c2(...), c;

c = add(c1, c2, 60);

cout << c << endl;

CRmb r1(...), r2(...), r;

r = add(r1, r2, 10);

cout << r << endl;

输入
第一个时钟对象的时分秒

第二个时钟对象的时分秒

第一个人民币对象的元角分

第二个人民币对象的元角分

输出
两个时钟对象相加的结果

两个人民币对象相加的结果

样例输入
15 34 25
7 25 36
5 6 7
3 4 5

样例输出
23 0 1
9 1 2
*/