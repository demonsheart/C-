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