#include <iostream>
#include <cstring>
using namespace std;
class Account
{
private:
    static int count;
    static float InterestRate;
    string _accno, _accname;
    float _balance;

public:
    Account(string accno, string accname, float balance);
    void Deposit(float amount);
    void Withdraw(float amount);
    float GetBalance();
    void show();
    static int GetCount();
    static void SetCount(int a);
    static float GetInterestRate();
    static void SetInterestRate(float a);
    friend void Update(Account &a);
    //  ~Account(){count--;}
};
int Account::count = 0;
float Account::InterestRate = 0;
Account::Account(string accno, string accname, float balance)
{
    _accno = accno;
    _accname = accname;
    _balance = balance;
    //count++
}
void Account::Deposit(float amount)
{
    _balance += amount;
}
void Account::Withdraw(float amount)
{
    _balance -= amount;
}
float Account::GetBalance() { return _balance; }
void Account::show()
{
    cout << _accno << " " << _accname << " ";
}
int Account::GetCount() { return count; }
void Account::SetCount(int a) { count = a; }
float Account::GetInterestRate() { return InterestRate; }
void Account::SetInterestRate(float a) { InterestRate = a; }
void Update(Account &a)
{
    a._balance = a._balance + a._balance * a.InterestRate;
}
int main()
{
    int n;
    string no, name;
    float rate, balance, in, out, sum = 0;
    cin >> rate >> n;
    Account *s[n];
    Account::SetInterestRate(rate);
    Account::SetCount(n);
    for (int i = 0; i < n; i++)
    {
        cin >> no >> name >> balance;
        s[i] = new Account(no, name, balance);
        cin >> in >> out;
        s[i]->show();
        cout << s[i]->GetBalance() + in << " ";
        s[i]->Deposit(in);
        Update(*s[i]);
        cout << s[i]->GetBalance() << " ";
        s[i]->Withdraw(out);
        cout << s[i]->GetBalance() << endl;
        sum += s[i]->GetBalance();
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        delete s[i];
    }
    return 0;
}
/*
��Ŀ����
�����˻���Ļ����������£�



Ҫ�����£�

ʵ�ָ������˻���

Ϊ�˻���Account����һ����Ԫ������ʵ���˻���Ϣ��Ҫ�������Ϣ�������Ϣ���=�˻����+�˻����*���ʣ�����Ԫ����������ʽΪ friend void Update(Account& a);

��main�����У�����һ��Account���͵�ָ�����飬��ÿ��ָ��ָ��̬�����Account���󣬲����ó�Ա�������Դ�ȡ���ʾ�Ⱥ������ٵ�����Ԫ�������Խ��н�Ϣ��

��ҿ��Ը���ʵ�������������������������Ҳ�����޸ĳ�Ա�����Ĳ�������

����
��1�У�����
��2�У��˻���Ŀn
��3�п�ʼ��ÿ����������һ���˻��ġ��˺š��������������������������ȡ������

���
��1�п�ʼ��ÿ�����һ���˻��������Ϣ�������˺š�������������������Ϣ��ȡ�����

���һ����������˻�����

��������
0.01
3
201501 ���� 10000 1000 2000
201502 ���� 20000 2000 4000
201503 ���� 80000 4000 6000
�������
201501 ���� 11000 11110 9110
201502 ���� 22000 22220 18220
201503 ���� 84000 84840 78840
106170
*/