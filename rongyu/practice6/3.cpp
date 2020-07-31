#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t, n, a;

    cin >> t;
    while (t--)
    {
        map<int, int> m;
        cin >> n;
        while (n--)
        {
            cin >> a;
            m[a]++;
        }
        auto it = max_element(m.begin(), m.end(), cmp);
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}