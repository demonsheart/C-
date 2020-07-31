#include <iostream>
#include <string>
using namespace std;
class CMoney
{
private:
    int y, j, f;

public:
    CMoney() {}
    CMoney(int a, int b, int c) : y(a), j(b), f(c) {}
    friend CMoney operator+(CMoney &r1, CMoney &r2);
    friend CMoney operator-(CMoney &r1, CMoney &r2);
    friend ostream &operator<<(ostream &out, const CMoney &s);
    friend istream &operator>>(istream &in, CMoney &c);
};
istream &operator>>(istream &in, CMoney &c)
{
    in >> c.y >> c.j >> c.f;
    return in;
}
CMoney operator+(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f + r2.y * 100 + r2.j * 10 + r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
CMoney operator-(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f - r2.y * 100 - r2.j * 10 - r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
ostream &operator<<(ostream &out, const CMoney &s)
{
    out << s.y << "Ôª" << s.j << "½Ç" << s.f << "·Ö" << endl;
    return out;
}

int main()
{
    int y, j, f, t;
    string order;
    cin >> t;
    while (t--)
    {
        CMoney m, r2;
        cin >> m;
        order = "NULL";
        cin >> order;
        while (order != "stop")
        {
            cin >> r2;
            if (order == "add")
            {
                m = m + r2;
            }
            else if (order == "minus")
            {
                m = m - r2;
            }
            cin >> order;
        }
        cout << m;
    }
    return 0;
}