#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string sub(string a, string b);
string add(string s1, string s2);
string mul(string s1, string s2);
class CBigInt
{
private:
    string num;
    int flag;

public:
    CBigInt() {}
    CBigInt(string s) : num(s)
    {
        if (num[0] == '-')
        {
            flag = 1;
            num.erase(num.begin());
        }
        else
            flag = 0;
    }
    friend istream &operator>>(istream &in, CBigInt &b);
    friend ostream &operator<<(ostream &out, const CBigInt &b);
    friend CBigInt operator+(CBigInt &r1, CBigInt &r2);
    friend CBigInt operator-(CBigInt &r1, CBigInt &r2);
    friend CBigInt operator*(CBigInt &r1, CBigInt &r2);
};
istream &operator>>(istream &in, CBigInt &b)
{
    string tmp;
    in >> tmp;
    if (tmp[0] == '-')
    {
        b.flag = 1;
        tmp.erase(tmp.begin());
        b.num = tmp;
    }
    else
    {
        b.flag = 0;
        b.num = tmp;
    }
    return in;
}
ostream &operator<<(ostream &out, const CBigInt &b)
{
    string s = b.num;
    while (s.front() == '0' && s.size() > 1)
        s.erase(s.begin());
    if (b.flag == 0)
        out << s;
    else if (b.flag == 1)
        out << "(-" << s << ")";
    return out;
}
CBigInt operator+(CBigInt &r1, CBigInt &r2)
{
    string tem;
    if (r1.flag ^ r2.flag) //异号
    {
        if (r1.flag) //r1为负
            tem = sub(r2.num, r1.num);
        else
            tem = sub(r1.num, r2.num);
    }
    else //同号
    {
        tem = add(r1.num, r2.num);
        if (r1.flag == 1)
            tem = '-' + tem;
    }
    return CBigInt(tem);
}
CBigInt operator-(CBigInt &r1, CBigInt &r2)
{
    string tem;
    if (r1.flag ^ r2.flag) //异号
    {
        if (r1.flag) //r1为负
        {
            tem = add(r2.num, r1.num);
            tem = '-' + tem;
        }
        else
            tem = add(r1.num, r2.num);
    }
    else //同号
    {
        if (r1.flag == 1)
        {
            tem = sub(r1.num, r2.num);
            if (tem.front() == '-')
                tem.erase(tem.begin());
        }
        else
            tem = sub(r1.num, r2.num);
    }
    return CBigInt(tem);
}
CBigInt operator*(CBigInt &r1, CBigInt &r2)
{
    string tem;
    tem = mul(r1.num, r2.num);
    if (r1.flag ^ r2.flag) //异号
        tem = '-' + tem;
    return CBigInt(tem);
}
string add(string s1, string s2) //正数加法
{
    string result;
    int a;
    char c;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    result.push_back('0'); //预处理
    while (!s1.empty() && !s2.empty())
    {
        a = (s1.front() - '0') + (s2.front() - '0') + (result.back() - '0');
        if (a < 10)
        {
            result.back() = a + '0';
            result.push_back('0');
        }
        else
        {
            result.back() = a - 10 + '0';
            result.push_back('1');
        }
        s1.erase(s1.begin());
        s2.erase(s2.begin());
    }
    string s3 = (s1.empty()) ? s2 : s1;
    while (!s3.empty())
    {
        a = (s3.front() - '0') + (result.back() - '0');
        if (a < 10)
        {
            result.back() = a + '0';
            result.push_back('0');
        }
        else
        {
            result.back() = a - 10 + '0';
            result.push_back('1');
        }
        s3.erase(s3.begin());
    }
    reverse(result.begin(), result.end());
    while (result.front() == '0' && result.size() > 1)
        result.erase(result.begin());
    return result;
}
string sub(string a, string b) //实现a - b
{
    int i, j, k, s, flag = 1;
    int tmpa[10000], tmpb[10000], c[10000];
    string result;
    if (a.size() < b.size() || (a.size() == b.size() && a.compare(b) < 0)) //判断大小
    {
        string tmp = a;
        a = b;
        b = tmp;
        flag = 0;
    }
    while (a.length() > b.length())
        b = '0' + b;
    int len = a.length();
    for (i = 0; i < len; i++)
    {
        tmpa[i] = a[i] - '0';
        tmpb[i] = b[i] - '0';
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (tmpa[i] >= tmpb[i])
        {
            c[i] = tmpa[i] - tmpb[i];
        }
        else
        {
            c[i] = 10 + tmpa[i] - tmpb[i];
            tmpa[i - 1]--;
        }
    }
    for (i = 0; i < len - 1; i++)
    {
        if (c[i] != 0)
            break;
    }
    for (j = i; j < len; j++)
    {
        result += (char)(c[j] + '0');
    }
    if (!flag)
        result = '-' + result;
    return result;
}
string mul(string s1, string s2) //正数乘法
{
    string result = "0";
    int i;
    while (!s2.empty())
    {
        i = s2.back() - '0';
        while (i--)
        {
            result = add(result, s1);
        }
        s1.push_back('0');
        s2.pop_back();
    }
    return result;
}
int main()
{
    int t;
    char op;
    CBigInt bigNum1, bigNum2;

    cin >> t;
    while (t--)
    {
        cin >> bigNum1 >> op >> bigNum2;
        cout << bigNum1 << " " << op << " " << bigNum2 << " = ";
        if (op == '+')
            cout << bigNum1 + bigNum2 << endl;
        else if (op == '-')
            cout << bigNum1 - bigNum2 << endl;
        else if (op == '*')
            cout << bigNum1 * bigNum2 << endl;
    }
    return 0;
}
/*
题目描述
定义大整数类CBigInteger（假设最长支持1000位），数据成员为一个字符指针。成员函数或友元函数包括：

1）带参构造函数，为字符指针动态分配1001个字符空间。根据参数初始化大整数。

2)  无参构造函数，为字符指针动态分配1001个字符空间。

3）重载运算符+，实现两个大整数的加法。

4）重载运算符-，实现两个大整数的减法。

5）重载运算符*，实现两个大整数的乘法。

6）重载输入，输入大整数。

7）重载输出，输出大整数。

8）析构函数，释放分配的空间。该函数不可屏蔽。

主函数输入大整数，完成大整数的加、减、乘。主函数代码如下，不可修改。



输入
测试次数

每组测试数据一行： 大整数1 运算符 大整数2

输出
 对每组测试数据输出表达式和计算结果，具体格式见样例。

样例输入
3
100 * -100
-123456789 + 123456
0001 - -123
样例输出
100 * (-100) = (-10000)
(-123456789) + 123456 = (-123333333)
1 - (-123) = 124
*/