#include <stdio.h>
#include <string.h>
int change(char s[]);
int op(char a);
int os(int a);
int main()
{
    int t, c;
    char s[10];
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        gets(s);
        c = change(s);
        printf("%d\n", c);
    }
}
int change(char s[])
{
    int len = strlen(s), c = 0;
    for (int i = 0; i < len; ++i)
    {
        c += op(s[i]) * os(len - 1 - i);
    }
    return c;
}
int os(int a)
{
    int d = 1;
    for (int i = 1; i <= a; ++i)
    {
        d *= 16;
    }
    return d;
}
int op(char a)
{
    int c;
    switch (a)
    {
    case '1':
        c = 1;
        break;
    case '2':
        c = 2;
        break;
    case '3':
        c = 3;
        break;
    case '4':
        c = 4;
        break;
    case '5':
        c = 5;
        break;
    case '6':
        c = 6;
        break;
    case '7':
        c = 7;
        break;
    case '8':
        c = 8;
        break;
    case '9':
        c = 9;
        break;
    case 'A':
        c = 10;
        break;
    case 'B':
        c = 11;
        break;
    case 'C':
        c = 12;
        break;
    case 'D':
        c = 13;
        break;
    case 'E':
        c = 14;
        break;
    case 'F':
        c = 15;
        break;
    default:
        break;
    }
    return c;
}
/*
题目描述：
编写函数long change(char s[])，其作用是将参数表示的十六进制数转换为相应的十进制整数


输入：
测试数据的个数
第一个十六进制数
第二个十六进制数
.........


输出：
第一个十进制数
第二个十进制数
........


样例输入：
3
1234
F8
AB12


样例输出：
4660
248
43794

*/