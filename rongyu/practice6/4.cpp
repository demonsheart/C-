#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    string name, web;
    vector<string> order; //记录顺序
    map<string, vector<string>> m;
    int t;

    while (cin >> t)
    {
        while (t--)
        {
            cin >> name >> web;
            m[name].push_back(web);
            bool flag = true;
            for (auto it = order.begin(); it != order.end(); ++it)
            {
                if (*it == name)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                order.push_back(name);
        }

        while (!order.empty())
        {
            for (auto it = m.begin(); it != m.end(); ++it)
            {
                if (it->first == order.front())
                {
                    cout << it->first << " ";
                    for (auto i = it->second.begin(); i != it->second.end() - 1; ++i)
                        cout << *i << " ";
                    cout << it->second.back() << endl;
                    break;
                }
            }
            order.erase(order.begin());
        }
        cout << endl;
    }
    return 0;
}