#include <iostream>
#include <bitset>
using namespace std;
void multi(bitset<100> A[10], bitset<100> B[10], int n, bitset<100> *re)
{
    bitset<100> tmp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            tmp = A[i] & B[j];
            if (tmp.any())
                re[i][j] = 1;
        }
    }
}
int main()
{
    int t, n, e;

    cin >> t;
    while (t--)
    {
        bitset<100> A[10], B[10], re1[10], re2[10], re3[10]; //B是A的转置矩阵
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> e;
                if (e)
                {
                    A[i][j] = 1;
                    B[j][i] = 1;
                }
            }
        }
        multi(A, B, n, re1);
        multi(re1, B, n, re2);
        multi(re2, B, n, re3);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; j++)
                cout << re1[i][j];
            cout << endl;
        }
        for (int i = 0; i < n; ++i)
            cout << "-";
        cout << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; j++)
                cout << re2[i][j];
            cout << endl;
        }
        for (int i = 0; i < n; ++i)
            cout << "-";
        cout << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; j++)
                cout << re3[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
