#include <iostream>
#include <string>
using namespace std;
class commomCard
{
protected:
    string ID;
    char CName;
    int balance;

public:
    commomCard(string I, char name, int ba) : ID(I), CName(name), balance(ba) {}
    virtual int save(int a)
    {
        if (a < 0)
            return -1;
        else
        {
            balance += a;
            return 1;
        }
    }
    virtual int take(int a)
    {
        if (a > balance || a < 0)
            return -1;
        else
        {
            balance -= a;
            return 1;
        }
    }
    virtual void info()
    {
        cout << ID << "-" << CName << "-" << balance << endl;
    }
};
class transCard : public commomCard
{
private:
    int Tcount;

public:
    transCard(string I, char name, int ba, int tc) : commomCard(I, name, ba), Tcount(tc) {}
    int transfer(int a)
    {
        if (a > balance)
            return -1;
        else
        {
            balance -= a;
            Tcount += a;
            return 1;
        }
    }
    void info()
    {
        cout << ID << "-" << CName << "-" << balance << "-" << Tcount << endl;
    }
};

class vipCard : public commomCard
{
private:
    int Credit;

public:
    vipCard(string I, char name, int ba, int cre) : commomCard(I, name, ba), Credit(cre) {}
    int over(int a)
    {
        if (a > balance + Credit)
            return -1;
        else
        {
            balance -= a;
            Credit += balance;
            balance = 0;
            return 1;
        }
    }
    void info()
    {
        cout << ID << "-" << CName << "-" << balance << "-" << Credit << endl;
    }
};
void show(commomCard &obj)
{
    obj.info();
}
int main()
{
    string ID;
    char name;
    int balance, a, b, c, d;

    cin >> ID >> name >> balance;
    commomCard c1(ID, name, balance);

    cin >> ID >> name >> balance >> a;
    transCard c2(ID, name, balance, a);

    cin >> ID >> name >> balance >> a;
    vipCard c3(ID, name, balance, a);

    cin >> a >> b >> c >> d;
    c1.save(a);
    c1.save(b);
    c1.take(c);
    c1.take(d);

    cin >> a >> b >> c >> d;
    c2.save(a);
    c2.take(b);
    c2.transfer(c);
    c2.transfer(d);

    cin >> a >> b >> c >> d;
    c3.save(a);
    c3.take(b);
    c3.over(c);
    c3.over(d);

    show(c1);
    show(c2);
    show(c3);

    return 0;
}
