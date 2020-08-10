#include <iostream>
using namespace std;
void does(int n, int **p);
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int **a = new int *[n];
        for (int i = 0; i < n; ++i)
            a[i] = new int[n];
        does(n, a);
        for (int i = 0, j = 0; i < n; ++i)
        {
            for (j = 0; j < n - 1; ++j)
                cout << a[i][j] << " ";
            cout << a[i][j] << endl;
        }
        cout << endl;
        for (int i = 0; i < n; ++i)
        {
            delete[] a[i];
        }

        delete[] a;
    }
}
void does(int n, int **p)
{
    int k = 1, k1 = n - 1, k2 = n - 1, i = 0, j = 0, k0 = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            p[i][j] = 0;
    if (n == 1)
        p[i][j] = 1;
    else
    {
        while (p[i][j] == 0)
        {
            i = k0;

            while (j <= k1) //向右前进
            {
                p[i][j] = k;
                k++;
                j++;
            }
            j--;
            i++;
            if (p[i][j] != 0)
                break;
            while (i <= k2) //向下前进
            {
                p[i][j] = k;
                k++;
                i++;
            }
            i--;
            j--;
            k1--;
            if (p[i][j] != 0)
                break;
            while (j >= k0) //向左前进
            {
                p[i][j] = k;
                k++;
                j--;
            }
            j++;
            i--;
            k2--;
            k0++;
            if (p[i][j] != 0)
                break;
            while (i >= k0) //向上前进
            {
                p[i][j] = k;
                k++;
                i--;
            }
            i++;
            j++;
            if (p[i][j] != 0)
                break;
        }
    }
}
/*
题目描述：
蛇形矩阵，是由1开始的自然数一次排列成的N*N的正方形矩阵，数字依次由外而内的递增。如 N=3时蛇形矩阵为：

1 2 3

8 9 4

7 6 5

N=6时蛇形矩阵为：

1     2   3   4   5   6

20 21 22 23 24   7

19 32 33 34 25   8

18 31 36 35 26   9

17 30 29 28 27 10

16 15 14 13 12 11

输入蛇形矩阵宽度，动态分配二维数组，设置蛇形矩阵并输出结果。


输入：
测试次数t

每组测试数据一行：数组大小N(>0)


输出：
对每组测试数据，输出计算得到的蛇形矩阵。每行元素间以空格分隔，最后一个元素后无空格。

每组测试数据之间以空行分隔。


样例输入：
3
3
6
2


样例输出：
1 2 3
8 9 4
7 6 5

1 2 3 4 5 6
20 21 22 23 24 7
19 32 33 34 25 8
18 31 36 35 26 9
17 30 29 28 27 10
16 15 14 13 12 11

1 2
4 3


*/