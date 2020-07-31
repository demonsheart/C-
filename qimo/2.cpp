#include <iostream>
using namespace std;
class Metal
{
private:
    int hard, weight, volume;

public:
    Metal(int h, int w, int v) : hard(h), weight(w), volume(v){};
    void print()
    {
        cout << "硬度" << hard << "--"
             << "重量" << weight << "--"
             << "体积" << volume << endl;
    }
    Metal operator++()
    {
        hard++;
        weight = weight + weight * 0.1;
        volume = volume + volume * 0.1;
        return *this;
    }
    Metal operator--(int)
    {
        Metal tmp(*this);
        hard--;
        int tm1 = weight * 0.1, tm2 = volume * 0.1;
        weight -= tm1;
        volume -= tm2;
        return tmp;
    }
    friend Metal operator+(Metal m1, Metal m2);
    friend Metal operator*(Metal m, int n);
};
Metal operator+(Metal m1, Metal m2)
{
    Metal tmp(m1.hard + m2.hard, m1.weight + m2.weight, m1.volume + m2.volume);
    return tmp;
}
Metal operator*(Metal m, int n)
{
    m.volume *= n;
    return m;
}
int main()
{
    int h, w, v, n;

    cin >> h >> w >> v;
    Metal m1(h, w, v);

    cin >> h >> w >> v;
    Metal m2(h, w, v);
    cin >> n;

    Metal m3 = m1 + m2;
    m3.print();

    Metal m4 = m1 * n;
    m4.print();

    ++m1;
    m1.print();

    m2--;
    m2.print();
    return 0;
}