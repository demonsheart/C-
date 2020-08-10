#include <iostream>
using namespace std;
struct fen
{
    int z1, m1, z2, m2;
    char c;
};

int getGCD(int a, int b);
void addFS(fen s, int &a, int &b);
void subFS(fen s, int &a, int &b);
void mulFS(fen s, int &a, int &b);
void divFS(fen s, int &a, int &b);
void printFS(int a, int b);
int main()
{
    int t, a, b;
    cin >> t;
    fen f;
    while (t--)
    {
        cin >> f.z1 >> f.c >> f.m1;
        cin >> f.z2 >> f.c >> f.m2;
        addFS(f, a, b);
        printFS(a, b);
        subFS(f, a, b);
        printFS(a, b);
        mulFS(f, a, b);
        printFS(a, b);
        divFS(f, a, b);
        printFS(a, b);
        cout << endl;
    }
}
int getGCD(int a, int b)
{
    int r = 1;
    if (a < b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    while (1)
    {
        r = a % b;
        if (r == 0)
            break;
        a = b;
        b = r;
    }
    return b;
}
void addFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2 + s.z2 * s.m1;
    b = s.m1 * s.m2;
}
void subFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2 - s.z2 * s.m1;
    b = s.m1 * s.m2;
}
void mulFS(fen s, int &a, int &b)
{
    a = s.z1 * s.z2;
    b = s.m1 * s.m2;
}
void divFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2;
    b = s.m1 * s.z2;
}
void printFS(int a, int b)
{
    int q = getGCD(a, b);
    a = a / q;
    b = b / q;
    if (a * b < 0 && a > 0)
    {
        a = -a;
        b = -b;
    }
    cout << a << "/" << b << endl;
}
/*
题目描述
分数的分子和分母可用一个结构类型来表示。

编写实现两个分数加(addFS)，减(subFS)，乘(mulFS)，除(divFS)的函数(要求计算结果分数是简化的)，以及打印一个分数(printFS)，计算两个整数最大公约数的函数(getGCD)。

注意：不能定义全局变量

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
提示
求两数a、b的最大公约数可采用辗转相除法，又称欧几里得算法，其步骤为:
1. 交换a, b使a > b;
2. 用a除b得到余数r,若r=0,则b为最大公约数,退出;
3. 若r不为0,则用b代替a, r代替b,此时a,b都比上一次的小,问题规模缩小了;
4. 继续第2步。
*/