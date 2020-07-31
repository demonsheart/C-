#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    fstream file, os;
    map<string, int> m;
    string s;
    file.open("a.txt", ios::in);
    os.open("aaa.txt", ios::out);
    if (!os.is_open() || !file.is_open())
    {
        std::cout << "file open error!" << endl;
        return 0;
    }

    while (file >> s)
    {
        m[s]++;
    }
    map<string, int>::iterator it = m.begin();
    vector<pair<string, int>> re;
    while (it != m.end())
    {
        re.push_back(make_pair(it->first, it->second));
        it++;
    }
    sort(re.begin(), re.end(), cmp);
    for (auto x : re)
    {
        os << x.first << " " << x.second << endl;
    }
}