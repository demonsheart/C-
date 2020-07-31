#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
class CSet
{
private:
    vector<int> v;

public:
    CSet(vector<int> vv) : v(vv) {}
    void print()
    {
        for (int i = 0; i < v.size() - 1; ++i)
            cout << v[i] << " ";
        cout << v.back() << endl;
    }
    friend CSet operator+(CSet r1, CSet r2);
    friend CSet operator-(CSet r1, CSet r2);
    friend CSet operator*(CSet r1, CSet r2);
};
CSet operator+(CSet r1, CSet r2)
{
    vector<int> tmp;
    set_union(r2.v.begin(), r2.v.end(), r1.v.begin(), r1.v.end(), back_inserter(tmp));
    CSet s(tmp);
    return s;
}
CSet operator-(CSet r1, CSet r2)
{
    CSet tmp = r1 * r2; //äº¤é›†
    for (int i = 0; i < tmp.v.size(); ++i)
    {
        for (int j = 0; j < r1.v.size(); ++j)
        {
            if (r1.v[j] == tmp.v[i])
            {
                r1.v.erase(r1.v.begin() + j);
                j--;
            }
        }
    }
    CSet tmp1(r1.v);
    return tmp1;
}
CSet operator*(CSet r1, CSet r2)
{
    vector<int> tmp;
    for (auto i = r1.v.begin(); i != r1.v.end(); ++i)
    {
        int flag = 1;
        for (auto j = r2.v.begin(); j != r2.v.end(); ++j)
        {
            if (*i == *j)
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
            tmp.push_back(*i);
    }
    CSet s(tmp);
    return s;
}
int main()
{
    int t, n, tmp;

    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        CSet A(a);
        CSet B(b);

        CSet c1 = A + B;
        CSet c2 = A * B;
        CSet c3 = (A - B) + (B - A);
        cout << "A:";
        A.print();
        cout << "B:";
        B.print();
        cout << "A+B:";
        c1.print();
        cout << "A*B:";
        c2.print();
        cout << "(A-B)+(B-A):";
        c3.print();
        cout << endl;
    }
    return 0;
}