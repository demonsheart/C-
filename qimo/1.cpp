#include <iostream>
#include <string>
using namespace std;
class Member
{
protected:
    int no, credit;
    string name;

public:
    Member(int n, int c, string na) : no(n), credit(c), name(na){};
    virtual void print()
    {
        cout << "普通会员" << no << "--" << name << "--" << credit << endl;
    }
    virtual void Add(int num)
    {
        credit += num;
    }
    virtual int Exchange(int num)
    {
        if (num > credit)
            return 0;
        int tmp = num / 100;
        credit -= tmp * 100;
        return tmp;
    }
};
class VIP : public Member
{
private:
    int rate1, rate2;

public:
    VIP(int n, int c, string na, int b1, int b2) : Member(n, c, na), rate1(b1), rate2(b2){};
    virtual void print()
    {
        cout << "贵宾会员" << no << "--" << name << "--" << credit << endl;
    }
    virtual void Add(int num)
    {
        credit = credit + rate1 * num;
    }
    virtual int Exchange(int num)
    {
        if (num > credit)
            return 0;
        int tmp = num / rate2;
        credit -= tmp * rate2;
        return tmp;
    }
};

int main()
{
    Member *pm;
    int no, cre, r1, r2, n1, n2;
    string name;

    //输入数据，创建普通会员对象mm
    cin >> no >> name >> cre;
    Member mm(no, cre, name);
    //使用指针pm执行以下操作：
    //1、pm指向普通会员对象mm
    pm = &mm;
    //2、输入数据，通过pm执行积分累加和积分兑换
    cin >> n1 >> n2;
    pm->Add(n1);
    pm->Exchange(n2);
    //3、通过pm调用打印方法输出
    pm->print();
    //输入数据，创建贵宾会员对象vv
    cin >> no >> name >> cre >> r1 >> r2;
    VIP vv(no, cre, name, r1, r2);
    //使用指针pm执行以下操作：
    //1、pm指向贵宾会员对象vv
    pm = &vv;
    //2、输入数据，通过pm执行积分累加和积分兑换
    cin >> n1 >> n2;
    pm->Add(n1);
    pm->Exchange(n2);
    //3、通过pm调用打印方法输出
    pm->print();
    return 0;
}