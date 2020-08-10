#include <iostream>
using namespace std;
class Counter
{
protected:
    int value;

public:
    Counter(){};
    Counter(int v) { value = v; }
    void increment() { value++; }
};

class Rcounter : public Counter
{
private:
    int min_value, max_value;

public:
    Rcounter() {}
    Rcounter(int a, int b, int v) : min_value(a), max_value(b), Counter(v) {}
    bool increment()
    {
        if (value == max_value)
        {
            value = min_value;
            return true; //需要进位
        }
        else
        {
            value++;
            return false;
        }
    }
    friend class CClock;
};
class CClock
{
private:
    Rcounter hour, minute, second;

public:
    CClock(int a, int b, int c) : hour(0, 23, a), minute(0, 59, b), second(0, 59, c) {}
    void print() { cout << hour.value << ":" << minute.value << ":" << second.value << endl; }
    void adds();
};
void CClock::adds()
{
    if (second.increment())
        if (minute.increment())
            hour.increment();
}
int main()
{
    int n, h, m, s, num;

    cin >> n;
    while (n--)
    {
        cin >> h >> m >> s >> num;
        CClock st(h, m, s);
        while (num--)
            st.adds();
        st.print();
    }
    return 0;
}
/*
题目描述
定义计数器类，包含保护数据成员value,公有函数increment计数加1。

定义循环计算器继承计数器类，增加私有数据成员：最小值min_value，max_value,

重写公有函数increment，使得value在min_value~max_value区间内循环+1。

定义时钟类，数据成员是私有循环计数器对象小时hour、分钟minute、秒second，公有函数time(int s)计算当前时间经过s秒之后的时间，即hour,minute,second的新value值。

定义时钟类对象，输入当前时间和经过的秒数,调用time函数计算新时间。

根据题目要求，增加必要的构造函数、析构函数和其他所需函数。

因为clock是系统内置函数，为了避免重名，请不要使用clock作为类名或者函数名

输入
第一行测试次数n

2行一组，第一行为当前时间（小时 分钟 秒），第二行为经过的秒数。

输出
输出n行

每行对应每组当前时间和经过秒数后计算得到的新时间（小时：分钟：秒）。

样例输入
2
8 19 20
20
23 30 0
1801
样例输出
8:19:40
0:0:1
*/