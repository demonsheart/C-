#include <iostream>
#include <string.h>
using namespace std;
struct STest
{
    int num;
    char s1[50], s2[50], s3[50];
};
int compare(STest *p, STest *q);
int main()
{
    int t, r;
    cin >> t;
    STest p[10];
    for (int i = 0; i < t; ++i)
    {
        cin >> p[i].num >> p[i].s1 >> p[i].s2 >> p[i].s3;
    }
    for (int i = 0; i < t - 1; ++i)
    {
        for (int j = i + 1; j < t; ++j)
        {
            r = compare(p + i, p + j);
            if (r != 0)
            {
                cout << p[i].num << " " << p[j].num << " " << r << endl;
            }
        }
    }
}
int compare(STest *p, STest *q)
{
    int a1, b1, c1, a2, b2, c2, s = 0;
    a1 = strlen((*p).s1);
    b1 = strlen((*p).s2);
    c1 = strlen((*p).s3);
    a2 = strlen((*q).s1);
    b2 = strlen((*q).s2);
    c2 = strlen((*q).s3);
    for (int i = 0; i < a1 && i < a2; ++i)
    {
        if ((*p).s1[i] == (*q).s1[i])
            s++;
    }
    if (float(s) >= float(0.9 * a1) || float(s) >= float(0.9 * a2))
        return 1;
    s = 0;
    for (int i = 0; i < b1 && i < b2; ++i)
    {
        if ((*p).s2[i] == (*q).s2[i])
            s++;
    }
    if (float(s) >= float(0.9 * b1) || float(s) >= float(0.9 * b2))
        return 2;
    s = 0;
    for (int i = 0; i < c1 && i < c2; ++i)
    {
        if ((*p).s3[i] == (*q).s3[i])
            s++;
    }
    if (float(s) >= float(0.9 * c1) || float(s) >= float(0.9 * c2))
        return 3;
    return 0;
}
/*
题目描述
已知一群学生的考试试卷，要求对试卷内容进行对比，查找是否有抄袭。

每张试卷包含：学号（整数类型）、题目1答案（字符串类型）、题目2答案（字符串类型）、题目3答案（字符串类型）

要求：使用结构体来存储试卷的信息。定义一个函数，返回值为一个整数，参数是两个结构体指针，函数操作是比较两张试卷的每道题目的答案，如果相同题号的答案相似度超过90%，那么就认为有抄袭，函数返回抄袭题号，否则返回0。相似度是指在同一题目中，两个答案的逐个位置上的字符两两比较，相同的数量大于等于任一个答案的长度的90%，就认为抄袭。

输入
第一行输入t表示有t张试卷

第二行输入第1张试卷的学生学号

第三行输入第1张试卷的题目1答案

第四行输入第1张试卷的题目2答案

第五行输入第1张试卷的题目3答案

每张试卷对应4行输入

依次输入t张试卷的数据

输出
在一行中，把发现抄袭的两个学号和题目号，数据之间用单个空格隔开

如果发现是题目1抄袭，题目号为1，以此类推

输出顺序按照输入的学号顺序进行输出

样例输入
5
2088150555
aabcdef11
ZZ887766dd
cc33447799ZZ
2088150333
abcdef00
AABBCCDDEE
ZZ668899cc
2088150111
AABBCCDDEE
ZZ668899cc
abcdef00
2088150222
AABBCFDDeE
ZZ889966dd
abcdef000
2088150444
aabcdef00
AABBCDDDEE
cc668899ZZ
样例输出
2088150333 2088150444 2
2088150111 2088150222 3
*/