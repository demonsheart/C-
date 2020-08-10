#include <iostream>
using namespace std;
class complex
{
private:
    double real, imag;

public:
    complex();
    complex(double r, double i);
    complex(complex &c);
    friend complex addCom(complex c1, complex c2);
    friend complex minusCom(complex c1, complex c2);
    friend void outCom(complex c);
};

complex::complex()
{
    real = 0;
    imag = 0;
}
complex::complex(complex &c)
{
    real = c.real;
    imag = c.imag;
}
complex::complex(double r, double i)
{
    real = r;
    imag = i;
}
complex addCom(complex c1, complex c2)
{
    int x, y;
    x = c1.real + c2.real;
    y = c1.imag + c2.imag;
    complex q(x, y);
    return q;
}
complex minusCom(complex c1, complex c2)
{
    int x, y;
    x = c1.real - c2.real;
    y = c1.imag - c2.imag;
    complex q(x, y);
    return q;
}
void outCom(complex c)
{
    cout << "(" << c.real << "," << c.imag << ")" << endl;
}
int main()
{
    int n;
    double r, i;
    char c;

    cin >> r >> i;
    complex s1(r, i);
    cin >> n;
    while (n--)
    {
        cin >> c >> r >> i;
        if (c == '+')
        {
            complex s2(r, i);
            s1 = addCom(s1, s2);
            outCom(s1);
        }
        else if (c == '-')
        {
            complex s2(r, i);
            s1 = minusCom(s1, s2);
            outCom(s1);
        }
        else
        {
            cout << "error!" << endl;
        }
    }
    return 0;
}
/*
题目描述
复数类的声明如下：



要求如下：

1.     实现复数类和友元函数addCom和outCom。


2.   参考addCom函数为复数类增加一个友元函数minusCom，用于实现两个复数的减法

3.     在main函数中，通过友元函数，实现复数的加减法和复数的输出。


输入
第1行：第1个复数的实部和虚部

第2行：需进行运算的次数，注意：是连续运算。具体结果可参考样例

  第3行开始，每行输入运算类型，以及参与运算的复数的实部与虚部。“+”表示复数相加，“-”表示复数相减。

输出
 每行输出复数运算后的结果，复数输出格式为“(实部,虚部)”。

样例输入
10 10
3
+ 20 10
- 15 5
+ 5 25
样例输出
(30,20)
(15,15)
(20,40)
*/