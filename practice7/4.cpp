#include <iostream>
using namespace std;
class CFraction
{
private:
    int fz, fm;

public:
    CFraction(){};
    CFraction(int fz_val, int fm_val)
    {
        fz = fz_val;
        fm = fm_val;
    }
    CFraction add(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm + r.fz * fm;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction sub(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm - r.fz * fm;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction mul(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fz;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction div(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm;
        f.fm = fm * r.fz;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    int getGCD(int a, int b);
    void print();
};
void CFraction::print()
{
    if (fm < 0)
    {
        fm = -fm;
        fz = -fz;
    }
    cout << fz << "/" << fm << endl;
}
int CFraction::getGCD(int a, int b)
{
    int c = a % b;
    while (c)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main()
{
    int t, fz, fm, a, b;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> fz >> c >> fm;
        CFraction s1(fz, fm);
        cin >> fz >> c >> fm;
        CFraction s2(fz, fm);
        CFraction q1 = s1.add(s2);
        CFraction q2 = s1.sub(s2);
        CFraction q3 = s1.mul(s2);
        CFraction q4 = s1.div(s2);
        q1.print();
        q2.print();
        q3.print();
        q4.print();
        cout << endl;
    }
}
/*
题目描述
完成下列分数类的实现:

class CFraction
{
private:
     int fz, fm;
public:
     CFraction(int fz_val, int fm_val) ;
     CFraction add(const CFraction &r);
     CFraction sub(const CFraction &r);
     CFraction mul(const CFraction &r);
     CFraction div(const CFraction &r);
     int getGCD();   // 求对象的分子和分母的最大公约数
     void print();
};

求两数a、b的最大公约数可采用辗转相除法，又称欧几里得算法，其步骤为:

1. 交换a, b使a > b;
2. 用a除b得到余数r,若r=0,则b为最大公约数,退出.
3. 若r不为0,则用b代替a, r代替b,此时a,b都比上一次的小,问题规模缩小了;
4. 继续第2步。

输入
测试数据的组数 t

第一组第一个分数

第一组第二个分数

第二组第一个分数

第二组第二个分数

......

输出
第一组两个分数的和

第一组两个分数的差

第一组两个分数的积

第一组两个分数的商

第二组两个分数的和

第二组两个分数的差

第二组两个分数的积

第二组两个分数的商

......

样例输入
3
1/2
2/3
3/4
5/8
21/23
8/13
样例输出
7/6
-1/6
1/3
3/4

11/8
1/8
15/32
6/5

457/299
89/299
168/299
273/184
*/