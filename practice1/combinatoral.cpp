#include <iostream>
using namespace std;
int cb(int m, int n);
int jie(int n);
int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        if (m < n)
            cout << "error!" << endl;
        else
        {
            int c;
            c = cb(m, n);
            cout << c << endl;
        }
    }
}
int cb(int m, int n)
{
    int c;
    c = jie(m) / (jie(n) * jie(m - n));
    return c;
}
int jie(int n)
{
    int c = 1;
    for (int i = 2; i <= n; ++i)
    {
        c *= i;
    }
    return c;
}
/*
题目描述：
编写一个函数，m和n是参数，按以下公式求组合数的值，假设m，n都是正整数，且m>n。
主函数负责输入m和n的值，并调用函数求出组合数的值，并输出


输入：
测试数据的组数 t
第一组m，n
第二组m，n
..........


输出：
第一组组合数的值
第二组组合数的值
..........


样例输入：
3
8 5
6 3
10 8


样例输出：
56
20
45

*/