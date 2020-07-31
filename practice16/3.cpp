#include <iostream>
using namespace std;
class CClock
{
private:
    int a, b, c;

public:
    CClock(int aa, int bb, int cc) : a(aa), b(bb), c(cc) {}
    friend ostream &operator<<(ostream &out, const CClock &c)
    {
        out << c.a << " " << c.b << " " << c.c;
        return out;
    }
    template<class T> friend  T add(T t1, T t2, int scale);
};
class CRmb
{
private:
    int a, b, c;

public:
    CRmb(int aa, int bb, int cc) : a(aa), b(bb), c(cc) {}
    friend ostream &operator<<(ostream &out, const CRmb &c)
    {
        out << c.a << " " << c.b << " " << c.c;
        return out;
    }
    template<class T> friend  T add(T t1, T t2, int scale);
};

template <class T>
T add(T t1, T t2, int scale)
{
    int a = t1.a + t2.a, b = t1.b + t2.b, c = t1.c + t2.c;
    if (c >= scale)
    {
        c -= scale;
        b++;
    }
    if (b >= scale)
    {
        b -= scale;
        a++;
    }
    T result(a, b, c);
    return result;
}
int main()
{
    int a, b, c, s1 = 60, s2 = 10;

    cin >> a >> b >> c;
    CClock c1(a, b, c);

    cin >> a >> b >> c;
    CClock c2(a, b, c);
    CClock c3 = add(c1, c2, s1);
    cout << c3 << endl;

    cin >> a >> b >> c;
    CRmb r1(a, b, c);

    cin >> a >> b >> c;
    CRmb r2(a, b, c);
    CRmb r3 = add(r1, r2, s2);
    cout << r3 << endl;

    return 0;
}