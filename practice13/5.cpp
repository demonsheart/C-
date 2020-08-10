#include <iostream>
#include <string>
using namespace std;
class Group
{
public:
    virtual int add(int x, int y) = 0; //输出加法的运算结果
    virtual int sub(int x, int y) = 0; //输出减法的运算结果
};
class GroupA : public Group
{
public:
    int add(int x, int y) { return x + y; }
    int sub(int x, int y) { return x - y; }
};

class GroupB : public GroupA
{
public:
    int sub(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 - y % 10 + 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

class GroupC : public GroupB
{
public:
    int add(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 + y % 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

int main()
{
    int t, n, a, b;
    char c;
    Group *p;

    cin >> t;
    while (t--)
    {
        cin >> n >> a >> c >> b;
        if (n == 1)
        {
            p = new GroupA();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
        else if (n == 2)
        {
            p = new GroupB();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
        else if (n == 3)
        {
            p = new GroupC();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
    }
    return 0;
}
/*
题目描述
某小学二年级的数学老师在教学生整数加减法运算时发现：班上的同学可以分成三类，第一类可以正确地完成加减法运算(GroupA)；第二类可以正确地完成加法运算，但对于减法运算来说，总是忘记借位的处理(GroupB)；第三类总是忘记加法的进位，也总是忘记减法的借位(GroupC)。（提示：小学二年级还没学负数。）

现在请模拟当老师在课堂提问某位同学时，同学会给出的回答。

实现时请基于下面的基类框架：

class Group

{

public:

virtual int add(int x, int y)=0;//输出加法的运算结果

virtual int sub(int x, int y)=0;//输出减法的运算结果

}

构建出GroupA, GroupB和GroupC三个派出类:

并编写主函数，要求主函数中有一个基类Group指针，通过该指针统一地进行add和sub运算。

输入
第一行表示测试次数。从第二行开始，每个测试用例占一行，每行数据意义如下：学生类别（1为第一类学生，2为第二类学生，3为第三类学生）、第一个数、第二个数。

输出
运算后的结果

样例输入
3
1 79+81
2 81-79
3 183+69
样例输出
160
12
142
*/