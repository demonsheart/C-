#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
struct str
{
    string s;
    bool operator<(str &rhs)
    {
        return s.compare(rhs.s) < 0;
    }
    friend ostream &operator<<(ostream &os, const str &rhs)
    {
        os << rhs.s;
        return os;
    }
};

class Point
{
private:
    double x, y;

public:
    Point(double xx, double yy) : x(xx), y(yy) {}
    template <class T>
    friend void mysort(vector<T> &v);
    operator double()
    {
        return sqrt(x * x + y * y);
    }
    friend ostream &operator<<(ostream &os, const Point &p)
    {
        os << "(" << fixed << setprecision(1) << p.x << ", " << fixed << setprecision(1) << p.y << ")";
        return os;
    }
};
template <class T>
void mysort(vector<T> &v)
{
    int len = v.size();
    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j < len - 1; ++j)
        {
            if (v[j + 1] < v[j])
                swap(v[j], v[j + 1]);
        }
    }
}
template <class T>
void print(vector<T> &v)
{
    for (int i = 0; i < (int)v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    int t, n;
    char typ;

    cin >> t;
    while (t--)
    {
        cin >> typ >> n;
        if (typ == 'I')
        {
            int tmp;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'D')
        {
            double tmp;
            vector<double> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'P')
        {
            double x, y;
            vector<Point> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> x >> y;
                Point tmp(x, y);
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
        else if (typ == 'S')
        {
            str tmp;
            vector<str> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp.s;
                v.push_back(tmp);
            }
            mysort(v);
            print(v);
        }
    }
    return 0;
}