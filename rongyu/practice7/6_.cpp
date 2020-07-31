#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main()
{
    int t, n, a, b;
    vector<bitset<10005>> v;

    cin >> t;
    while (t--)
    {
        bitset<10005> tmp;
        cin >> n;
        while (n--)
        {
            cin >> a;
            tmp.set(a, 1);
        }
        v.push_back(tmp);
    }
    cin >> t;
    while (t--)
    {
        vector<int> result;
        bitset<10005> tmp1, tmp2, tmp3, tmp4;
        cin >> a >> b;
        tmp1.set(a, 1);
        tmp2.set(b, 1);
        for (int i = 0; i < (int)v.size(); i++)
        {
            tmp3 = tmp1 & v[i];
            tmp4 = tmp2 & v[i];
            if (tmp3.any() && tmp4.any())
                result.push_back(i + 1);
        }
        if (!result.empty())
        {
            for (int i = 0; i < (int)result.size() - 1; ++i)
                cout << result[i] << " ";
            cout << result.back() << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}