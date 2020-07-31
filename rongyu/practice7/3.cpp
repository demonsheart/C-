#include <set>
#include <iostream>
using namespace std;
int main()
{
    int t, cmd, x;
    multiset<int> m;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> x;
            m.insert(x);
        }
        else if (cmd == 2)
        {
            if (!m.empty())
                m.erase(m.begin());
        }
        else if (cmd == 3)
        {
            if (!m.empty())
                cout << *(--m.end()) << endl;
        }
    }
    return 0;
}