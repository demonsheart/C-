#include <iostream>
using namespace std;
class CChickProblem
{
private:
    int money, num, x, y, z, result;
    int *px, *py, *pz;

public:
    CChickProblem(int a, int b);
    ~CChickProblem()
    {
        delete[] px;
        delete[] py;
        delete[] pz;
    }
    void findSolution();
    void printSolution();
};

CChickProblem::CChickProblem(int a, int b)
{
    num = a;
    money = b;
    px = new int[num];
    py = new int[num];
    pz = new int[num];
    for (int i = 0; i < num; ++i)
        *(px + i) = *(py + i) = *(pz + i) = 0;
}
void CChickProblem::findSolution()
{
    int x, y, z, i = 0;
    for (x = 1; x <= money / 5; x++)
    {
        for (y = 0; y <= money / 3; y++)
        {
            z = num - x - y;
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == money)
            {
                *(px + i) = x;
                *(py + i) = y;
                *(pz + i) = z;
                i++;
            }
        }
    }
    result = i;
}
void CChickProblem::printSolution()
{
    cout << result << endl;
    for (int i = 0; *(pz + i) != 0; i++)
    {
        cout << *(px + i) << " " << *(py + i) << " " << *(pz + i) << endl;
    }
}
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        CChickProblem s(a, b);
        s.findSolution();
        s.printSolution();
    }
    return 0;
}
/*
题目描述
百鸡百钱问题描述为：用100元钱买100只鸡，已知每只公鸡5元，每只母鸡3元，3只小鸡1元，问能买多少只公鸡、母鸡和小鸡？试将该类问题用一个类来表示，百鸡百钱问题只是这个类如CChickProblem的一个实例，假设各种鸡的价格不变,类中数据成员有总钱数、要买的总的鸡数、能买到的母鸡、小鸡和公鸡的数量。成员函数有构造和析构函数，求问题解的函数findSolution，打印问题解的函数printSolution。(要求用动态数组保存问题的所有解)

编写程序求解该类问题。

输入
测试数据的组数 t

第一组 鸡数 钱数

第二组 鸡数 钱数

.......

输出
第一组解个数

第一组第一个解公鸡数 母鸡数 小鸡数

第一组第二个解公鸡数 母鸡数 小鸡数

.........


第二组解个数

第二组第一个解公鸡数 母鸡数 小鸡数

第二组第二个解公鸡数 母鸡数 小鸡数

.........

样例输入
2
100 100
200 200
样例输出
3
4 18 78
8 11 81
12 4 84
7
4 43 153
8 36 156
12 29 159
16 22 162
20 15 165
24 8 168
28 1 171
*/