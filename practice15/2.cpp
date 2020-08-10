#include <iostream>
#include <string>
using namespace std;
class CMoney
{
private:
    int y, j, f;

public:
    CMoney() {}
    CMoney(int a, int b, int c) : y(a), j(b), f(c) {}
    friend CMoney operator+(CMoney &r1, CMoney &r2);
    friend CMoney operator-(CMoney &r1, CMoney &r2);
    friend ostream &operator<<(ostream &out, const CMoney &s);
    friend istream &operator>>(istream &in, CMoney &c);
};
istream &operator>>(istream &in, CMoney &c)
{
    in >> c.y >> c.j >> c.f;
    return in;
}
CMoney operator+(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f + r2.y * 100 + r2.j * 10 + r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
CMoney operator-(CMoney &r1, CMoney &r2)
{
    int a = r1.y * 100 + r1.j * 10 + r1.f - r2.y * 100 - r2.j * 10 - r2.f;
    CMoney tmp(a / 100, (a % 100) / 10, a % 10);
    return tmp;
}
ostream &operator<<(ostream &out, const CMoney &s)
{
    out << s.y << "??" << s.j << "??" << s.f << "��?" << endl;
    return out;
}

int main()
{
    int y, j, f, t;
    string order;
    cin >> t;
    while (t--)
    {
        CMoney m, r2;
        cin >> m;
        order = "NULL";
        cin >> order;
        while (order != "stop")
        {
            cin >> r2;
            if (order == "add")
            {
                m = m + r2;
            }
            else if (order == "minus")
            {
                m = m - r2;
            }
            cin >> order;
        }
        cout << m;
    }
    return 0;
}
/*
��Ŀ����
����CMoney�࣬����Ԫ���ǡ����������ݳ�Ա����Ԫ�������ء�+����'-'��ʵ�ֻ��ҵļӼ����㣨����a-b��a�Ľ��ʼ�մ��ڵ���b�Ľ����������롢�����ʵ�ֻ��ҵ����룬�����

��������Ļ���ֵ�����䲻�Ͻ��мӡ�����������������

�ɸ�����Ҫ��ΪCMoney����ӹ��캯����������Ա������

����
���Դ���

ÿ��������ݸ�ʽ���£�

��һ�У���ʼ���ң�Ԫ �� ��

�ڶ��п�ʼ��ÿ��һ��������add Ԫ �� �֣��ӣ���minus Ԫ �� �֣�������stop��������

���
 ��ÿ��������ݣ����������ֹ��Ļ��ҽ����������ʽ��������

��������
2
0 0 0
add 48 9 0
minus 0 5 3
add 18 6 8
add 12 1 2
stop
10 2 5
add 5 8 0
add 32 1 2
minus 10 5 9
minus 37 5 8
stop


�������
79Ԫ1��7��
0Ԫ0��0��
*/