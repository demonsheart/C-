#include <iostream>
#include <cstring>
using namespace std;
class CTelNumber
{
private:
    char *p;

public:
    CTelNumber(char *q);
    CTelNumber(CTelNumber &s);
    ~CTelNumber();
    void print();
};

CTelNumber::CTelNumber(char *q)
{
    p = new char[8];
    for (int i = 0; i < 8; i++)
        p[i] = q[i];
}
CTelNumber::CTelNumber(CTelNumber &s)
{
    char c;
    if (s.p[0] == '2' || s.p[0] == '3' || s.p[0] == '4')
        c = '8';
    else
        c = '2';
    p = new char[9];
    p[0] = c;
    for (int i = 1; i < 9; i++)
        p[i] = s.p[i - 1];
}
CTelNumber::~CTelNumber()
{
    delete[] p;
}
void CTelNumber::print()
{
    cout << p << endl;
}
int judge(char p[])
{
    int i;
    if (p[0] <= '1' || p[0] >= '9')
        return 0;
    else if (strlen(p) != 7)
        return 0;

    else
    {
        for (i = 1; i < 7; i++)
        {
            if (p[i] < '0' || p[i] > '9')
                return 0;
        }
        return 1;
    }
}
int main()
{
    int t;
    char q[8];
    cin >> t;
    while (t--)
    {
        cin >> q;
        if (judge(q))
        {
            CTelNumber oldtel(q);
            CTelNumber newtel(oldtel);
            newtel.print();
        }
        else
            cout << "Illegal phone number" << endl;
    }
}
/*
��Ŀ����
����һ���绰������CTelNumber,����1���ַ�ָ�����ݳ�Ա,�Լ����졢��������ӡ���������캯����

�ַ�ָ�������ڶ�̬����һ���ַ����飬Ȼ�󱣴���������ĵ绰����

���캯���Ĺ�����Ϊ�������ü��������7λ�绰���룬

�������캯���Ĺ�������ԭ��7λ����Ķ�����λΪ8λ�������,Ҳ����˵��������Ķ�����Դ���������.�绰��λ�Ĺ�����ԭ2��3��4��ͷ�ĵ绰����ǰ���8��ԭ5��6��7��8��ͷ��ǰ���2��

ע��:�绰����ֻ��ȫ���������ַ�������������������������Ϊ�Ƿ�)

����
�������ݵ����� t

��һ��7λ����

�ڶ���7λ����

......

���
��һ��������λ��ĺ���

�ڶ���������λ��ĺ���

......

��������������ɹ��������������Ϣ�����忴ʾ��

��������
3
6545889
3335656
565655
�������
26545889
83335656
Illegal phone number
*/