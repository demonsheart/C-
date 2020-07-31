#include <deque>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int m, x, i = 0;
    string command;
    vector<int> error_no;
    deque<int> d;

    cin >> m;
    while (m--)
    {
        i++; //记录第几条命令
        cin >> command;
        if (command == "LIN")
        {
            cin >> x;
            d.push_front(x);
        }
        else if (command == "RIN")
        {
            cin >> x;
            d.push_back(x);
        }
        else if (command == "LOUT")
        {
            if (d.empty())
                error_no.push_back(i);
            else
                d.pop_front();
        }
        else if (command == "ROUT")
        {
            if (d.empty())
                error_no.push_back(i);
            else
                d.pop_back();
        }
        else
            error_no.push_back(i);
    }
    if (d.empty())
        cout << "EMPTY" << endl;
    else
    {
        for (auto a : d)
            cout << a << " ";
        cout << endl;
    }
    if (!error_no.empty())
        for (auto a : error_no)
            cout << a << " ERROR" << endl;

    return 0;
}