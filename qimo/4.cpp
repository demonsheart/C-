#include <iostream>
using namespace std;
class base
{
protected:
    int no, s;

public:
    base(int n, int t) : no(n), s(t) {}
    base() {}
    virtual void print() {}
};
class ele_fan : virtual public base
{
protected:
    int dir, pos;

public:
    ele_fan(int n, int t, int d, int p) : base(n, t), dir(d), pos(p){};
    ele_fan(int d, int p) : dir(d), pos(p){};
    void ctrl_dir(int n)
    {
        dir = n;
    }
    void ctrl_pos(int n)
    {
        pos = n;
    }
};

class humid : virtual public base
{
protected:
    float max, pra;

public:
    humid(int n, int t, float c, float m) : base(n, t), pra(c), max(m){};
    humid(float c, float m) : pra(c), max(m){};
    int warn()
    {
        if (pra >= max * 0.5)
            return 1;
        else if (pra < max * 0.5 && pra >= max * 0.1)
            return 2;
        else if (pra < max * 0.1)
            return 3;
        return 0;
    }
};

class wet_fan : public ele_fan, public humid
{
private:
    int gear;

public:
    wet_fan(int n, int p, int di, int po, float pr, float max, int g) : base(n, p), ele_fan(di, po), humid(pr, max), gear(g) {}
    void ctrl_gear(int n)
    {
        gear = n;
        if (gear == 1)
        {
            dir = 0;
            pos = 1;
        }
        else if (gear == 2)
        {
            dir = 1;
            pos = 2;
        }
        else if (gear == 3)
        {
            dir = 1;
            pos = 3;
        }
    }
    void print()
    {
        cout << "加湿风扇"
             << "--"
             << "档位" << gear << endl;
        cout << "编号" << no
             << "--"
             << "功率" << s << "W" << endl;
        if (dir == 0)
            cout << "定向吹风";
        else if (dir == 1)
            cout << "旋转吹风";
        cout << "--风力" << pos << "级" << endl;
        cout << "实际水容量" << pra << "升--";
        int tmp = warn();
        if (tmp == 1)
            cout << "水量正常" << endl;
        else if (tmp == 2)
            cout << "水量偏低" << endl;
        else if (tmp == 3)
            cout << "水量不足" << endl;
    }
};

int main()
{
    int t, n, p, di, po, g;
    float pr, max;

    cin >> t;
    while (t--)
    {
        cin >> n >> p >> di >> po >> pr >> max >> g;
        wet_fan w(n, p, di, po, pr, max, g);
        cin >> g;
        w.ctrl_gear(g);
        w.print();
    }
    return 0;
}
/*
题目描述
已知家电有编号、功率的属性，属性都是整数，操作包括构造和打印等

电风扇继承家电的特点，新增两个属性（整数）：风向和风力，其中风向为0表示定向吹风，状态为1表示旋转吹风。
风扇包含两个新操作：风向控制和风力控制
1、风向控制含一个整数参数，无返回，把风向设置为参数值，参数为0表示定向吹风，为1表示旋转吹风。
2、风力控制含一个整数参数，无返回，把风力设置为参数值，参数表示风力级别，例如1级、2级、3级等。
加湿器继承家电的特点，新增两个属性（浮点数）：实际水容量和最大水容量
新增操作是预警，无参数，返回值为整数，当实际水容量不小于最大水容量的50%，则返回1；小于50%且不小于10%则返回2，小于10%则返回3
加湿风扇继承了风扇和加湿器的特点，新增属性档位（整数）
新增操作调整档位，含一个参数，无返回值，先设置档位为参数值，再调用风向控制和风力控制来设置相关属性，包括：
1、参数为0，不做其他属性修改
2、参数为1，设置定向吹风且风力1级
3、参数为2，设置旋转吹风且风力2级
4、参数为3，设置旋转吹风且风力3级
档位只可能是0、1、2、3四个数值，其他数值忽略。
加湿风扇重载打印操作，输出格式参考样本。输出要求如下：
1、如果风向为0，则输出定向吹风，风向为1则输出旋转吹风。
2、调用预警操作，并根据返回结果1、2、3输出不同信息，分别是：水量正常、水量偏低、水量不足
程序要求
1、采用虚拟继承机制实现上述电器的关系，明确谁是虚基类、基类、派生类
2、基类和派生类的构造要考虑虚基类、基类的属性构造
上述所有类属性都不是public，用面向对象思想和C++语言实现上述要求
输入
第一行输入t，表示有t个实例
第二行输入一个加湿风扇的信息，依次包括编号、功率、风向、风力、实际水容量、最大水容量 档位
第三行输入一个参数，表示调档操作的档位，然后执行调档操作。
以此类推，输入t个实例
输出
对于每个实例，调用打印操作输出加湿风扇的最终状态

样例输入
3
1001 1000 1 2 3 4 0
1
2002 2000 0 1 1 12 0
3
3003 3000 0 3 2 10 0
0
样例输出
加湿风扇--档位1
编号1001--功率1000W
定向吹风--风力1级
实际水容量3升--水量正常
加湿风扇--档位3
编号2002--功率2000W
旋转吹风--风力3级
实际水容量1升--水量不足
加湿风扇--档位0
编号3003--功率3000W
定向吹风--风力3级
实际水容量2升--水量偏低
*/