#include <iostream>
#include <stdlib.h>
using namespace std;
void does(char p1[], char p2[], char p3[], char *p, int a1, int a2, int b1, int b2, int c1, int c2, int n);
int main()
{
    int t, a, b, c, d, e, f, n;
    char p1[11], p2[11], p3[11], *p;
    cin >> t;
    while (t--)
    {
        cin >> p1 >> p2 >> p3 >> a >> b >> c >> d >> e >> f;
        n = b + d + f - a - c - e + 4;
        char *p = new char(n);
        does(p1, p2, p3, p, a, b, c, d, e, f, n);
        cout << p << endl;
        delete[] p;
    }
    system("pause");
}
void does(char p1[], char p2[], char p3[], char *p, int a1, int a2, int b1, int b2, int c1, int c2, int n)
{
    int i, j, k;
    for (i = 0, j = a1 - 1; i < a2 - a1 + 1; ++i, ++j)
    {
        *(p + i) = *(p1 + j);
    }
    k = i;
    for (i = k, j = b1 - 1; i < b2 - b1 + 1 + k; ++i, ++j)
    {
        *(p + i) = *(p2 + j);
    }
    k = i;
    for (i = k, j = c1 - 1; i < c2 - c1 + 1 + k; ++i, ++j)
    {
        *(p + i) = *(p3 + j);
    }
    *(p + i) = '\0';
}
/*
题目描述：
输入三个字符串，通过指针读取各个字符串的子串（子串是指字符串中连续的一小部分），把它们合并成一个新字符串
要求：
1. 三个字符串的创建和输入可以使用数组，也可以不用
2. 输入后，根据三个字符串的子串的长度，计算出新字符串的长度
3. 使用动态数组的方法创建新的字符串，并且使用指针读取三个字符串的不同部分，并且复制到新字符串中，要求整个过程都不能使用数组下标
4. 使用指针输出新的字符串


输入：
第一行输入t表示有t个测试实例
连续三行输入三个字符串，每个字符串都包含10个字符
连续三行，每行输入数字a和b，表示每个子串的开始和结束位置。注意字符串的位置是按照一般意义从1开始计算，和编程中的数组位置不同。例如字符串abcdefg，开始位置是3，结束位置是5，那么子串就是cde
依次输入t个实例


输出：
每行输出合并后的新字符串


样例输入：
2
abcdefghij
ABCDEFGHIJ
aabbccddee
3 5
2 6
8 10
AABBCCDDEE
ffgghhiijj
FFGGHHIIJJ
1 4
5 8
2 7


样例输出：
cdeBCDEFdee
AABBhhiiFGGHHI


*/
