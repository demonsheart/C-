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
    CXGraph operator++() //ǰ��
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
    CXGraph operator++(int) //����
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
    CXGraph operator--() //ǰ��
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
    CXGraph operator--(int) //����
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
��Ŀ����
X��ĸ���ԷŴ����С����Ϊn��X��n=1,3,5,7,9,...,21�������磬3��xͼ�����£�



�ּ���һ��n�У�n>0��������Xͼ����ң�������Կ���Xͼ���ķŴ�����С��ң������5��������1��show����ʾ��ǰXͼ����2��show++, ��ʾ��ǰXͼ�����ٷŴ�ͼ����n+2��3��++show���ȷŴ�ͼ����n+2������ʾͼ����4��show--����ʾ��ǰXͼ��������Сͼ����n-2��5��--show������Сͼ����n-2������ʾͼ��������Xͼ���ķŴ����С��1-21֮�䡣n=1ʱ����С�������ã�n=21ʱ���Ŵ������á�

����CXGraph��ʾXͼ������Ŵ���С����ʾ��������ģ��ң�������������£������޸ġ��벹��CXGraph��Ķ����ʵ�֡�



����
 ��һ��n������0��������Xͼ���ĳ�ʼ��С��

�ڶ��У���������

ÿ������һ�У�Ϊshow��show++��show--��--show��++show֮һ����������������Ŀ��

���
 ��ÿ�������������Ӧ��Xͼ����

��������
3
5
show
show++
show++
++show
--show
�������
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