#include <iostream>
#include <vector>
using namespace std;
class CQuad
{
private:
    int n;

public:
    CQuad(int a) : n(a) {}
    CQuad operator+(CQuad &c)
    {
        int tmp = n + c.n, sum = 0, a = 1;
        vector<int> v;
        while (tmp)
        {
            v.push_back(tmp % 10);
            tmp /= 10;
        }
        v.push_back(0); //补一位进位
        for (int i = 0; i < v.size() - 1; ++i)
        {
            if (v[i] >= 4)
            {
                v[i + 1] += 1;
                v[i] %= 4;
            }
        }
        for (int i = 0; i < v.size(); ++i)
        {
            sum = sum + a * v[i];
            a *= 10;
        }
        CQuad re(sum);
        return re;
    }
    void print() { cout << n << endl; }
};

int main()
{
    int t, tmp;
    CQuad sum(0);
    vector<CQuad> v;

    cin >> t;
    while (t--)
    {
        cin >> tmp;
        CQuad q(tmp);
        v.push_back(q);
    }
    for (int i = 0; i < v.size(); ++i)
        sum = sum + v[i];
    sum.print();
    return 0;
}
/*
题目描述
定义一个四进制的类，重定义“+”号实现四进制数的累加。

输入
第一行输入所需要的四进制数的个数
第二行开始，依次输入四进制数
输出
所有输入四进制数累加的和

样例输入
3
13
2
21
样例输出
102
*/