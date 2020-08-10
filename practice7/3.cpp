#include <iostream>
using namespace std;
class CLuckNumber
{
private:
    int n;
    int *p;

public:
    CLuckNumber(int n);
    CLuckNumber(CLuckNumber &s);
    ~CLuckNumber();
    void getLuck();
    void print();
};

CLuckNumber::CLuckNumber(int n)
{
    this->n = n;
    p = new int[n];
    for (int i = 0; i < n; i++)
        p[i] = 0;
}
CLuckNumber::CLuckNumber(CLuckNumber &s)
{
    this->n = s.n;
    this->p = new int[n];
    for (int i = 0; i < n; i++)
        this->p[i] = s.p[i];
}
CLuckNumber::~CLuckNumber()
{
    delete[] p;
}
void CLuckNumber::getLuck()
{
    int i = 0, q;
    for (q = 7; q <= n; q++)
    {
        if (q % 3 != 0 && q % 4 != 0 && q % 7 == 0)
        {
            p[i] = q;
            i++;
        }
    }
}
void CLuckNumber::print()
{
    int c;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == 0)
        {
            c = i;
            break;
        }
    }
    for (int i = 0; i < c - 1; i++)
    {
        cout << p[i] << " ";
    }
    cout << p[c - 1] << endl;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        CLuckNumber l(n);
        CLuckNumber s(l);
        s.getLuck();
        s.print();
    }
    return 0;
}
/*
题目描述
定义一个类CLuckNumber，数据成员有整数(int n)，指向整型数的指针(int *p)。成员函数有：

1. 构造函数。

2. 析构函数。

3. 拷贝构造函数。

4. 求不三不四喜七数的函数，即把小于n的所有既不能被3整除也不能被4整除但能被7整除找出来，放到p指向的数组中。

5. 打印所有不三不四喜七数的函数。

输入
第一行输入测试次数

每次测试输入一个表示数值范围的正整数。

输出
每次测试输出一行，包括1-n范围内的所有不三不四喜七数。

样例输入
2
10
100
样例输出
7
7 14 35 49 70 77 91 98
*/