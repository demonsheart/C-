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
    friend void Update(Account& a);
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
float Account::GetBalance(){ return _balance;}
void Account::show()
{
    cout<<_accno<<" "<<_accname<<" ";
}
int Account::GetCount(){return count;}
void Account::SetCount(int a){count = a;}
float Account::GetInterestRate(){return InterestRate;}
void Account::SetInterestRate(float a){InterestRate = a;}
void Update(Account& a)
{
    a._balance = a._balance + a._balance * a.InterestRate;
}
int main()
{
    int n;
    string no,name;
    float rate,balance,in,out,sum=0;
    cin>>rate>>n;
    Account *s[n];
    Account::SetInterestRate(rate);
    Account::SetCount(n);
    for (int i = 0; i < n; i++)
    {
        cin>>no>>name>>balance;
        s[i] = new Account(no,name,balance);
        cin>>in>>out;
        s[i]->show();
        cout<<s[i]->GetBalance()+in<<" ";
        s[i]->Deposit(in);
        Update(*s[i]);
        cout<<s[i]->GetBalance()<<" ";
        s[i]->Withdraw(out);
        cout<<s[i]->GetBalance()<<endl;
        sum+=s[i]->GetBalance();
    }
    cout<<sum<<endl;
    for (int i = 0; i < n; i++)
    {
        delete s[i];
    }
    return 0;
}