#include <iostream>
using namespace std;
class test
{
private:
    int value;

public:
    test()
    {
        value = 0;
        cout << "Constructed by default, value = " << value << endl;
    }
    test(int a)
    {
        value = a;
        cout << "Constructed using one argument constructor, value = " << value << endl;
    }
    test(test &t)
    {
        this->value = t.value;
        cout << "Constructed using copy constructor, value = " << this->value << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        if (n == 0)
        {
            test s;
        }
        else if (n == 1)
        {
            cin >> a;
            test s1(a);
        }
        else if (n == 2)
        {
            cin >> a;
            test s2(a);
            test s3(s2);
        }
    }
    return 0;
}
/*
题目描述
某个类包含一个整型数据成员.程序运行时若输入0表示用缺省方式定义一个类对象;输入1及一个整数表示用带一个参数的构造函数构造一个类对象;输入2及一个整数表示构造2个类对象，一个用输入的整数构造，另一个用前一个对象构造。试完成该类的定义和实现。
输入
测试数据的组数 t

第一组数

第二组数

......

输出
第一个对象构造输出

第二个对象构造输出

......

样例输入
3
0
1 10
2 20
样例输出
Constructed by default, value = 0
Constructed using one argument constructor, value = 10
Constructed using one argument constructor, value = 20
Constructed using copy constructor, value = 20
*/