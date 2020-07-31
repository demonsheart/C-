#include <string>
#include <iostream>
#include <vector>
using namespace std;
template <class T>
int find(vector<T> v, T des)
{
    int len = v.size(), i;
    for (i = 1; i <= len; ++i)
        if (v[i - 1] == des)
            break;
    return (i > len) ? 0 : i;
}
int main()
{
    int t, n;
    string cmd;
    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == "I")
        {
            int tmp;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "D")
        {
            double tmp;
            vector<double> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "C")
        {
            char tmp;
            vector<char> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "S")
        {
            string tmp;
            vector<string> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
    }
    return 0;
}