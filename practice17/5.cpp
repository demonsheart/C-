#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
class BoundArray
{
private:
    vector<T> v;

public:
    BoundArray() {}
    void append(T a) { v.push_back(a); }
    void mysort()
    {
        int len = v.size();
        for (int i = 0; i < len; ++i)
        {
            for (int j = 0; j < len - 1; ++j)
            {
                if (v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }
    }
    void print()
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    int search(T a)
    {
        auto it = find(v.begin(), v.end(), a);
        int n = -1;
        if (it != v.end())
        {
            n = it - v.begin();
            return n;
        }
        else
            return n;
    }
};
int main()
{
    int t, n;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == 'I')
        {
            BoundArray<int> b;
            int tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'D')
        {
            BoundArray<double> b;
            double tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'C')
        {
            BoundArray<char> b;
            char tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
    }
    return 0;
}
/*
题目描述
编写有界数组模板BoundArray（即检查对数组元素下标引用并在下标越界时终止程序的执行），能够存储各种类型的数据。要求实现对数组进行排序的方法sort，及对数组进行查找的方法search。

输入
第一行先输入t，表示有t个测试用例

从第二行开始输入每个测试用例的数据。

首先输入数据类型，I表示int，D表示double，C表示char，接着输入数组的元素个数

然后输入每个元素

最后输入要查找的元素

输出
首先输出从小到大排序的元素

然后输出查找元素的结果，找到则输出下标，没找到则输出-1

样例输入
2
I 2
1 2
2
D 3
3.5 6.2 2.9
2.1
样例输出
1 2 
1
2.9 3.5 6.2 
-1
*/