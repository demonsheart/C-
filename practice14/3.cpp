#include <iostream>
#include <string>
using namespace std;
class CVip
{
protected:
    int no1, inter1;

public:
    CVip(int n) : no1(n) { inter1 = 0; }
    virtual void shop(float m) { inter1 += m; }
};

class CCredit
{
protected:
    int no2, e, inter2;
    float bill;
    string name;

public:
    CCredit(int n, string na, int ee) : no2(n), name(na), e(ee)
    {
        inter2 = 0;
        bill = 0;
    }
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter2 += m;
            bill += m;
        }
    }
    void refund(float m)
    {
        inter2 -= int(m);
        bill -= m;
    }
};

class CVipCredit : public CVip, public CCredit
{
private:
    /* data */
public:
    CVipCredit(int n1, int n2, string na, int ee) : CVip(n1), CCredit(n2, na, ee) {}
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter1 += int(m);
            inter2 += int(m);
            bill += m;
        }
    }
    void swipe(float m)
    {
        if(m + bill <= e)
        {
            inter2 += int(m);
            bill += m;
        }
    }
    void trans(float m)
    {
        if (m <= inter2)
        {
            inter2 -= int(m);
            inter1 = inter1 + int(m/2);
        }
    }
    void display()
    {
        cout << no1 << " " << inter1 << "\n"
             << no2 << " " << name << " " << bill << " " << inter2 << endl;
    }
};

int main()
{
    int no1, no2, e, n;
    float m;
    string name, temp;

    cin >> no1 >> no2 >> name >> e >> n;
    CVipCredit s(no1, no2, name, e);

    while (n--)
    {
        cin >> temp;
        if (temp == "o")
        {
            cin >> m;
            s.shop(m);
        }
        else if (temp == "c")
        {
            cin >> m;
            s.swipe(m);
        }
        else if (temp == "q")
        {
            cin >> m;
            s.CCredit::refund(m);
        }
        else if (temp == "t")
        {
            cin >> m;
            s.trans(m);
        }
    }
    s.display();
    return 0;
}