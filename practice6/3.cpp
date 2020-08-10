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
题目描述
定义一个存折类CAccount，存折类具有帐号（account, long）、姓名（name,char[10])、余额（balance,float）等数据成员，可以实现存款（deposit,操作成功提示“saving ok!”)、取款（withdraw，操作成功提示“withdraw ok!”）和查询余额（check）的操作，取款金额必须在余额范围内，否则提示“sorry! over limit!”。

  编写主函数，建立这个类的对象并测试，输入账号、姓名、余额后，按照查询余额、存款、查询余额、取款、查询余额的顺序调用类方法并输出。

输入
第一个存折的账号、姓名、余额

存款金额

取款金额

第二个存折的账号、姓名、余额

存款金额

取款金额

输出
第一个存折的账户余额

存款操作结果

账户余额

取款操作结果

账户余额

第二个存折的账户余额

存款操作结果

账户余额

取款操作结果

账户余额

样例输入
9111 Tom 1000
500
1000
92220 John 500
500
1500
样例输出
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