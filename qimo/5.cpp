#include <iostream>
#include <string>
using namespace std;
class CN; //��ǰ����
class EN; //��ǰ����
class Weight
{ //������
protected:
    string kind; //��������
    int gram;    //��
public:
    Weight(string tk = "no name", int tg = 0)
    {
        kind = tk;
        gram = tg;
    }
    virtual void Print(ostream &out) = 0; //�����ͬ���͵ļ�����Ϣ
};
class CN : public Weight
{
private:
    int j, l, q;

public:
    CN() {}
    CN(int xj, int xl, int xq, int xg, string k) : j(xj), l(xl), q(xq), Weight(k, xg) {}
    void Convert(int a)
    {
        j = a / 500;
        a -= j * 500;
        l = a / 50;
        a -= l * 50;
        q = a / 5;
        a -= q * 5;
        gram = a;
    }
    void Print(ostream &out)
    {
        out << "�й�����:" << j << "��" << l << "��" << q << "Ǯ" << gram << "��" << endl;
    }
    friend ostream &operator<<(ostream &out, const Weight &a);
};
class EN : public Weight
{
private:
    int ba, an, da;

public:
    EN(int xb, int xa, int xd, int xg, string k) : ba(xb), an(xa), da(xd), Weight(k, xg) {}
    void Convert(int a)
    {
        ba = a / 512;
        a -= ba * 512;
        an = a / 32;
        a -= an * 32;
        da = a / 2;
        a -= da * 2;
        gram = a;
    }
    operator CN()
    {
        CN res;
        res.Convert(ba * 512 + an * 32 + da * 2 + gram);
        return res;
    }
    void Print(ostream &out)
    {
        out << "Ӣ������:" << ba << "��" << an << "��˾" << da << "����" << gram << "��" << endl;
    }
    friend ostream &operator<<(ostream &out, const Weight &a);
};
//��ȫ�ֺ�����ʽ������������������3-5��....���б�д
//���غ�����������������ostream������Weight����󣬲��������Ƕ�����������
//���غ���������ò���Weight�����Print����
ostream &operator<<(ostream &out, Weight &a)
{
    a.Print(out);
    return out;
}
int main() //������
{
    int tw;
    //����һ���й����������cn
    //���������Ӧ�����Ǯ���ˡ����ͣ����п˺������Ƕ�Ӧ��������gram��kind
    CN cn(0, 0, 0, 0, "�й�����");
    cin >> tw;
    cn.Convert(tw); //������Ŀ���ת���й�����
    cout << cn;

    //����Ӣ�����������en
    //���������Ӧ������˾���������ˡ����ͣ����п˺������Ƕ�Ӧ��������gram��kind
    EN en(0, 0, 0, 0, "Ӣ������");
    cin >> tw;
    en.Convert(tw); //������Ŀ���ת��Ӣ������
    cout << en;
    cn = en; //��Ӣ������ת���й�����
    cout << cn;
    return 0;
}