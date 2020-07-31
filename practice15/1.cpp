#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class CXGraph
{
protected:
    vector<string> v;

public:
    CXGraph(int n)
    {
        string s;
        for (int j = 0; j < n; ++j)
            s += "X";
        v.push_back(s);
        for (int j = 0; j < n / 2; ++j)
        {
            s[j] = ' ';
            s.pop_back();
            v.push_back(s);
        }
        vector<string> tmp = v;
        reverse(tmp.begin(), tmp.end());
        tmp.erase(tmp.begin());
        v.insert(v.end(), tmp.begin(), tmp.end());
    }
    CXGraph operator++() //前置
    {
        int n = v.size();
        n += 2;
        if (n > 21)
            return *this;
        for (auto it = v.begin(); it != v.end(); ++it)
            it->insert(it->begin(), ' ');
        string s;
        for (int j = 0; j < n; ++j)
            s += "X";
        v.insert(v.begin(), s);
        v.push_back(s);
        return *this;
    }
    CXGraph operator++(int) //后置
    {
        int n = v.size();
        n += 2;
        if (n > 21)
            return *this;
        CXGraph tmp(n - 2);
        for (auto it = v.begin(); it != v.end(); ++it)
            it->insert(it->begin(), ' ');
        string s;
        for (int j = 0; j < n; ++j)
            s += "X";
        v.insert(v.begin(), s);
        v.push_back(s);
        return tmp;
    }
    CXGraph operator--() //前置
    {
        int n = v.size();
        n -= 2;
        if (n < 0)
            return *this;
        v.erase(v.begin());
        v.pop_back();
        for (auto it = v.begin(); it != v.end(); ++it)
            it->erase(it->begin());
        return *this;
    }
    CXGraph operator--(int) //后置
    {
        int n = v.size();
        n -= 2;
        if (n < 0)
            return *this;
        CXGraph tmp(n + 2);
        v.erase(v.begin());
        v.pop_back();
        for (auto it = v.begin(); it != v.end(); ++it)
            it->erase(it->begin());
        return tmp;
    }
    friend ostream &operator<<(ostream &out, const CXGraph &s);
};

ostream &operator<<(ostream &out, const CXGraph &s)
{
    vector<string> tmp = s.v;
    vector<string>::iterator it = tmp.begin();
    for (; it != tmp.end(); ++it)
        out << *it << endl;
    return out;
}
int main()
{
    int t, n;
    string command;

    cin >> n;
    CXGraph xGraph(n);

    cin >> t;
    while (t--)
    {
        cin >> command;

        if (command == "show++")
            cout << xGraph++ << endl;
        else if (command == "++show")
            cout << ++xGraph << endl;
        else if (command == "show--")
            cout << xGraph-- << endl;
        else if (command == "--show")
            cout << --xGraph << endl;
        else if (command == "show")
            cout << xGraph << endl;
    }
    return 0;
}