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
        if (m > balance)
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
        if (m > balance + limit)
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
/*
��Ŀ����
  ����һ��������CAccount������������ʺţ�account, long����������name,char[10])����balance,float�������ݳ�Ա������ʵ�ִ�deposit,�����ɹ���ʾ��saving ok!��)��ȡ�withdraw�������ɹ���ʾ��withdraw ok!�����Ͳ�ѯ��check���Ĳ�����ȡ�����������Χ�ڣ�������ʾ��sorry! over balance!�����Ӵ��������������ÿ���CCreditcard�����ÿ���������͸֧�޶limit,float��һ�����ݳ�Ա����ȡ����������޸ģ��������޶Χ��͸֧��������Χȡ����ʾ��sorry! over limit!����

  ��д��������������������Ķ��󲢲���֮��

 1.���ڴ����࣬�����˺š����������󣬰��ղ�ѯ������ѯ��ȡ���ѯ����˳������෽���������

 2.�������ÿ��࣬�����˺š���������͸֧�޶�󣬰��ղ�ѯ������ѯ��ȡ���ѯ����˳������෽���������

����
�˺� ���� ���

�����

ȡ����

�˺� ���� ��� ͸֧�޶�

�����

ȡ����

���
�˻����

���������

�˻����

ȡ��������

�˻����

�˻����

���������

�˻����

ȡ��������

�˻����

��������
1000 Tom 1000
500
1000
2000 John 500 500
500
1501
�������
balance is 1000
saving ok!
balance is 1500
withdraw ok!
balance is 500
balance is 500
saving ok!
balance is 1000
sorry! over limit!
balance is 1000
*/