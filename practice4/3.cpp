#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int square(int a);
float sq(float f);
void up(char *p);
int main()
{
    int t;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> c;
        if (c == 'I')
        {
            int a;
            cin >> a;
            int (*p1)(int);
            p1 = square;
            a = (*p1)(a);
            cout << a << endl;
        }
        else if (c == 'F')
        {
            float f;
            cin >> f;
            float (*p2)(float);
            p2 = sq;
            f = (*p2)(f);
            cout << f << endl;
        }
        else if (c == 'S')
        {
            char p[100];
            cin >> p;
            void (*p3)(char *);
            p3 = up;
            (*p3)(p);
            cout << p << endl;
        }
        else
            cout << "error!" << endl;
    }
    return 0;
}
int square(int a)
{
    a = a * a;
    return a;
}
float sq(float f)
{
    f = sqrt(f);
    return f;
}
void up(char *p)
{
    int n = strlen(p);
    for (int i = 0; i < n; ++i)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
            p[i] = p[i] - 'a' + 'A';
    }
}
/*
题目描述：
定义并实现三个函数：

第一个函数是整数函数，返回类型为整数，参数是一个整数变量，操作是求该变量的平方值

第二个函数是浮点数函数，返回类型为浮点数，参数是一个浮点数变量，操作是求该变量的平方根值。求平方根可以使用函数sqrt（浮点参数），将返回该参数的平方根，在VC中需要头文件cmath。

第三个函数是字符串函数，无返回值，参数是一个字符串指针，操作是把这个字符串内所有小写字母变成大写。

要求：定义三个函数指针分别指向这三个函数，然后根据调用类型使用函数指针来调用这三个函数。不能直接调用这三个函数。

如果类型为I，则通过指针调用整数函数；如果类型为F，则通过指针调用浮点数函数；如果类型为S，则通过指针调用字符串函数


输入：
第一行输入一个t表示有t个测试实例

每行先输入一个大写字母，表示调用类型，然后再输入相应的参数

依次输入t行


输出：
每行输出调用函数后的结果


样例输入：
5
S shenzhen
I 25
F 6.25
I 31
S China


样例输出：
SHENZHEN
625
2.5
961
CHINA


*/