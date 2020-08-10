#include <string>
#include <iostream>
#include <vector>
using namespace std;
template <class T>
int find(vector<T> v, T des)
{
    int len = v.size(), i;
    for (i = 1; i <= len; ++i)
        if (v[i - 1] == des)
            break;
    return (i > len) ? 0 : i;
}
int main()
{
    int t, n;
    string cmd;
    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == "I")
        {
            int tmp;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "D")
        {
            double tmp;
            vector<double> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "C")
        {
            char tmp;
            vector<char> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "S")
        {
            string tmp;
            vector<string> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
    }
    return 0;
}
/*
题目描述
编写一个在数组中进行查找的函数模板，其中数组为具有n个元素，类型为T，要查找的元素为key。

注意：必须使用模板函数

输入
第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数组类型，I表示整数类型，D表示双精度数类型，C表示字符型，S表示字符串型；然后输入n表示数组长度。

第三行输入n个数据

第四行输入key

依次输入t个实例

输出
每行输出一个结果，找到输出key是数组中的第几个元素（从1开始），找不到输出0

样例输入
4
I 5
5 3 51 27 9
27
D 3
-11.3 25.42 13.2
2.7
C 6
a b g e u q
a
S 4
sandy david eason cindy
cindy
样例输出
4
0
1
4
*/