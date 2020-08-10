#include <iostream>
using namespace std;
class lottery
{
private:
    int group1[6];
    int num;
    int **groupn;

public:
    lottery(int *p, int n);
    lottery(lottery &p);
    void print();
    ~lottery();
};

lottery::lottery(int *p, int n)
{
    num = n;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p[i];
    }
    groupn = new int *[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
}
lottery::lottery(lottery &p)
{
    num = p.num;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p.group1[i];
    }
    groupn = new int *[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
    groupn[0][0] = group1[5] + 1;
    for (int i = 1; i < 6; i++)
    {
        groupn[0][i] = group1[i - 1] + 1;
    }

    for (int i = 1; i < num; i++)
    {
        groupn[i][0] = groupn[i - 1][5] + 1;
        for (int j = 1; j < 6; j++)
        {
            groupn[i][j] = groupn[i - 1][j - 1] + 1;
        }
    }
}
void lottery::print()
{
    int i, j;
    for (int i = 0; i < 5; i++)
        cout << group1[i] << " ";
    cout << group1[5] << endl;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << groupn[i][j] << " ";
        }
        cout << groupn[i][5] << endl;
    }
}
lottery::~lottery()
{
    for (int i = 0; i < num; i++)
    {
        delete[] groupn[i];
    }
    delete[] groupn;
}

int main()
{
    int t, p[6], num;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
        {
            cin >> p[i];
        }
        cin >> num;
        lottery l1(p, num);
        lottery l2(l1);
        l2.print();
    }
    return 0;
}
/*
题目描述
假设每组彩票包含6个号码，设计一个彩票类lottery，数据成员包括第一组号码、其他组数、其他组号码，描述如下

1、第一组号码group1，整数数组，长度为6

2、其他组数num，表示以第一组号码为样本，创建num组其他号码

3、其他组号码groupn，整数指针(int **)，，该数据将动态创建二维整数数组，共9行，每行包含6个号码。

彩票类的成员函数包括：构造函数、拷贝构造函数、打印，描述如下：

1、打印函数，输出彩票的所有组的号码

2、构造函数，两个参数，第一个参数为整数数组，对应第一组号码，第二个参数为整数，表示其他组数(不超过9)。注意在构造函数中，其他组号码groupn不动态分配空间，仍然为指针

3、拷贝构造函数，其他组号码groupn动态创建二维数组，根据其他组数创建其他组的号码，创建规则为：

a)第i组的第j个号码等于上一组第j-1个号码加1，首个号码等于上一组最后一个号码加1

例如第一组号码group1的号码是1、3、5、7、9、11，且其他组数为2

则groupn的第0组号码是12、2、4、6、8、10，第1组号码是11、13、3、5、7、9，以此类推

输入
第一行输入t表示有t个样例，每个样例对应一行数据
接着一行输入7个参数，前6个参数表示首张彩票的第一组6个号码，第7个参数表示其他组数，这时使用使用构造函数
然后采用拷贝构造方法生成第二张彩票，其中复制了首张彩票的第一组号码和其他组数，并且生成其他组号码
依此类推
输出
调用Print方法，输出每个样例中第二张彩票的所有组的号码
样例输入
2
1 3 5 7 9 11 2
22 44 66 88 100 122 3
样例输出
1 3 5 7 9 11
12 2 4 6 8 10
11 13 3 5 7 9
22 44 66 88 100 122
123 23 45 67 89 101
102 124 24 46 68 90
91 103 125 25 47 69
*/