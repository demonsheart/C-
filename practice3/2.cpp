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
��Ŀ������
��֪ÿ���·ݵ�Ӣ�ĵ������£�Ҫ�󴴽�һ��ָ�����飬�����е�ÿ��ָ��ָ��һ���·ݵ�Ӣ���ַ�����Ҫ�����������·����������Ӧ��Ӣ�ĵ���
1�� January 
2�� February
3�� March
4�� April
5�� May
6�� June
7�� July
8�� August
9�� September
10�� October
11�� November
12�� December


���룺
��һ������t��ʾt������ʵ��

����ÿ������һ���·ݵ�����

��������t��


�����
ÿ�������Ӧ���·ݵ��ַ�������û������·ݵĵ��ʣ����error


�������룺
3
5
11
15


���������
May
November
error


*/