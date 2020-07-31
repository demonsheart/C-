#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main()
{
    int n, m, x;
    vector<vector<bitset<100>>> ve;

    cin >> n;
    while (n--)
    {
        cin >> m;
        vector<bitset<100>> v;
        while (m--)
        {
            cin >> x;
            bitset<100> tmp(x);
            v.push_back(tmp);
        }
        ve.push_back(v);
    }
    cin >> n;
    while (n--)
    {
        cin >> x;
        bitset<100> ii(x);
        cin >> x;
        bitset<100> jj(x);
        vector<int> result;
        for (int i = 0; i < ve.size(); ++i)
        {
            int fg1 = 0, fg2 = 0;
            for (int j = 0; j < ve[i].size(); ++j)
            {
                if (ii == ve[i][j])
                    fg1 = 1;
                if (jj == ve[i][j])
                    fg2 = 1;
            }
            if (fg1 && fg2)
                result.push_back(i + 1);
        }
        if (!result.empty())
        {
            for (int i = 0; i < result.size() - 1; ++i)
                cout << result[i] << " ";
            cout << result.back() << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}