#include <iostream>
#include <string>
using namespace std;
class CVip
{
protected:
    int no1, inter1;

public:
    CVip(int n) : no1(n) { inter1 = 0; }
    virtual void shop(float m) { inter1 += m; }
};

class CCredit
{
protected:
    int no2, e, inter2;
    float bill;
    string name;

public:
    CCredit(int n, string na, int ee) : no2(n), name(na), e(ee)
    {
        inter2 = 0;
        bill = 0;
    }
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter2 += m;
            bill += m;
        }
    }
    void refund(float m)
    {
        inter2 -= int(m);
        bill -= m;
    }
};

class CVipCredit : public CVip, public CCredit
{
private:
    /* data */
public:
    CVipCredit(int n1, int n2, string na, int ee) : CVip(n1), CCredit(n2, na, ee) {}
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter1 += int(m);
            inter2 += int(m);
            bill += m;
        }
    }
    void swipe(float m)
    {
        if (m + bill <= e)
        {
            inter2 += int(m);
            bill += m;
        }
    }
    void trans(float m)
    {
        if (m <= inter2)
        {
            inter2 -= int(m);
            inter1 = inter1 + int(m / 2);
        }
    }
    void display()
    {
        cout << no1 << " " << inter1 << "\n"
             << no2 << " " << name << " " << bill << " " << inter2 << endl;
    }
};

int main()
{
    int no1, no2, e, n;
    float m;
    string name, temp;

    cin >> no1 >> no2 >> name >> e >> n;
    CVipCredit s(no1, no2, name, e);

    while (n--)
    {
        cin >> temp;
        if (temp == "o")
        {
            cin >> m;
            s.shop(m);
        }
        else if (temp == "c")
        {
            cin >> m;
            s.swipe(m);
        }
        else if (temp == "q")
        {
            cin >> m;
            s.CCredit::refund(m);
        }
        else if (temp == "t")
        {
            cin >> m;
            s.trans(m);
        }
    }
    s.display();
    return 0;
}
/*
题目描述
旅程会员卡，有会员卡号（int）、旅程积分（int），通过会员卡下订单，按订单金额累计旅程积分。
信用卡，有卡号（int）、姓名（string)、额度（int)、账单金额（float)、信用卡积分（int）。------请注意数据类型

信用卡退款m，账单金额-m，信用卡积分减去退款金额。

初始假设信用卡积分、旅程积分、账单金额为0。


生成旅程信用卡对象，输入卡信息，调用对象成员函数完成旅程网下单、信用卡刷卡、信用卡退款、信用卡积分兑换为旅程积分等操作。
根据上述内容，定义旅程会员卡类、信用卡类，从两者派生出旅程信用卡类并定义三个类的构造函数和其它所需函数。
通过旅程信用卡在旅程网下单，旅程积分和信用卡积分双重积分（即旅程积分和信用卡积分同时增加）。
旅程信用卡可以按      旅程积分：信用卡积分= 1：2    的比例将信用卡积分兑换为旅程积分。
信用卡消费金额m，若加已有账单金额超额度，则不做操作；否则，账单金额+m，信用卡积分按消费金额累加。
某旅游网站（假设旅程网）和某银行推出旅游综合服务联名卡—旅程信用卡，兼具旅程会员卡和银行信用卡功能。
输入
第一行：输入旅程会员卡号 信用卡号 姓名 额度
第二行：测试次数n
第三行到第n+2行，每行：操作 金额或积分
o   m（旅程网下订单，订单金额m）
c   m（信用卡消费，消费金额m）
q   m (信用卡退款，退款金额m）
t    m（积分兑换，m信用卡积分兑换为旅程积分）
输出
输出所有操作后旅程信用卡的信息：
旅程号   旅程积分
信用卡号  姓名   账单金额   信用卡积分
样例输入
1000 2002  lili  3000
4
o 212.5
c 300
q 117.4
t 200
样例输出
1000 312
2002 lili 395.1 195
*/