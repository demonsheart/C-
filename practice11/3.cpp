#include <iostream>
#include <string>
using namespace std;
class CAccount
{
protected:
    long int account;
    string name;
    float balance;

public:
    CAccount(long int a, string n, float b)
    {
        account = a;
        name = n;
        balance = b;
        check();
    }
    ~CAccount(){};
    void deposit(float m)
    {
        balance += m;
        cout << "saving ok!" << endl;
        check();
    }
    virtual void withdraw(float m)
    {
        if(m > balance)
        {
            cout << "sorry! over balance!" << endl;
        }
        else
        {
            balance -= m;
            cout << "withdraw ok!" << endl;
        }
        check();
    }
    void check()
    {
        cout << "balance is " << balance << endl;
    }
};

class CCreditcard : public CAccount
{
private:
    float limit;

public:
    CCreditcard(long int a, string n, float b, float l) : CAccount(a, n, b)
    {
        limit = l;
    }
    void withdraw(float m)
    {
        if(m > balance + limit)
        {
            cout << "sorry! over limit!" << endl;
        }
        else
        {
            balance -= m;
            cout << "withdraw ok!" << endl;
        }
        check();
    }
};

int main()
{
    long int a;
    string n;
    float b, c, l;

    cin >> a >> n >> b;
    CAccount p(a, n, b);
    cin >> c;
    p.deposit(c);
    cin >> c;
    p.withdraw(c);

    cin >> a >> n >> b >> l;
    CCreditcard p2(a, n, b, l);
    cin >> c;
    p2.deposit(c);
    cin >> c;
    p2.withdraw(c);

    return 0;
}