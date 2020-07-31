#include <iostream>
#include <string>
using namespace std;
class CPeople
{
protected:
    string id, name;

public:
    CPeople() {}
};
class CInternetUser : public CPeople
{
protected:
    string password;

public:
    CInternetUser() {}
    void registerUser(string p1, string p2, string p3)
    {
        id = p2;
        name = p1;
        password = p3;
    }
    bool login(string p1, string p2)
    {
        if (p1 == id && p2 == password)
            return true;
        else
            return false;
    }
};

class CBankCustome : public CPeople
{
protected:
    double balance;

public:
    CBankCustome() { balance = 0; }
    void openAccount(string p1, string p2)
    {
        name = p1;
        id = p2;
    }
    void deposit(double m)
    {
        balance += m;
    }
    int withdraw(double m)
    {
        if (m > balance)
            return 0;
        else
        {
            balance -= m;
            return 1;
        }
    }
};

class CInternetBankCustomer : public CInternetUser, public CBankCustome
{
private:
    double nowbalance, prebalance, profit, wInterest, prewInterest;

public:
    CInternetBankCustomer() { nowbalance = prebalance = profit = wInterest = prewInterest = 0; }
    void setInterest(double i)
    {
        prewInterest = wInterest;
        wInterest = i;
    }
    bool login(string p1, string p2)
    {
        if (CInternetUser::id == CBankCustome::id &&
            CInternetUser::name == CBankCustome::name &&
            p1 == CBankCustome::id &&
            p2 == password)
            return true;
        else
            return false;
    }
    int deposit(double m)
    {
        if (CBankCustome::withdraw(m))
        {
            nowbalance += m;
            return 1;
        }
        return 0;
    }
    int withdraw(double m)
    {
        if (m > nowbalance)
            return 0;
        else
        {
            nowbalance -= m;
            CBankCustome::deposit(m);
            return 1;
        }
    }
    void calculateProfit()
    {
        profit = prewInterest * (prebalance / 10000.0);
        nowbalance += profit;
        prebalance = nowbalance;
    }
    void print()
    {
        cout << "Name: " << CBankCustome::name << " ID: " << CBankCustome::id << "\nBank balance: " << balance
             << "\nInternet bank balance: " << nowbalance << "\n"
             << endl;
    }
};

int main()
{
    int t, no_of_days, i;
    string i_xm, i_id, i_mm, b_xm, b_id, ib_id, ib_mm;
    double money, interest;
    char op_code;

    //输入测试案例数t
    cin >> t;
    while (t--)
    {
        //输入互联网用户注册时的用户名,id,登陆密码
        cin >> i_xm >> i_id >> i_mm;

        //输入银行开户用户名,id
        cin >> b_xm >> b_id;

        //输入互联网用户登陆时的id,登陆密码
        cin >> ib_id >> ib_mm;

        CInternetBankCustomer ib_user;

        ib_user.registerUser(i_xm, i_id, i_mm);
        ib_user.openAccount(b_xm, b_id);

        if (ib_user.login(ib_id, ib_mm) == 0) //互联网用户登陆,若id与密码不符;以及银行开户姓名和id与互联网开户姓名和id不同
        {
            cout << "Password or ID incorrect" << endl;
            continue;
        }

        //输入天数
        cin >> no_of_days;
        for (i = 0; i < no_of_days; i++)
        {
            //输入操作代码, 金额, 当日万元收益
            cin >> op_code >> money >> interest;
            switch (op_code)
            {
            case 'S': //从银行向互联网金融帐户存入
            case 's':
                if (ib_user.deposit(money) == 0)
                {
                    cout << "Bank balance not enough" << endl;
                    continue;
                }
                break;
            case 'T': //从互联网金融转入银行帐户
            case 't':
                if (ib_user.withdraw(money) == 0)
                {
                    cout << "Internet bank balance not enough" << endl;
                    continue;
                }
                break;
            case 'D': //直接向银行帐户存款
            case 'd':
                ib_user.CBankCustome::deposit(money);
                break;
            case 'W': //直接从银行帐户取款
            case 'w':
                if (ib_user.CBankCustome::withdraw(money) == 0)
                {
                    cout << "Bank balance not enough" << endl;
                    continue;
                }
                break;
            default:
                cout << "Illegal input" << endl;
                continue;
            }
            ib_user.setInterest(interest);
            ib_user.calculateProfit();
            //输出用户名,id
            //输出银行余额
            //输出互联网金融账户余额
            ib_user.print();
        }
    }
    return 0;
}