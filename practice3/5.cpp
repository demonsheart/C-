#include <iostream>
using namespace std;
void does(int *x1, int *x2, int m, int n, int **p);
int main()
{
    int t, m, n, min, max;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int **a = new int *[m];
        for (int i = 0; i < m; ++i)
            a[i] = new int[n];
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];
        does(&max, &min, m, n, a);
        cout << min << " " << max << endl;
        for (int i = 0; i < m; ++i)
        {
            delete[] a[i];
        }

        delete[] a;
    }
}
void does(int *x1, int *x2, int m, int n, int **p)
{
    int i, j;
    *x1 = p[0][0];
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (*x1 < p[i][j])
                *x1 = p[i][j];
        }
    }
    *x2 = p[0][0];
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (*x2 > p[i][j])
                *x2 = p[i][j];
        }
    }
}
/*
��Ŀ������
δ֪һ����������Ĵ�С���ڳ�������ʱ�Ż�������������m������n

Ҫ��ʹ��ָ�룬���new��������̬����һ����ά���飬������þ������Сֵ�����ֵ������ʹ�������±귨��

�����ȴ���һ���������Ȼ��ֻʹ�þ����һ���ֿռ����������ݷ��ʡ�

�����ľ����С��������������m������nһ��


���룺
��һ������t��ʾt������ʵ��

�ڶ���������������m��n����ʾ��һ�����������������

����������������m�У�ÿ��n�����֣���ʾ�����һ���������ֵ

��������t��ʵ��


�����
ÿ�����һ��ʵ������Сֵ�����ֵ


�������룺
2
2 3
33 22 11
66 88 55
3 4
19 38 45 14
22 65 87 31
91 35 52 74


���������
11 88
14 91


*/