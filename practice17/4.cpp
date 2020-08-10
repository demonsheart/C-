#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Matrix
{
private:
    vector<vector<T>> Ma;

public:
    Matrix(){};
    void initial(int m, int n)
    {
        for (int i = 0; i < m; ++i)
        {
            vector<T> tmp;
            for (int j = 0; j < n; ++j)
            {
                T a;
                cin >> a;
                tmp.push_back(a);
            }
            Ma.push_back(tmp);
        }
    }
    void trasport()
    {
        vector<vector<T>> v(Ma);
        Ma.clear();
        int m = v.size(), n = v[0].size();
        T a[100][100];
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                a[j][i] = v[i][j];
        for (int i = 0; i < n; ++i)
        {
            vector<T> tmp;
            for (int j = 0; j < m; ++j)
            {
                T e = a[i][j];
                tmp.push_back(e);
            }
            Ma.push_back(tmp);
        }
    }
    void print()
    {
        int m = Ma.size(), n = Ma[0].size(), i, j;
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n - 1; ++j)
            {
                cout << Ma[i][j] << " ";
            }
            cout << Ma[i][j] << endl;
        }
    }
};

int main()
{
    int t, m, n;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 'I')
        {
            cin >> m >> n;
            Matrix<int> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
        else if (cmd == 'D')
        {
            cin >> m >> n;
            Matrix<double> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
        else if (cmd == 'C')
        {
            cin >> m >> n;
            Matrix<char> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
    }
    return 0;
}
/*
题目描述
设计一个矩阵类模板Matrix，支持任意数据类型的数据。

要求至少包含2个成员函数：矩阵转置函数transport、以及打印输出函数print

编写main函数进行测试，调用类的成员函数完成转置和输出。

输入
第一行先输入t，表示有t个测试用例

从第二行开始输入每个测试用例的数据。

首先输入数据类型，I表示int，D表示double，C表示char，接着输入两个参数m和n，分别表示矩阵的行和列

接下来输入矩阵的元素，一共m行，每行n个数据

输出
输出转置后的矩阵

样例输入
2
I 2 3
1 2 3
4 5 6
C 3 3
a b c
d e f
g h i
样例输出
1 4
2 5
3 6
a d g
b e h
c f i
*/