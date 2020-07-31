#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
struct plural
{
    int real, imag;
    friend ostream &operator<<(ostream &os, plural &tmp)
    {
        if (tmp.real >= 0)
            os << tmp.imag << '+' << tmp.real;
        else
            os << tmp.imag << tmp.real;
        return os;
    }
};

template <class T>
string _reverse(T a)
{
    ostringstream os;
    string s;

    os << a;
    s = os.str();
    int fg1 = 0;//复数
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '-' || s[i] == '+')//以字符串中间有正负号断言复数
        {
            fg1 = 1;
            break;
        }
    }
    if (fg1)
        return s;
    int fg2 = 0;//负数
    if (s[0] == '-')
    {
        fg2 = 1;
        s.erase(s.begin());//先去除符号
    }
    reverse(s.begin(), s.end());//逆转
    while (s.front() == '0' && s.size() > 1)//去除前面多余的0
        s.erase(s.begin());
    if (fg2)//回添负号
        s = '-' + s;
    return s;
}
int main()
{
    int t;
    char cmd;
    string result;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 'I')
        {
            int s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'D')
        {
            double s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'S')
        {
            string s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'C')
        {
            int a, b;
            cin >> a >> b;
            plural s{a, b};
            result = _reverse(s);
            cout << result << endl;
        }
    }
    return 0;
}