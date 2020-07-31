#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct poker
{
    string typ;
    int num;
    bool operator<(const poker &d)
    {
        if (this->typ == d.typ)
        {
            if (this->num < d.num)
                return true;
            else
                return false;
        }
        else
        {
            if (d.typ == "spade" || (d.typ == "heart" && this->typ != "spade") || (d.typ == "club" && this->typ == "diamond"))
                return true;
            else
                return false;
        }
    }
};
bool compare(poker p1, poker p2)
{
    if (p1 < p2)
        return true;
    else
        return false;
}
int main()
{
    int n, m;
    vector<poker> v;
    vector<poker> result;
    poker temp;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> temp.typ >> temp.num;
            v.push_back(temp);
        }
        vector<poker>::iterator it = v.begin();
        cin >> m;
        while (m--)
        {
            cin >> temp.typ >> temp.num;

            int count = 0;
            for (int i = 0; i < n; ++i)
            {
                if (temp.typ == (*(it + i)).typ && (temp < *(it + i) || temp.num == (*(it + i)).num))
                {
                    result.push_back(*(it + i));
                    count++;
                }
            }
            vector<poker>::iterator it1 = result.begin();
            sort(it1, it1 + count, compare);
            if(count)
            for (it1 = result.begin(); it1 != result.end(); ++it1)
            {
                cout << (*it1).typ << " " << (*it1).num << endl;
            }
            cout<<count<<endl;
            result.clear();
        }

        v.clear();
    }
    return 0;
}