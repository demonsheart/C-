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
    int t, balance, a, b;
    string name, account;
    BaseAccount *p;

    cin >> t;
    while (t--)
    {
        cin >> name >> account >> balance;
        if (account[1] == 'A')
        {
            p = new BaseAccount(name, account, balance);
            cin >> a >> b;
            p->deposit(a);
            p->withdraw(b);
            cin >> a >> b;
            p->deposit(a);
            p->withdraw(b);
            p->display();
        }
        else if (account[1] == 'P')
        {
            p = new BassPlus(name, account, balance);
            cin >> a >> b;
            p->deposit(a);
            p->withdraw(b);
            cin >> a >> b;
            p->deposit(a);
            p->withdraw(b);
            p->display();
        }
    }
    return 0;
}
/*
题目描述



某银行的支票账户分为两类，一类为基本支票账户BaseAccount，另一类为具有透支保护特性的BasePlus支票账户。



BaseAccount支票账户的信息包括：客户姓名(name)、账户(account)、当前结余(balance)；BaseAccount支票账户可以执行的操作包括：存款(deposit)、取款(withdraw)、显示账户信息(display)。注意：取款金额不能透支，否则显式出错信息“insufficient”。



BasePlus支票账户除包含BaseAccount的所有信息外，还包括以下信息：透支上限(limit：默认为5000)，当前透支总额(limit_sum)；BasePlus支票账户可执行的操作与BaseAccount相同，但有两种操作的实现不同：(1)对于取款操作，可以在透支上限范围内透支，超过则显示出错信息“insufficient”；(2)对于显示操作，必须显示BasePlus的其他信息。


请实现BaseAccount类和BasePlus类，其中BasePlus类继承于BaseAccount类，注意BaseAccount账户名称以BA开头，BasePlus账户名称以BP开头。

要求只使用一个基类指针，指向所建立的对象，然后使用指针调用类中的方法。

输入
测试案例组数 t

第一组测试数据：

第一行输入账户信息：姓名 帐号 当前余额

第二行输入四个整数，表示对账户按顺序存款、取款、存款、取款

第二组测试数据：

.........

输出
输出BaseAccount的信息

输出BasePlus的信息

样例输入
4
Tom BA008 1000
1000 2000 1000 1200
Bob BP009 1000
1000 2000 1000 7000
May BA001 2000
500 1000 500 1000
Lily BP002 1000
500 2000 500 3000
样例输出
insufficient
Tom BA008 Balance:1000
insufficient
Bob BP009 Balance:1000 limit:5000
May BA001 Balance:1000
Lily BP002 Balance:0 limit:2000
*/