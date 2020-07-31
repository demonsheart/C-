#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n, cmd;
    string name, phone;
    multimap<string, string> m;

    cin >> n;
    while (n--)
    {
        cin >> name >> phone;
        m.insert(pair<string, string>(name, phone));
    }
    cin >> n;
    while (n--)
    {
        cin >> cmd >> name;
        if (cmd == 1)
        {
            cout << m.count(name) << endl;
        }
        else if (cmd == 2)
        {
            auto reit = m.equal_range(name);
            if (reit.first != reit.second)
                for (auto it = reit.first; it != reit.second; it++)
                    cout << it->second << endl;
            else
                cout << "None" << endl;
        }
    }
    return 0;
}