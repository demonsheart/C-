#include <stdio.h>
#include <string.h>
int isNumber(char *p);
int main()
{
    int t, result;
    char str[100];
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        scanf("%s", str);
        result = isNumber(str);
        printf("%d\n", result);
    }
}
int isNumber(char *p)
{
    int len = strlen(p), flag = 1;
    if (*p < '0' || *p > '9' && *p != '-') //考虑到负数情况，对第一个位置判断
        flag = 0;
    else
    {
        for (int i = 1; i < len; ++i)
        {
            if (*(p + i) < '0' || *(p + i) > '9')
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
        return -1;
    else
    {
        int s = 0, i = 0;
        if (*p == '-')
            i = 1;
        for (; i < len; ++i)
        {
            s = s * 10 + (*(p + i) - '0');
        }
        if (*p == '-')
            s = -s;
        return s;
    }
}
/*
题目描述：
输入一个字符串，判断这个字符串是否一个完全整数值的字符串，例如输入"1234"，那么表示整数1234，输入"12a3"就表示只是一个字符串，不是一个整数
要求编写函数isNumber，参数是一个字符指针，返回值是整数类型
如果字符串表示一个整数，则计算出这个整数并且返回
如果字符串不是表示一个整数，则返回-1
主函数必须调用isNumber来判断字符串。不能使用任何C++自带或第三方的类似函数


输入：
输入t表示有t个测试实例
每行输入一个字符串
依次输入t行


输出：
每行输出判断结果


样例输入：
3
1234
567a
0890


样例输出：
1234
-1
890


*/