#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Matrix
{
private:
    vector<vector<T>> Ma;

public:
    Matrix(){};
    void initial(int m, int n)
    {
        for (int i = 0; i < m; ++i)
        {
            vector<T> tmp;
            for (int j = 0; j < n; ++j)
            {
                T a;
                cin >> a;
                tmp.push_back(a);
            }
            Ma.push_back(tmp);
        }
    }
    void trasport()
    {
        vector<vector<T>> v(Ma);
        Ma.clear();
        int m = v.size(), n = v[0].size();
        T a[100][100];
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                a[j][i] = v[i][j];
        for (int i = 0; i < n; ++i)
        {
            vector<T> tmp;
            for (int j = 0; j < m; ++j)
            {
                T e = a[i][j];
                tmp.push_back(e);
            }
            Ma.push_back(tmp);
        }
    }
    void print()
    {
        int m = Ma.size(), n = Ma[0].size(), i, j;
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n - 1; ++j)
            {
                cout << Ma[i][j] << " ";
            }
            cout << Ma[i][j] << endl;
        }
    }
};

int main()
{
    int t, m, n;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 'I')
        {
            cin >> m >> n;
            Matrix<int> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
        else if (cmd == 'D')
        {
            cin >> m >> n;
            Matrix<double> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
        else if (cmd == 'C')
        {
            cin >> m >> n;
            Matrix<char> ma;
            ma.initial(m, n);
            ma.trasport();
            ma.print();
        }
    }
    return 0;
}