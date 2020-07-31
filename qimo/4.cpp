#include <iostream>
using namespace std;
class base
{
protected:
    int no, s;

public:
    base(int n, int t) : no(n), s(t) {}
    base() {}
    virtual void print() {}
};
class ele_fan : virtual public base
{
protected:
    int dir, pos;

public:
    ele_fan(int n, int t, int d, int p) : base(n, t), dir(d), pos(p){};
    ele_fan(int d, int p) : dir(d), pos(p){};
    void ctrl_dir(int n)
    {
        dir = n;
    }
    void ctrl_pos(int n)
    {
        pos = n;
    }
};

class humid : virtual public base
{
protected:
    float max, pra;

public:
    humid(int n, int t, float c, float m) : base(n, t), pra(c), max(m){};
    humid(float c, float m) : pra(c), max(m){};
    int warn()
    {
        if (pra >= max * 0.5)
            return 1;
        else if (pra < max * 0.5 && pra >= max * 0.1)
            return 2;
        else if (pra < max * 0.1)
            return 3;
        return 0;
    }
};

class wet_fan : public ele_fan, public humid
{
private:
    int gear;

public:
    wet_fan(int n, int p, int di, int po, float pr, float max, int g) : base(n, p), ele_fan(di, po), humid(pr, max), gear(g) {}
    void ctrl_gear(int n)
    {
        gear = n;
        if (gear == 1)
        {
            dir = 0;
            pos = 1;
        }
        else if (gear == 2)
        {
            dir = 1;
            pos = 2;
        }
        else if (gear == 3)
        {
            dir = 1;
            pos = 3;
        }
    }
    void print()
    {
        cout << "加湿风扇"
             << "--"
             << "档位" << gear << endl;
        cout << "编号" << no
             << "--"
             << "功率" << s << "W" << endl;
        if (dir == 0)
            cout << "定向吹风";
        else if (dir == 1)
            cout << "旋转吹风";
        cout << "--风力" << pos << "级" << endl;
        cout << "实际水容量" << pra << "升--";
        int tmp = warn();
        if (tmp == 1)
            cout << "水量正常" << endl;
        else if (tmp == 2)
            cout << "水量偏低" << endl;
        else if (tmp == 3)
            cout << "水量不足" << endl;
    }
};

int main()
{
    int t, n, p, di, po, g;
    float pr, max;

    cin >> t;
    while (t--)
    {
        cin >> n >> p >> di >> po >> pr >> max >> g;
        wet_fan w(n, p, di, po, pr, max, g);
        cin >> g;
        w.ctrl_gear(g);
        w.print();
    }
    return 0;
}