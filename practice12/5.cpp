#include <iostream>
#include <string>
using namespace std;
class commomCard
{
protected:
    string ID;
    char CName;
    int balance;

public:
    commomCard(string I, char name, int ba) : ID(I), CName(name), balance(ba) {}
    virtual int save(int a)
    {
        if (a < 0)
            return -1;
        else
        {
            balance += a;
            return 1;
        }
    }
    virtual int take(int a)
    {
        if (a > balance || a < 0)
            return -1;
        else
        {
            balance -= a;
            return 1;
        }
    }
    virtual void info()
    {
        cout << ID << "-" << CName << "-" << balance << endl;
    }
};
class transCard : public commomCard
{
private:
    int Tcount;

public:
    transCard(string I, char name, int ba, int tc) : commomCard(I, name, ba), Tcount(tc) {}
    int transfer(int a)
    {
        if (a > balance)
            return -1;
        else
        {
            balance -= a;
            Tcount += a;
            return 1;
        }
    }
    void info()
    {
        cout << ID << "-" << CName << "-" << balance << "-" << Tcount << endl;
    }
};

class vipCard : public commomCard
{
private:
    int Credit;

public:
    vipCard(string I, char name, int ba, int cre) : commomCard(I, name, ba), Credit(cre) {}
    int over(int a)
    {
        if (a > balance + Credit)
            return -1;
        else
        {
            balance -= a;
            Credit += balance;
            balance = 0;
            return 1;
        }
    }
    void info()
    {
        cout << ID << "-" << CName << "-" << balance << "-" << Credit << endl;
    }
};
void show(commomCard &obj)
{
    obj.info();
}
int main()
{
    string ID;
    char name;
    int balance, a, b, c, d;

    cin >> ID >> name >> balance;
    commomCard c1(ID, name, balance);

    cin >> ID >> name >> balance >> a;
    transCard c2(ID, name, balance, a);

    cin >> ID >> name >> balance >> a;
    vipCard c3(ID, name, balance, a);

    cin >> a >> b >> c >> d;
    c1.save(a);
    c1.save(b);
    c1.take(c);
    c1.take(d);

    cin >> a >> b >> c >> d;
    c2.save(a);
    c2.take(b);
    c2.transfer(c);
    c2.transfer(d);

    cin >> a >> b >> c >> d;
    c3.save(a);
    c3.take(b);
    c3.over(c);
    c3.over(d);

    show(c1);
    show(c2);
    show(c3);

    return 0;
}
/*
��Ŀ����
ĳ���п���Ϊ��ͨ������ͨ������������֣�������ͨ������򵥵Ŀ����������԰������ţ�ID����������CName������Counter����������������ʼ����initial������save����ȡ�take������ѯ��info������ͨ�������Ժͷ���˵������:
1.������һ�����֣������õ�����ĸ��ʾ�������һ���Ǹ�����
2.���������������һ�ʿ����������������������Ϸ�����ֱ�ӷ���-1��ִ�гɹ��򷵻�1
3.ȡ�������������һ�ʿ������������������Ҳ��ܳ��������Ϸ�����ֱ�ӷ���-1��ִ�гɹ��򷵻�1
4.��ѯ������������������Ϣ���������š�����������Ϣ֮���õ����̻�������

��ͨ������ͨ���������棬�������������ǽ�ͨ��Tcounter����ʹ�ý�ͨ���ܹ���������ͨʹ�ã��������ⷽ����ת�ʣ�transfer���������п���Ǯת�뽻ͨ����У�ע��ת�ʽ��ܳ����˻�ԭ�������Ϸ�����ֱ�ӷ���-1��ִ�гɹ��򷵻�1

���������ͨ���������棬�����������������ö�ȣ�Credit����ʹ�ù�����ܹ�͸֧����ȡ����������Ǯ�������Ķ��ⷽ����͸֧��over������ִ��͸֧�����������0���������Ĳ��������ö�����ۼ���ע��͸֧�������ܳ������+���ö�ȣ����Ϸ�����ֱ�ӷ���-1��ִ�гɹ��򷵻�1

ʹ��c++���Ժ���̳з���ʵ���������п��Ĺ���

ע�⣬�����ύ�������ֳ��ඨ�塢��ʵ�֡��������������򣬲���ע�ͱ���

��̬���������������˵���ο����£�



����
��һ������һ����ͨ�������ݣ��ֱ�������š����������
�ڶ�������һ�Ž�ͨ�������ݣ��ֱ�������š�����������ͨ���
����������һ�Ź���������ݣ��ֱ�������š������������ö��
�����������ĸ���������ʾ����ͨ����˳����ִ��2�δ�2��ȡ��
�����������ĸ���������ʾ�Խ�ͨ����˳��ִ��1�δ�1��ȡ�2��ת��
�����������ĸ���������ʾ�Թ������˳��ִ��1�δ�1��ȡ�2��͸֧

���
���ö�̬���������ſ�ִ�в�ѯ����ʾִ����ǰ�����в�����ĸ�������Ϣ��

��ͨ����Ϣ��ʽ������-����-���

����Ϣ��ʽ������-����-���-��ͨ���

�������Ϣ��ʽ������-����-���-͸֧���

ע�⣺��������������ֱ�ӵ������info����������ʹ�ö�̬���������á�

��������
1111 A 100
2222 B 200 0
3333 C 300 3000
49 -51 -100 50
100 150 500 55F
300 200 2000 5000
�������
1111-A-99
2222-B-95-55
3333-C-0-1400
*/