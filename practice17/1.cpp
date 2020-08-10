#include <iostream>
#include <vector>
using namespace std;
template <class T>
vector<T> add(vector<T> &t1, vector<T> &t2)
{
    vector<T> re(t2);
    for (int i = 0; i < (int)t1.size(); ++i)
        re.push_back(t1[i]);
    return re;
}
template <class T>
void printv(vector<T> &v)
{
    for (auto x : v)
        cout << x;
    cout << endl;
}
int main()
{
    int t, n;
    char typ;

    cin >> t;
    while (t--)
    {
        cin >> typ >> n;
        if (typ == 'I')
        {
            int tmp;
            vector<int> v1;
            vector<int> v2;
            vector<int> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
        else if (typ == 'D')
        {
            double tmp;
            vector<double> v1;
            vector<double> v2;
            vector<double> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
        else if (typ == 'C')
        {
            char tmp;
            vector<char> v1;
            vector<char> v2;
            vector<char> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
    }
    return 0;
}
/*
题目描述
江湖中有一个传言，只要倚天剑和屠龙刀中暗藏的秘密拼到一起，就能得到天下无敌的内功秘笈。设计一个函数模板，完成拼凑的功能（将倚天剑的秘密连接到屠龙刀的后面），并将秘笈输出. 其中每个秘密由n个元素组成，类型为T。

输入
第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数据类型，I表示整数类型，D表示双精度数类型，C表示字符型；然后输入n表示数据个数。

第三行输入倚天剑的n个数据

第四行输入屠龙刀的n个数据

依次输入t个实例

输出
每行输出一个结果

样例输入
2
I 5
5 3 51 27 9
27 0 0 5 1
C 5
kitty
hello
样例输出
2700515351279
hellokitty
*/