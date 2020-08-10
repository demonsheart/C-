#include <iostream>
#include <cmath>
using namespace std;
class CSieve
{
private:
    char *p_sieve;
    unsigned long num;

public:
    CSieve(unsigned long n)
    {
        unsigned long q = sqrt(n);
        int i, j;
        num = n;
        p_sieve = new char[n + 1];
        for (i = 0; i < n + 1; ++i)
            *(p_sieve + i) = '1';
        for (i = 2; i <= q; ++i)
            if (p_sieve[i] == '1')
                for (j = 2; i * j < n + 1; ++j)
                    p_sieve[i * j] = '0';
    }
    void printPrime()
    {
        for (int i = 2; i < num; ++i)
        {
            if (*(p_sieve + i) == '1')
                cout << i << " ";
        }
    }
    ~CSieve() { delete p_sieve; };
};
int main()
{
    int t;
    unsigned long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        CSieve s(n);
        s.printPrime();
        cout << endl;
    }
    return 0;
}
/*
题目描述
埃拉托斯特尼筛法简称埃氏筛或爱氏筛，是一种由希腊数学家埃拉托斯特尼所提出的一种简单检定素数的算法。要得到自然数n以内的全部素数，必须把不大于根号n的所有素数的倍数剔除，剩下的就是素数。
给出要筛数值的范围n，找出以内的素数。先用2去筛，即把2留下，把2的倍数剔除掉；再用下一个质数，也就是3筛，把3留下，把3的倍数剔除掉；接下去用下一个质数5筛，把5留下，把5的倍数剔除掉；不断重复下去......。
采用埃拉托斯特尼筛法求素数的算法可用以下CSieve类来实现:
class CSieve
{
private:
        char *p_sieve;
        unsigned long num;                //num是最大范围
public:
        CSieve(unsigned long n);
        void printPrime();
        ~CSieve();
};

其中p_sieve为数组指针, p_sieve[i]=1表示i是素数, p_sieve[i]=0表示i不是素数。编写程序采用上述类来打印某个范围内的所有素数。

输入
测试数据的组数

n1

n2

......

输出
2到n1的所有素数

2到n2的所有素数

......

样例输入
2
10
20
样例输出
2 3 5 7
2 3 5 7 11 13 17 19
*/