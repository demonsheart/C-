#include <iostream>
using namespace std;
int cb(int m, int n);
int jie(int n);
int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        if (m < n)
            cout << "error!" << endl;
        else
        {
            int c;
            c = cb(m, n);
            cout << c << endl;
        }
    }
}
int cb(int m, int n)
{
    int c;
    c = jie(m) / (jie(n) * jie(m - n));
    return c;
}
int jie(int n)
{
    int c = 1;
    for (int i = 2; i <= n; ++i)
    {
        c *= i;
    }
    return c;
}
/*
��Ŀ������
��дһ��������m��n�ǲ����������¹�ʽ���������ֵ������m��n��������������m>n��
��������������m��n��ֵ�������ú�������������ֵ�������


���룺
�������ݵ����� t
��һ��m��n
�ڶ���m��n
..........


�����
��һ���������ֵ
�ڶ����������ֵ
..........


�������룺
3
8 5
6 3
10 8


���������
56
20
45

*/