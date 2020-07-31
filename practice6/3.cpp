#include<iostream>
#include<string.h>
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
            cout<<"saving ok!"<<endl;
            check();
        }
    void withdraw(float m)
        {
            balance -= m;
            if(balance>=0)
                cout<<"withdraw ok!"<<endl;
            else
            {
                balance +=m;
                cout<<"sorry! over limit!"<<endl;
            }
            check();
        }
    void check()
        {
            cout<<name<<"'s balance is "<<balance<<endl;
        }
};

int main()
{
    long int a;
    string n;
    float b,c;
    int t = 2;
    while (t--)
    {
        cin>>a>>n>>b;
        CAccount p(a,n,b);
        cin>>c;
        p.deposit(c);
        cin>>c;
        p.withdraw(c);
    }
    return 0;
}