#include <iostream>
#include <string.h>
using namespace std;
class CAccount
{
private:
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
    void withdraw(float m)
    {
        balance -= m;
        if (balance >= 0)
            cout << "withdraw ok!" << endl;
        else
        {
            balance += m;
            cout << "sorry! over limit!" << endl;
        }
        check();
    }
    void check()
    {
        cout << name << "'s balance is " << balance << endl;
    }
};

int main()
{
    long int a;
    string n;
    float b, c;
    int t = 2;
    while (t--)
    {
        cin >> a >> n >> b;
        CAccount p(a, n, b);
        cin >> c;
        p.deposit(c);
        cin >> c;
        p.withdraw(c);
    }
    return 0;
}
/*
��Ŀ����
����һ��������CAccount������������ʺţ�account, long����������name,char[10])����balance,float�������ݳ�Ա������ʵ�ִ�deposit,�����ɹ���ʾ��saving ok!��)��ȡ�withdraw�������ɹ���ʾ��withdraw ok!�����Ͳ�ѯ��check���Ĳ�����ȡ�����������Χ�ڣ�������ʾ��sorry! over limit!����

  ��д�����������������Ķ��󲢲��ԣ������˺š����������󣬰��ղ�ѯ������ѯ��ȡ���ѯ����˳������෽���������

����
��һ�����۵��˺š����������

�����

ȡ����

�ڶ������۵��˺š����������

�����

ȡ����

���
��һ�����۵��˻����

���������

�˻����

ȡ��������

�˻����

�ڶ������۵��˻����

���������

�˻����

ȡ��������

�˻����

��������
9111 Tom 1000
500
1000
92220 John 500
500
1500
�������
Tom's balance is 1000
saving ok!
Tom's balance is 1500
withdraw ok!
Tom's balance is 500
John's balance is 500
saving ok!
John's balance is 1000
sorry! over limit!
John's balance is 1000
*/