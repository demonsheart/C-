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
/*
题目描述
某电商网站的会员分为：普通、贵宾两个级别

普通会员类Member，包含编号、姓名、积分三个属性，编号和积分是整数，姓名是字符串
操作包括构造、打印、积分累加、积分兑换，操作定义如下：
1、积分累加Add，是根据消费金额累加积分，无返回值，参数是消费金额（整数），积分根据消费金额按1比1的比例累加
2、积分兑换Exchange，是按照每100积分换1元的比例，把积分兑换成现金。参数是要兑换的积分数量，返回值是兑换的现金数量。
注意：兑换积分数量不足100的部分是不能兑换的，例如会员原有500积分，要兑换积分数量为450，则450/100=4，最终用400积分兑换4元，会员余100积分。
3、打印是输出会员信息，格式参考输出样例
贵宾会员类VIP，继承了普通会员的属性与操作，新增两个属性：累加比例(整数)、兑换比例(整数)。并且重定义了所有操作：
1、积分累加中，积分按累加比例进行累加。例如累加比例是2，消费金额100元，则累加积分=100*2=200
2、积分兑换中，按照兑换比例的数值把积分抵扣消费金额。例如兑换比例是90，会员原有500积分，要兑换积分数量为420，则420/90=4，最终用360积分兑换4元，会员余140积分。
3、打印是输出会员信息，格式参考输出样例
  

程序要求
1、采用继承机制实现上述会员关系
2、打印、积分累加和积分兑换都采用虚函数方式，来实现运行多态性
3、派生的构造函数必须考虑基类属性的构造。
4、必须采用以下代码框架，在提示的地方增加代码，其他地方不能修改。
上述所有类属性都不是public，用面向对象思想和C++语言实现上述要求
----参考代码----
class Member {   //普通会员类
//....代码自行编写
};
class VIP .... {  //贵宾会员类
//....代码自行编写
};
int main()
{
	Member * pm; //创建一个基类对象指针
	//....其他变量自行编写
	//输入数据，创建普通会员对象mm
	//使用指针pm执行以下操作：
	//1、pm指向普通会员对象mm
	//2、输入数据，通过pm执行积分累加和积分兑换
	//3、通过pm调用打印方法输出
	//输入数据，创建贵宾会员对象vv
	//使用指针pm执行以下操作：
	//1、pm指向贵宾会员对象vv
	//2、输入数据，通过pm执行积分累加和积分兑换
	//3、通过pm调用打印方法输出
	return 0;

}
输入
第一行输入普通会员的三个信息：编号、姓名、积分
第二行输入两个操作信息：消费金额、积分兑换数量，表示普通会员执行一次积分累加，一次积分兑换
第三行输入贵宾会员的五个信息：编号、姓名、积分、累加比例、兑换比例
第四行输入两个操作信息：消费金额、积分兑换数量，表示贵宾会员执行一次积分累加，一次积分兑换
输出
第一行输出普通会员执行两个操作后的信息，要求调用打印方法
第二行输出贵宾会员执行两个操作后的信息，要求调用打印方法
样例输入
1001 John 500
244 300 
8001 Jane 300 2 90
100 420
样例输出
普通会员1001--John--444
贵宾会员8001--Jane--140
*/