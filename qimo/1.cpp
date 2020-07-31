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
        cout << "��ͨ��Ա" << no << "--" << name << "--" << credit << endl;
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
        cout << "�����Ա" << no << "--" << name << "--" << credit << endl;
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

    //�������ݣ�������ͨ��Ա����mm
    cin >> no >> name >> cre;
    Member mm(no, cre, name);
    //ʹ��ָ��pmִ�����²�����
    //1��pmָ����ͨ��Ա����mm
    pm = &mm;
    //2���������ݣ�ͨ��pmִ�л����ۼӺͻ��ֶһ�
    cin >> n1 >> n2;
    pm->Add(n1);
    pm->Exchange(n2);
    //3��ͨ��pm���ô�ӡ�������
    pm->print();
    //�������ݣ����������Ա����vv
    cin >> no >> name >> cre >> r1 >> r2;
    VIP vv(no, cre, name, r1, r2);
    //ʹ��ָ��pmִ�����²�����
    //1��pmָ������Ա����vv
    pm = &vv;
    //2���������ݣ�ͨ��pmִ�л����ۼӺͻ��ֶһ�
    cin >> n1 >> n2;
    pm->Add(n1);
    pm->Exchange(n2);
    //3��ͨ��pm���ô�ӡ�������
    pm->print();
    return 0;
}