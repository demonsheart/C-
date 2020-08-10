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
/*
题目描述
X字母可以放大和缩小，变为n行X（n=1,3,5,7,9,...,21）。例如，3行x图案如下：



现假设一个n行（n>0，奇数）X图案，遥控器可以控制X图案的放大与缩小。遥控器有5个按键，1）show，显示当前X图案；2）show++, 显示当前X图案，再放大图案，n+2；3）++show，先放大图案，n+2，再显示图案；4）show--，显示当前X图案，再缩小图案，n-2；5）--show，先缩小图案，n-2，再显示图案。假设X图案的放大和缩小在1-21之间。n=1时，缩小不起作用，n=21时，放大不起作用。

用类CXGraph表示X图案及其放大、缩小、显示。主函数模拟遥控器，代码如下，不可修改。请补充CXGraph类的定义和实现。



输入
 第一行n，大于0的奇数，X图案的初始大小。

第二行，操作次数

每个操作一行，为show、show++、show--、--show、++show之一，具体操作含义见题目。

输出
 对每个操作，输出对应的X图案。

样例输入
3
5
show
show++
show++
++show
--show
样例输出
XXX
 X
XXX

XXX
 X
XXX

XXXXX
 XXX
  X
 XXX
XXXXX

XXXXXXXXX
 XXXXXXX
  XXXXX
   XXX
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX

XXXXXXX
 XXXXX
  XXX
   X
  XXX
 XXXXX
XXXXXXX
*/