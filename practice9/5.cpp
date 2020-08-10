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
        cout << "��Ʒ�嵥:" << endl;
        cout << "��Ʒ,��ɫ,����,����,����,С��" << endl;
        for (int i = no - 1; i >= 0; i--)
        {
            p[i]->print();
        }
        cout << "----------" << endl;
        cout << total_num << "����Ʒ,����Ʒ���" << fixed << setprecision(2) << total_price << endl;
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
��Ŀ����
 ����һ����Ʒ�࣬����˽�����ݳ�Ա����Ʒ��š����ơ���ɫ�����롢���ۡ���������Ա�����У������ܼۣ�����*�������������Ʒ��Ϣ�����������ʽ��������������캯�������������ɸ�����Ŀ��Ҫ������ӡ�

����һ�����ﳵ�࣬����˽�����ݳ�Ա����Ʒ���󼯺ϡ���Ʒ���������ﳵ������Ʒ�ܼۡ������У������Ʒ��ɾ����Ʒ��������Ʒ������������Ʒ������������ﳵ�е���Ʒ�嵥�����캯�������������ɸ�����Ŀ��Ҫ������ӡ�

��д��������������������󣬸������������롢���ʵ�ֹ��ﳵ�ļ�ģ�⡣

���ﳵ�����ֱ���ADD��DELETE��UP��DOWN��ʾ�������ʽ�������£�

ADD ��Ʒ��� ��Ʒ���� ��ɫ ���� ����  ����    //���1������ͬ����Ʒ�������ﳵ����ָ�������Ʒ��ֻ���������������ޣ�����ڹ��ﳵ�ײ���

DELETE ��Ʒ���    //ɾ�����ﳵ�и�����Ʒ��ŵ�������Ʒ��������ɾ�����ɹ�������������ﳵ��һ���и�����ŵ���Ʒ��

UP ��Ʒ���       //���ﳵ����Ʒ��ŵ���Ʒ������1�������ڲ������ɹ��������

DOWN ��Ʒ���   //���ﳵ����Ʒ��ŵ���Ʒ������1������СΪ1��

Ϊ���������Ŀ�����ھ������ﳵ���Բ����������е�������Դ�ڸ���վ��������ɫ�ͳ��롣Ϊ����Ŀ������ͬһ��Ʒ��ͬ��ɫ�����룬��ͬ��š�

����
 ���Դ���t

ÿ���������Ϊ��

���ﳵ��������n�����n�в�����

���
��ÿ��������ݣ��������������Ĺ��ﳵ��Ʒ�嵥�������ʽ����������Ʒͳ��ǰ���10��-���š����в������ݲ���������Ĺ��ﳵ���ǿա�

��������
1
8
ADD 2018040801 ������Ƶ��ů�յ�KFR-26GW  ��1ƥ  ��Ƶ�һ�  2999  1
ADD 2018040802 ����65D2P����HDRƽ��LEDҺ�� 1 1 4799 1
ADD 2018040803 ����LED55X9�˹�����ƽ����ӻ� null 55�� 4999 1
UP 2018040802
UP 2018040803
DOWN 2018040803
DELETE 2018040802
ADD 2018040802 ����65D2P����HDRƽ��LEDҺ�� 1 1 4799 2
�������
��Ʒ�嵥:
��Ʒ,��ɫ,����,����,����,С��
����65D2P����HDRƽ��LEDҺ��,1,1,4799.00,2,9598.00
����LED55X9�˹�����ƽ����ӻ�,null,55��,4999.00,1,4999.00
������Ƶ��ů�յ�KFR-26GW,��1ƥ,��Ƶ�һ�,2999.00,1,2999.00
----------
4����Ʒ,����Ʒ���17596.00
*/