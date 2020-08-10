#include <iostream>
using namespace std;
void does(int n, int **p);
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int **a = new int *[n];
        for (int i = 0; i < n; ++i)
            a[i] = new int[n];
        does(n, a);
        for (int i = 0, j = 0; i < n; ++i)
        {
            for (j = 0; j < n - 1; ++j)
                cout << a[i][j] << " ";
            cout << a[i][j] << endl;
        }
        cout << endl;
        for (int i = 0; i < n; ++i)
        {
            delete[] a[i];
        }

        delete[] a;
    }
}
void does(int n, int **p)
{
    int k = 1, k1 = n - 1, k2 = n - 1, i = 0, j = 0, k0 = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            p[i][j] = 0;
    if (n == 1)
        p[i][j] = 1;
    else
    {
        while (p[i][j] == 0)
        {
            i = k0;

            while (j <= k1) //����ǰ��
            {
                p[i][j] = k;
                k++;
                j++;
            }
            j--;
            i++;
            if (p[i][j] != 0)
                break;
            while (i <= k2) //����ǰ��
            {
                p[i][j] = k;
                k++;
                i++;
            }
            i--;
            j--;
            k1--;
            if (p[i][j] != 0)
                break;
            while (j >= k0) //����ǰ��
            {
                p[i][j] = k;
                k++;
                j--;
            }
            j++;
            i--;
            k2--;
            k0++;
            if (p[i][j] != 0)
                break;
            while (i >= k0) //����ǰ��
            {
                p[i][j] = k;
                k++;
                i--;
            }
            i++;
            j++;
            if (p[i][j] != 0)
                break;
        }
    }
}
/*
��Ŀ������
���ξ�������1��ʼ����Ȼ��һ�����гɵ�N*N�������ξ�����������������ڵĵ������� N=3ʱ���ξ���Ϊ��

1 2 3

8 9 4

7 6 5

N=6ʱ���ξ���Ϊ��

1     2   3   4   5   6

20 21 22 23 24   7

19 32 33 34 25   8

18 31 36 35 26   9

17 30 29 28 27 10

16 15 14 13 12 11

�������ξ����ȣ���̬�����ά���飬�������ξ�����������


���룺
���Դ���t

ÿ���������һ�У������СN(>0)


�����
��ÿ��������ݣ��������õ������ξ���ÿ��Ԫ�ؼ��Կո�ָ������һ��Ԫ�غ��޿ո�

ÿ���������֮���Կ��зָ���


�������룺
3
3
6
2


���������
1 2 3
8 9 4
7 6 5

1 2 3 4 5 6
20 21 22 23 24 7
19 32 33 34 25 8
18 31 36 35 26 9
17 30 29 28 27 10
16 15 14 13 12 11

1 2
4 3


*/