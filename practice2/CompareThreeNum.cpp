#include <stdio.h>
void sortThreeNum(int *p1, int *p2, int *p3);
int main()
{
    int t, a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", p1, p2, p3);
        sortThreeNum(p1, p2, p3);
        printf("%d %d %d\n", *p1, *p2, *p3);
    }
}
void sortThreeNum(int *p1, int *p2, int *p3)
{
    int a[3];
    a[0] = *p1;
    a[1] = *p2;
    a[2] = *p3;
    for (int i = 0; i <= 1; ++i)
    {
        for (int j = i + 1; j <= 2; ++j)
        {
            if (a[i] < a[j])
            {
                int c;
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    *p1 = a[0];
    *p2 = a[1];
    *p3 = a[2];
}

/*
题目描述：
输入三个整数，然后按照从大到小的顺序输出数值。
要求：用三个指针分别指向这三个整数，排序过程必须通过这三个指针来操作，不能直接访问这三个整数
输出时，必须使用这三个指针，不能使用存储三个整数的变量


输入：
第一行输入t表示有t个测试实例
第二行起，每行输入三个整数
输入t行


输出：
每行按照从大到小的顺序输出每个实例
在每行中，每个数据输出后都带有一个空格，即使该行最后一个数据输出后也要再输出一个空格


样例输入：
3
2 4 6
88 99 77
111 333 222


样例输出：
6 4 2 
99 88 77 
333 222 111 

*/