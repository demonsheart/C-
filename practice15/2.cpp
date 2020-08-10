#include <iostream>
#include <string>
using namespace std;
class CMoney
{
private:
    int y, j, f;

public:
    CMoney() {}
    CMoney(int a, int b, int c) : y(a), j(b), f(c) {}
    friend CMoney operator+(CMoney &r1, CMoney &r2);
    friend CMoney operator-(CMoney &r1, CMoney &r2);
    friend ostream &operator<<(ostream &out, const CMoney &s);
    friend istream &operator>>(istream &in, CMoney &c);
};
istream &operator>>(istream &in, CMoney &c)
{
    in >> c.y >> c.j >> c.f;
    return in;
}
CMoney operator+(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f + r2.y * 100 + r2.j * 10 + r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
CMoney operator-(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f - r2.y * 100 - r2.j * 10 - r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
ostream &operator<<(ostream &out, const CMoney &s)
{
    out << s.y << "??" << s.j << "??" << s.f << "·?" << endl;
    return out;
}

int main()
{
    int y, j, f, t;
    string order;
    cin >> t;
    while (t--)
    {
        CMoney m, r2;
        cin >> m;
        order = "NULL";
        cin >> order;
        while (order != "stop")
        {
            cin >> r2;
            if (order == "add")
            {
                m = m + r2;
            }
            else if (order == "minus")
            {
                m = m - r2;
            }
            cin >> order;
        }
        cout << m;
    }
    return 0;
}
/*
题目描述
定义CMoney类，包含元、角、分三个数据成员，友元函数重载‘+’、'-'，实现货币的加减运算（假设a-b中a的金额始终大于等于b的金额），重载输入、输出，实现货币的输入，输出。

读入最初的货币值，对其不断进行加、减操作，输出结果。

可根据需要，为CMoney类添加构造函数或其它成员函数。

输入
测试次数

每组测试数据格式如下：

第一行，初始货币：元 角 分

第二行开始，每行一个操作：add 元 角 分（加）、minus 元 角 分（减）、stop（结束）

输出
 对每组测试数据，输出操作终止后的货币金额，具体输出格式见样例。

样例输入
2
0 0 0
add 48 9 0
minus 0 5 3
add 18 6 8
add 12 1 2
stop
10 2 5
add 5 8 0
add 32 1 2
minus 10 5 9
minus 37 5 8
stop


样例输出
79元1角7分
0元0角0分
*/