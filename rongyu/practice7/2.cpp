#include <set>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
void due(char &c)
{
    if (c >= 'A' && c <= 'Z')
        c = c - 'A' + 'a';
    else if (!(c >= 'a' && c <= 'z'))
        c = ' ';
}
int main()
{
    set<string> s;
    string tmp, tmp1;
    while (getline(cin, tmp1))
    {
        tmp = tmp + tmp1 + ' ';
    }
    for_each(tmp.begin(), tmp.end(), due);
    stringstream ss(tmp);
    while (ss)
    {
        ss >> tmp;
        s.insert(tmp);
    }
    for (auto x : s)
        cout << x << endl;
    return 0;
}