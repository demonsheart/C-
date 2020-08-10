#include <stdio.h>
#include <string.h>
int substr(char str1[], char str2[], int index);
int main()
{
    int n, a;
    char str1[1000], str2[1000];
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        gets(str1);
        scanf("%d", &a);
        if (substr(str1, str2, a))
            printf("%s\n", str2);
        else
            printf("IndexError\n");
        getchar();
    }
}
int substr(char str1[], char str2[], int index)
{
    int len = strlen(str1);
    if (index >= len || index < 0)
        return 0;
    else
    {
        int i, j;
        for (i = index, j = 0; i < len; ++i, ++j)
        {
            str2[j] = str1[i];
        }
        str2[j] = '\0';
        return 1;
    }
}
/*
题目描述：
编写一个函数int substr(char str1[],char str2[],int index)，
其作用是，将从字符串str1 (长度超过30) 的第index个字符开始的所有字符复制，
生成新的字符串str2，如果成功生成，函数返回1，如果不能成功生成，返回0


输入：
测试数据的组数n
第一组数据
第二组数据
........


输出：
成功生成就输出子串，不成功生成，输出"IndexError"


样例输入：
3
Zhenshen University
9
www.szu.edu.cn
12
apple
8


样例输出：
University
cn
IndexError


*/