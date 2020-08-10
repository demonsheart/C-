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
��Ŀ����



ĳ���е�֧Ʊ�˻���Ϊ���࣬һ��Ϊ����֧Ʊ�˻�BaseAccount����һ��Ϊ����͸֧�������Ե�BasePlus֧Ʊ�˻���



BaseAccount֧Ʊ�˻�����Ϣ�������ͻ�����(name)���˻�(account)����ǰ����(balance)��BaseAccount֧Ʊ�˻�����ִ�еĲ������������(deposit)��ȡ��(withdraw)����ʾ�˻���Ϣ(display)��ע�⣺ȡ�����͸֧��������ʽ������Ϣ��insufficient����



BasePlus֧Ʊ�˻�������BaseAccount��������Ϣ�⣬������������Ϣ��͸֧����(limit��Ĭ��Ϊ5000)����ǰ͸֧�ܶ�(limit_sum)��BasePlus֧Ʊ�˻���ִ�еĲ�����BaseAccount��ͬ���������ֲ�����ʵ�ֲ�ͬ��(1)����ȡ�������������͸֧���޷�Χ��͸֧����������ʾ������Ϣ��insufficient����(2)������ʾ������������ʾBasePlus��������Ϣ��


��ʵ��BaseAccount���BasePlus�࣬����BasePlus��̳���BaseAccount�࣬ע��BaseAccount�˻�������BA��ͷ��BasePlus�˻�������BP��ͷ��

Ҫ��ֻʹ��һ������ָ�룬ָ���������Ķ���Ȼ��ʹ��ָ��������еķ�����

����
���԰������� t

��һ��������ݣ�

��һ�������˻���Ϣ������ �ʺ� ��ǰ���

�ڶ��������ĸ���������ʾ���˻���˳���ȡ���ȡ��

�ڶ���������ݣ�

.........

���
���BaseAccount����Ϣ

���BasePlus����Ϣ

��������
4
Tom BA008 1000
1000 2000 1000 1200
Bob BP009 1000
1000 2000 1000 7000
May BA001 2000
500 1000 500 1000
Lily BP002 1000
500 2000 500 3000
�������
insufficient
Tom BA008 Balance:1000
insufficient
Bob BP009 Balance:1000 limit:5000
May BA001 Balance:1000
Lily BP002 Balance:0 limit:2000
*/