#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
bool cmp(const pair<T, int> &p1, const pair<T, int> &p2)
{
    return p1.second < p2.second;
}
template <class T>
struct result
{
    T data;
    int num;
};

template <class T>
result<T> findmax(vector<T> v)
{
    map<T, int> m;
    for (int i = 0; i < (int)v.size(); ++i)
        m[v[i]]++;
    auto it = max_element(m.begin(), m.end(), cmp<T>);
    result<T> r;
    r.data = it->first;
    r.num = it->second;
    return r;
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
            result<int> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<double> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<char> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<string> r = findmax(v);
            cout << r.data << " " << r.num << endl;
        }
    }
    return 0;
}