#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct message
{
    string m;
    int a, b;
};

struct cmp
{
    bool operator()(message &p1, message &p2)
    {
        return p1.b > p2.b;
    }
};

int main()
{
    string cmd;
    priority_queue<message, vector<message>, cmp> p;
    message tmp;

    while (cin >> cmd)
    {
        if (cmd == "GET")
        {
            if (!p.empty())
            {
                cout << p.top().m << " " << p.top().a << endl;
                p.pop();
            }
            else
                cout << "EMPTY" << endl;
        }
        else if (cmd == "PUT")
        {
            cin >> tmp.m >> tmp.a >> tmp.b;
            p.push(tmp);
        }
    }
    return 0;
}