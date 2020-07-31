#include <iostream>
#include <queue>
#include <utility>
using namespace std;
struct cmp
{
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        return a.first < b.first;
    }
};
int main()
{
    int t;
    string cmd;

    while (cin >> t)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> p1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> p2;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> p3;
        pair<int, int> tmp = make_pair(0, 0); //第一个为优先级，第二个为id
        while (t--)
        {
            int no;
            cin >> cmd >> no;
            if (cmd == "IN")
            {
                cin >> tmp.first;
                tmp.second++;
                if (no == 1)
                    p1.push(tmp);
                else if (no == 2)
                    p2.push(tmp);
                else if (no == 3)
                    p3.push(tmp);
            }
            if (cmd == "OUT")
            {
                if (no == 1)
                {
                    if (p1.empty())
                        cout << "EMPTY" << endl;
                    else
                    {
                        cout << p1.top().second << endl;
                        p1.pop();
                    }
                }
                else if (no == 2)
                {
                    if (p2.empty())
                        cout << "EMPTY" << endl;
                    else
                    {
                        cout << p2.top().second << endl;
                        p2.pop();
                    }
                }
                else if (no == 3)
                {
                    if (p3.empty())
                        cout << "EMPTY" << endl;
                    else
                    {
                        cout << p3.top().second << endl;
                        p3.pop();
                    }
                }
            }
        }
    }
    return 0;
}