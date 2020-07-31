#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <sstream>
using namespace std;
int precede(string a)
{
    if (a == "+" || a == "-")
        return 1;
    else if (a == "*" || a == "/")
        return 2;
    else if (a == "#")
        return 0;
    else
        return -1;
}
bool isNum(string s)
{
    if ((int)s.size() > 1 || (s[0] >= '0' && s[0] <= '9'))
        return true;
    else
        return false;
}
string figure(double a, double b, string s)
{
    stringstream ss;
    string st;
    if (s == "+")
    {
        ss << a + b;
        ss >> st;
        return st;
    }
    else if (s == "-")
    {
        ss << a - b;
        ss >> st;
        return st;
    }
    else if (s == "*")
    {
        ss << a * b;
        ss >> st;
        return st;
    }
    else if (s == "/")
    {
        ss << a / b;
        ss >> st;
        return st;
    }
    else
        return st;
}
double calculate(queue<string> &r)
{
    stack<string> s;
    double a, b;
    while (!r.empty())
    {
        if (r.front() == "+" || r.front() == "-" || r.front() == "*" || r.front() == "/")
        {
            b = atof(s.top().c_str());
            s.pop();
            a = atof(s.top().c_str());
            s.pop();
            s.push(figure(a, b, r.front()));
            r.pop();
        }
        else
        {
            s.push(r.front());
            r.pop();
        }
    }
    return atof(s.top().c_str());
}
int main()
{
    string st;
    string num;
    int t;

    cin >> t;
    cin.get();
    while (t--)
    {
        string s;
        stack<string> tem;
        queue<string> re;
        vector<string> v;
        stringstream ss;
        getline(cin, st);
        ss << st;
        while (ss >> s)
        {
            v.push_back(s);
        }
        tem.push("#");
        for (int i = 0; i < (int)v.size(); ++i)
        {
            if (isNum(v[i]))
                re.push(v[i]);
            else
            {
                if (v[i] == "(")
                    tem.push(v[i]);
                else if (v[i] == ")")
                {
                    while (tem.top() != "(")
                    {
                        re.push(tem.top());
                        tem.pop();
                    }
                    tem.pop();
                }
                else
                {
                    if (tem.top() == "(")
                        tem.push(v[i]);
                    else
                    {
                        if (precede(v[i]) > precede(tem.top()))
                            tem.push(v[i]);
                        else
                        {
                            while (precede(v[i]) <= precede(tem.top()) && tem.top() != "(")
                            {
                                re.push(tem.top());
                                tem.pop();
                            }
                            tem.push(v[i]);
                        }
                    }
                }
            }
        }
        while (tem.top() != "#")
        {
            re.push(tem.top());
            tem.pop();
        }
        queue<string> copy_re = re;
        while (copy_re.size() > 1)
        {
            cout << copy_re.front() << " ";
            copy_re.pop();
        }
        cout << copy_re.front() << " ";
        copy_re.pop();
        cout << endl;

        double result = calculate(re);
        cout << fixed << setprecision(2) << result << endl;
    }
    return 0;
}
