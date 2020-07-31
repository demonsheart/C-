#include <stack>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n, num;

    vector<string> result;
    string in, out;

    cin >> n;
    while (n--)
    {
        stack<char> s;
        cin >> num >> in >> out;

        int i, j = 0;
        for (i = 0; i < num; ++i)
        {
            s.push(in[i]);
            result.push_back("in");
            while (!s.empty() && s.top() == out[j])
            {
                s.pop();
                result.push_back("out");
                ++j;
            }
        }
        if (s.empty())
        {
            cout << "Yes" << endl;
            for (auto x : result)
                cout << x << endl;
        }
        else
            cout << "No" << endl;
        cout << "FINISH" << endl;
        result.clear();
    }
    return 0;
}