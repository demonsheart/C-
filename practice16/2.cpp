#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
bool cmp(const pair<T, int> &p1, const pair<T, int> &p2)
{
    return p1.second < p2.second;
}
template <class T>
struct result
{
    T data;
    int num;
};

template <class T>
result<T> findmax(vector<T> v)
{
    map<T, int> m;
    for (int i = 0; i < (int)v.size(); ++i)
        m[v[i]]++;
    auto it = max_element(m.begin(), m.end(), cmp<T>);
    result<T> r;
    r.data = it->first;
    r.num = it->second;
    return r;
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
            result<int> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<double> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<char> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<string> r = findmax(v);
            cout << r.data << " " << r.num << endl;
        }
    }
    return 0;
}
/*
题目描述
某小镇要票选镇长，得票最高者当选。但由于投票机制不健全，导致每届投票时，候选人在投票系统的识别码类型不一致。请编写函数模板，能针对多种类型的数据，查找出得票最高的元素。其中，每届投票的选票有n张，识别码类型为T

注意：必须使用模板函数

输入
第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示识别码类型，I表示整数类型，C表示字符型，S表示字符串型；然后输入n表示数组长度。

第三行输入n个数据

依次输入t个实例

输出
每行输出一个结果，分别输出当选者的识别码和得票数，以空格分开。

样例输入
3
I 10
5 3 5 2 9 7 3 7 2 3
C 8
a b a e b e e q
S 5
sandy david eason cindy cindy
样例输出
3 3
e 3
cindy 2
*/