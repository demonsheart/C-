#include <iostream>
#include <vector>
using namespace std;
template <class T>
class mlist
{
private:
    vector<T> v;
    int n;

public:
    mlist() {};
    void setData(T d)
    {
        v.push_back(d);
        n = v.size();
    }
    void _insert(int pos, T d)
    {
        auto it = v.begin();
        it += pos;
        v.insert(it, d);
    }
    void _delete(int pos)
    {
        auto it = v.begin();
        it += pos;
        v.erase(it);
    }
    void _print()
    {
        for (int i = 0; i < (int)v.size(); ++i)
            cout << v[i] << " ";
        cout << endl;
    }
};

int main()
{
    int n, tmp1, pos;
    double tmp2;
    mlist<int> v1;
    mlist<double> v2;

    cin >> n;
    while (n--)
    {
        cin >> tmp1;
        v1.setData(tmp1);
    }
    cin >> pos >> tmp1;
    v1._insert(pos, tmp1);
    cin >> pos;
    v1._delete(pos);
    v1._print();

    cin >> n;
    while (n--)
    {
        cin >> tmp2;
        v2.setData(tmp2);
    }
    cin >> pos >> tmp2;
    v2._insert(pos, tmp2);
    cin >> pos;
    v2._delete(pos);
    v2._print();
    return 0;
}