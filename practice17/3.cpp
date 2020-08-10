#include <iostream>
#include <vector>
using namespace std;
template <class T>
class mlist
{
private:
    vector<T> v;
    int n;

public:
    mlist(){};
    void setData(T d)
    {
        v.push_back(d);
        n = v.size();
    }
    void _insert(int pos, T d)
    {
        auto it = v.begin();
        it += pos;
        v.insert(it, d);
    }
    void _delete(int pos)
    {
        auto it = v.begin();
        it += pos;
        v.erase(it);
    }
    void _print()
    {
        for (int i = 0; i < (int)v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
    }
};

int main()
{
    int n, tmp1, pos;
    double tmp2;
    mlist<int> v1;
    mlist<double> v2;

    cin >> n;
    while (n--)
    {
        cin >> tmp1;
        v1.setData(tmp1);
    }
    cin >> pos >> tmp1;
    v1._insert(pos, tmp1);
    cin >> pos;
    v1._delete(pos);
    v1._print();

    cin >> n;
    while (n--)
    {
        cin >> tmp2;
        v2.setData(tmp2);
    }
    cin >> pos >> tmp2;
    v2._insert(pos, tmp2);
    cin >> pos;
    v2._delete(pos);
    v2._print();
    return 0;
}
/*
题目描述
定义一个列表类，该列表包含属性：数值列表（用长度为100的数组表示），数据长度（实际的数据个数）；包含的方法：初始化、插入、删除、打印，方法定义为：

1）初始化，接受外来参数，把数据保存在数值列表中，未使用的列表部分全部初始化为-1

2）插入，接受外来参数的插入位置和插入数值，插入位置从0开始计算，注意从插入位置开始，原有数据都要往后移动一位，且数据长度+1

3）删除，接受外来参数的删除位置，删除位置从0开始计算，注意从删除位置后一位开始，原有数据都要往前移动一位，且数据长度-1

4）打印，把包含的数据按位置顺序输出一行，数据之间单个空格隔开

使用类模板的方法，使得这个类支持整数int类型和浮点数double类型

输入
第一行先输入参数n表示有n个数据，接着输入n个整数

第二行输入两个参数，表示插入位置和插入数值，数值为整数

第三行输入删除位置

第四行先输入参数n表示有n个数据，接着输入n个浮点数

第五行输入两个参数，表示插入位置和插入数值，数值为浮点数

第六行输入删除位置

输出
针对头三行输入，分别执行初始化、插入操作和删除操作，调用打印方法输出列表包含的整数数据

针对接着的三行输入，分别执行初始化、插入操作和删除操作，调用打印方法输出列表包含的浮点数数据

样例输入
5 11 22 33 44 55
2 888
4
5 1.1 2.2 3.3 4.4 5.5
2 88.8
3
样例输出
11 22 888 33 55
1.1 2.2 88.8 4.4 5.5
*/