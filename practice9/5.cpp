#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Goods
{
private:
    int num;
    float price;
    string id, name, color, size;

public:
    Goods(string id, string name, string color, string size, float price, int no)
    {
        this->id = id;
        this->name = name;
        this->color = color;
        this->size = size;
        this->price = price;
        this->num = no;
    }
    Goods(Goods &r)
    {
        id = r.id;
        name = r.name;
        color = r.color;
        size = r.size;
        price = r.price;
        num = r.num;
    }
    friend class cart;
    float to_price() { return (price * num); }
    void print()
    {
        cout << name << "," << color << "," << size << ",";
        cout << fixed << setprecision(2) << price << "," << num << ",";
        cout << fixed << setprecision(2) << to_price() << endl;
    }
};
class cart
{
private:
    float total_price;
    int no, total_num;
    Goods **p;

public:
    cart();
    ~cart();
    void ADD(string n, string name, string color, string size, float price, int num)
    {
        if (no == 0)
        {
            p[no] = new Goods(n, name, color, size, price, num);
            no++;
            total_num++;
            total_price += price * num;
        }
        else
        {
            int j, flag = 0, k = no;
            for (j = 0; j < no; j++)
            {
                if (p[j]->id == n)
                {
                    flag = 1;
                    while (k--)
                        UP(n);
                    break;
                }
            }
            if (flag == 0)
            {
                p[no] = new Goods(n, name, color, size, price, num);
                no++;
                total_num += num;
                total_price += price * num;
            }
        }
    }

    void DELETE(string id)
    {
        for (int i = 0; i < no; i++)
        {
            if (p[i]->id == id)
            {
                total_price -= p[i]->price * p[i]->num;
                total_num -= p[i]->num;
                delete p[i];
                for (int j = i; j < no - 1; j++)
                {
                    p[j] = new Goods(*p[j + 1]);
                }
                break;
            }
        }
        no--;
    }

    void UP(string id)
    {
        for (int i = 0; i < no; i++)
        {
            if (p[i]->id == id)
            {
                p[i]->num++;
                total_price += p[i]->price;
                break;
            }
        }
        total_num++;
    }

    void DOWN(string id)
    {
        for (int i = 0; i < no; i++)
        {
            if (p[i]->id == id)
            {
                if (p[i]->num == 1)
                {
                    DELETE(p[i]->id);
                }
                else
                {
                    p[i]->num--;
                }
                total_price -= p[i]->price;
                break;
            }
        }
        total_num--;
    }

    void SHOW()
    {
        cout << "商品清单:" << endl;
        cout << "商品,颜色,尺码,单价,数量,小计" << endl;
        for (int i = no - 1; i >= 0; i--)
        {
            p[i]->print();
        }
        cout << "----------" << endl;
        cout << total_num << "件商品,总商品金额" << fixed << setprecision(2) << total_price << endl;
    }
};

cart::cart()
{
    no = 0;
    total_price = 0;
    total_num = 0;
    p = new Goods *[20];
}

cart::~cart()
{
    for (int i = 0; i < no; i++)
    {
        delete p[i];
    }
    delete[] p;
}

int main()
{
    int t, n, sum;
    string no, name, color, size, c;
    float price;
    cin >> t;
    while (t--)
    {
        cart s;
        cin >> n;
        while (n--)
        {
            cin >> c;
            if (c == "ADD")
            {
                cin >> no >> name >> color >> size >> price >> sum;
                s.ADD(no, name, color, size, price, sum);
            }
            if (c == "DELETE")
            {
                cin >> no;
                s.DELETE(no);
            }
            if (c == "UP")
            {
                cin >> no;
                s.UP(no);
            }
            if (c == "DOWN")
            {
                cin >> no;
                s.DOWN(no);
            }
        }
        s.SHOW();
    }
    return 0;
}
/*
题目描述
 定义一个商品类，包含私有数据成员：商品编号、名称、颜色、尺码、单价、数量。成员函数有：计算总价（单价*数量）、输出商品信息。具体输出格式见样例输出。构造函数及其它函数可根据题目需要自行添加。

定义一个购物车类，包含私有数据成员：商品对象集合、商品总数、购物车所有商品总价。方法有：添加商品、删除商品、减少商品数量、增加商品数量，输出购物车中的商品清单。构造函数及其它函数可根据题目需要自行添加。

编写主函数，定义上述类对象，根据样例的输入、输出实现购物车的简单模拟。

购物车操作分别用ADD、DELETE、UP、DOWN表示，具体格式描述如下：

ADD 商品编号 商品名称 颜色 尺码 单价  数量    //添加1个或多个同类商品，若购物车已有指定编号商品，只需增加数量；若无，添加在购物车首部。

DELETE 商品编号    //删除购物车中给定商品编号的所有商品，不存在删除不成功的情况，即购物车中一定有给定编号的物品。

UP 商品编号       //购物车中商品编号的商品数量加1，不存在操作不成功的情况。

DOWN 商品编号   //购物车中商品编号的商品数量减1，且最小为1。

为更好理解题目，可在京东购物车里试操作。样例中的数据来源于该网站，包括颜色和尺码。为简化题目，假设同一商品不同颜色、尺码，不同编号。

输入
 测试次数t

每组测试数据为：

购物车操作次数n，后跟n行操作。

输出
对每组测试数据，输出操作结束后的购物车商品清单，输出格式见样例，商品统计前输出10个-符号。所有测试数据操作结束后的购物车均非空。

样例输入
1
8
ADD 2018040801 格力变频冷暖空调KFR-26GW  大1匹  变频挂机  2999  1
ADD 2018040802 长虹65D2P高清HDR平板LED液晶 1 1 4799 1
ADD 2018040803 康佳LED55X9人工智能平板电视机 null 55寸 4999 1
UP 2018040802
UP 2018040803
DOWN 2018040803
DELETE 2018040802
ADD 2018040802 长虹65D2P高清HDR平板LED液晶 1 1 4799 2
样例输出
商品清单:
商品,颜色,尺码,单价,数量,小计
长虹65D2P高清HDR平板LED液晶,1,1,4799.00,2,9598.00
康佳LED55X9人工智能平板电视机,null,55寸,4999.00,1,4999.00
格力变频冷暖空调KFR-26GW,大1匹,变频挂机,2999.00,1,2999.00
----------
4件商品,总商品金额17596.00
*/