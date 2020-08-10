#include <iostream>
using namespace std;
int main()
{
    char *s[] = {"January", "February", "March", "April", "May", "June",
                 "July", "August", "September", "October", "November", "December"};
    char **p = s;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n >= 1 && n <= 12)
            cout << *(p + n - 1) << endl;
        else
            cout << "error" << endl;
    }
}
/*
题目描述：
已知每个月份的英文单词如下，要求创建一个指针数组，数组中的每个指针指向一个月份的英文字符串，要求根据输入的月份数字输出相应的英文单词
1月 January 
2月 February
3月 March
4月 April
5月 May
6月 June
7月 July
8月 August
9月 September
10月 October
11月 November
12月 December


输入：
第一行输入t表示t个测试实例

接着每行输入一个月份的数字

依次输入t行


输出：
每行输出相应的月份的字符串，若没有这个月份的单词，输出error


样例输入：
3
5
11
15


样例输出：
May
November
error


*/