#include <iostream>
#include <vector>
using namespace std;
class CSet
{
private:
    vector<int> v;

public:
    CSet(vector<int> vv) : v(vv) {}
    void print()
    {
        for (int i = 0; i < v.size() - 1; ++i)
            cout << v[i] << " ";
        cout << v.back() << endl;
    }
    friend CSet operator+(CSet r1, CSet r2);
    friend CSet operator-(CSet r1, CSet r2);
    friend CSet operator*(CSet r1, CSet r2);
};
CSet operator+(CSet r1, CSet r2)
{
    vector<int> tmp;
    for (auto i = r2.v.begin(); i != r2.v.end(); ++i)
    {
        int flag = 1;
        for (auto j = r1.v.begin(); j != r1.v.end(); ++j)
        {
            if (*i == *j)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            tmp.push_back(*i);
    }
    tmp.insert(tmp.begin(), r1.v.begin(), r1.v.end());
    CSet s(tmp);
    return s;
}
CSet operator-(CSet r1, CSet r2)
{
    CSet tmp = r1 * r2; //??¤é??
    for (int i = 0; i < tmp.v.size(); ++i)
    {
        for (int j = 0; j < r1.v.size(); ++j)
        {
            if (r1.v[j] == tmp.v[i])
            {
                r1.v.erase(r1.v.begin() + j);
                j--;
            }
        }
    }
    CSet tmp1(r1.v);
    return tmp1;
}
CSet operator*(CSet r1, CSet r2)
{
    vector<int> tmp;
    for (auto i = r1.v.begin(); i != r1.v.end(); ++i)
    {
        int flag = 1;
        for (auto j = r2.v.begin(); j != r2.v.end(); ++j)
        {
            if (*i == *j)
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
            tmp.push_back(*i);
    }
    CSet s(tmp);
    return s;
}
int main()
{
    int t, n, tmp;

    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        CSet A(a);
        CSet B(b);

        CSet c1 = A + B;
        CSet c2 = A * B;
        CSet c3 = (A - B) + (B - A);
        cout << "A:";
        A.print();
        cout << "B:";
        B.print();
        cout << "A+B:";
        c1.print();
        cout << "A*B:";
        c2.print();
        cout << "(A-B)+(B-A):";
        c3.print();
        cout << endl;
    }
    return 0;
}
/*
题目描述
集合是由一个或多个确定的元素所构成的整体。集合的运算有并、交、相对补等。

集合A和集合B的交集：由属于A且属于B的相同元素组成的集合。

集合A和集合B的并集：由所有属于集合A或属于集合B的元素所组成的集合。

集合B关于集合A的相对补集，记做A-B：由属于A而不属于B的元素组成的集合。

假设集合A={10，20，30}，集合B={1，10，50，8}。则A与B的并是{10，20，30,1,50,8}，A与B的交是{10}，B关于A的相对补集是{20,30}。

定义整数集合类CSet，属性包括：集合中的元素个数n，整型指针data存储集合中的元素。

方法有：重载输出，按样例格式输出集合中的元素。

                      重载+运算符，求集合A和集合B的并集，并返回结果集合。

                     重载-运算符，求集合B关于集合A的相对补集，并返回结果集合。

                       重载*运算符，求集合A和集合B的交集，并返回结果集合。

主函数输入集合A、B的数据，计算集合的并、交、相对补。

可根据题目，为CSet类添加需要的成员函数。

                        

        

输入
 测试次数

每组测试数据两行，格式如下：

第一行：集合A的元素个数和元素

第二行：集合B的元素个数和元素

输出
 每组测试数据输出如下：

第一行：集合A

第二行：集合B

第三行：A和B的并

第四行：A和B的交

第五行：B关于A的相对补集 与 A关于B的相对补集的并，即(A-B)+(B-A)

每组测试数据间以空行分隔。

样例输入
2
3 10 20 30
4 10 1 2 3
5 100 2 3 4 -10
6 -34 12 2 4 90 100
样例输出
A:10 20 30
B:10 1 2 3
A+B:10 20 30 1 2 3
A*B:10
(A-B)+(B-A):20 30 1 2 3

A:100 2 3 4 -10
B:-34 12 2 4 90 100
A+B:100 2 3 4 -10 -34 12 90
A*B:100 2 4
(A-B)+(B-A):3 -10 -34 12 90
*/