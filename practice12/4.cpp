#include <iostream>
#include <string>
using namespace std;
class BaseAccount
{
protected:
    string name, account;
    int balance;

public:
    BaseAccount(string n, string a, int b) : name(n), account(a), balance(b) {}
    void deposit(int a)
    {
        balance += a;
    }
    virtual void withdraw(int a)
    {
        if (a > balance)
            cout << "insufficient" << endl;
        else
            balance -= a;
    }
    virtual void display()
    {
        cout << name << " " << account << " Balance:" << balance << endl;
    }
};

class BassPlus : public BaseAccount
{
private:
    int limit, limit_sum;

public:
    BassPlus(string n, string a, int b) : BaseAccount(n, a, b), limit(5000), limit_sum(5000) {}
    void withdraw(int a)
    {
        if (a > balance + limit_sum)
            cout << "insufficient" << endl;
        else
        {
            balance -= a;
            if (balance < 0)
            {
                limit_sum += balance;
                balance = 0;
            }
        }
    }
    void display()
    {
        cout << name << " " << account << " Balance:" << balance << " limit:" << limit_sum << endl;
    }
};

int main()
{
    int t,balance,a,b;
    string name, account;
    BaseAccount *p;

    cin>>t;
    while (t--)
    {
        cin>>name>>account>>balance;
        if(account[1] == 'A')
        {
            p = new BaseAccount(name,account,balance);
            cin>>a>>b;
            p->deposit(a);
            p->withdraw(b);
            cin>>a>>b;
            p->deposit(a);
            p->withdraw(b);
            p->display();
        }
        else if(account[1]=='P')
        {
            p = new BassPlus(name,account,balance);
            cin>>a>>b;
            p->deposit(a);
            p->withdraw(b);
            cin>>a>>b;
            p->deposit(a);
            p->withdraw(b);
            p->display();
        }  
    }
    return 0;
}