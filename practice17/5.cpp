#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
class BoundArray
{
private:
    vector<T> v;

public:
    BoundArray() {}
    void append(T a) { v.push_back(a); }
    void mysort()
    {
        int len = v.size();
        for (int i = 0; i < len; ++i)
        {
            for (int j = 0; j < len - 1; ++j)
            {
                if (v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }
    }
    void print()
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    int search(T a)
    {
        auto it = find(v.begin(), v.end(), a);
        int n = -1;
        if (it != v.end())
        {
            n = it - v.begin();
            return n;
        }
        else
            return n;
    }
};
int main()
{
    int t, n;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == 'I')
        {
            BoundArray<int> b;
            int tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'D')
        {
            BoundArray<double> b;
            double tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'C')
        {
            BoundArray<char> b;
            char tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
    }
    return 0;
}