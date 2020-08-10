#include <iostream>
//#include<stdlib.h>
using namespace std;
void does(int *p, int *q, const int n1, const int n2);
int main()
{
    int t, p[2][3], q[3][2];
    const int n1 = 3;
    const int n2 = 2;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> p[i][j];
        does(&p[0][0], &q[0][0], n1, n2);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 2; ++j)
                cout << q[i][j] << " ";
            cout << endl;
        }
    }
    //    system("pause");
}
void does(int *p, int *q, const int n1, const int n2)
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            *(q + (2 - j) * n2 + i) = *(p + i * n1 + j);
        }
    }
}
/*
题目描述：
输入一个2*3的矩阵，将这个矩阵向左旋转90度后输出

比如现在有2*3矩阵 ：

1 2 3

4 5 6 

向左旋转90度后的矩阵变为：

3 6

2 5

1 4

要求：除了矩阵创建和数据输入可以使用数组和数组下标的方法，其他过程对矩阵的任何访问都必须使用指针

提示：m行n列的二维矩阵，第i行第j列的元素与首元素的距离为i*n+j，序号从0开始计算


输入：
第一行输入t表示有t个测试实例

连续两行输入一个2*3的矩阵的数据

依次输入t个实例


输出：
依次输出左转后的矩阵结果

在输出的每行中，每个数据之间都用空格隔开，最后一个数据后面也带有空格


样例输入：
2
1 2 3
4 5 6
4 5 6
7 8 9


样例输出：
3 6 
2 5 
1 4 
6 9 
5 8 
4 7 


*/