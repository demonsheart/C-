#include <list>
#include <string>
#include <iostream>
using namespace std;
void print(list<int> *p, int i)
{
    list<int>::iterator it;
    cout << p[i].size() << " ";
    for (it = p[i].begin(); it != p[i].end(); ++it)
        cout << *it << " ";
    cout << endl;
}
bool comp(int &a, int &b)
{
    return a > b;
}
int main()
{
    int m, n, temp;
    string s;
    cin >> m;

    list<int> p[10];
    list<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        cin >> n;
        for (int j = 0; j < n; ++j)
        {
            cin >> temp;
            p[i].push_back(temp);
        }
    }
    int ctrlnum, i, loc, e, j;
    cin >> ctrlnum;
    while (ctrlnum--)
    {
        cin >> s;
        if (s == "insert")
        {
            cin >> i >> loc >> e;
            i--;
            if (loc >= 1 && loc <= p[i].size() + 1)
            {
                it = p[i].begin();
                for (int j = 0; j < loc - 1; ++j)
                    ++it;
                p[i].insert(it, e);
            }
            print(p, i);
        }
        else if (s == "delete")
        {
            cin >> i >> loc;
            i--;
            if (loc >= 1 && loc <= p[i].size())
            {
                it = p[i].begin();
                for (int j = 0; j < loc - 1; ++j)
                    ++it;
                p[i].erase(it);
            }
            print(p, i);
        }
        else if (s == "merge")
        {
            cin >> i >> j;
            i--;
            j--;
            p[i].sort();
            p[j].sort();
            p[i].merge(p[j]);
            print(p, i);
        }
        else if (s == "unique")
        {
            cin >> i;
            i--;
            p[i].sort(comp);
            p[i].unique();
            print(p, i);
        }
        else if (s == "display")
        {
            cin >> i;
            i--;
            print(p, i);
        }
    }
    return 0;
}