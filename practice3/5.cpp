#include <iostream>
using namespace std;
void does(int *x1, int *x2, int m, int n, int **p);
int main()
{
    int t, m, n, min, max;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int **a = new int *[m];
        for (int i = 0; i < m; ++i)
            a[i] = new int[n];
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];
        does(&max, &min, m, n, a);
        cout << min << " " << max << endl;
        for (int i = 0; i < m; ++i)
        {
            delete[] a[i];
        }

        delete[] a;
    }
}
void does(int *x1, int *x2, int m, int n, int **p)
{
    int i, j;
    *x1 = p[0][0];
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (*x1 < p[i][j])
                *x1 = p[i][j];
        }
    }
    *x2 = p[0][0];
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (*x2 > p[i][j])
                *x2 = p[i][j];
        }
    }
}
/*
题目描述：
未知一个整数矩阵的大小，在程序运行时才会输入矩阵的行数m和列数n

要求使用指针，结合new方法，动态创建一个二维数组，并求出该矩阵的最小值和最大值，可以使用数组下标法。

不能先创建一个超大矩阵，然后只使用矩阵的一部分空间来进行数据访问、

创建的矩阵大小必须和输入的行数m和列数n一样


输入：
第一行输入t表示t个测试实例

第二行输入两个数字m和n，表示第一个矩阵的行数和列数

第三行起，连续输入m行，每行n个数字，表示输入第一个矩阵的数值

依次输入t个实例


输出：
每行输出一个实例的最小值和最大值


样例输入：
2
2 3
33 22 11
66 88 55
3 4
19 38 45 14
22 65 87 31
91 35 52 74


样例输出：
11 88
14 91


*/