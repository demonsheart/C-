#include <iostream>
#include <string>
using namespace std;
class CVip
{
protected:
    int no1, inter1;

public:
    CVip(int n) : no1(n) { inter1 = 0; }
    virtual void shop(float m) { inter1 += m; }
};

class CCredit
{
protected:
    int no2, e, inter2;
    float bill;
    string name;

public:
    CCredit(int n, string na, int ee) : no2(n), name(na), e(ee)
    {
        inter2 = 0;
        bill = 0;
    }
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter2 += m;
            bill += m;
        }
    }
    void refund(float m)
    {
        inter2 -= int(m);
        bill -= m;
    }
};

class CVipCredit : public CVip, public CCredit
{
private:
    /* data */
public:
    CVipCredit(int n1, int n2, string na, int ee) : CVip(n1), CCredit(n2, na, ee) {}
    void shop(float m)
    {
        if (m + bill <= e)
        {
            inter1 += int(m);
            inter2 += int(m);
            bill += m;
        }
    }
    void swipe(float m)
    {
        if (m + bill <= e)
        {
            inter2 += int(m);
            bill += m;
        }
    }
    void trans(float m)
    {
        if (m <= inter2)
        {
            inter2 -= int(m);
            inter1 = inter1 + int(m / 2);
        }
    }
    void display()
    {
        cout << no1 << " " << inter1 << "\n"
             << no2 << " " << name << " " << bill << " " << inter2 << endl;
    }
};

int main()
{
    int no1, no2, e, n;
    float m;
    string name, temp;

    cin >> no1 >> no2 >> name >> e >> n;
    CVipCredit s(no1, no2, name, e);

    while (n--)
    {
        cin >> temp;
        if (temp == "o")
        {
            cin >> m;
            s.shop(m);
        }
        else if (temp == "c")
        {
            cin >> m;
            s.swipe(m);
        }
        else if (temp == "q")
        {
            cin >> m;
            s.CCredit::refund(m);
        }
        else if (temp == "t")
        {
            cin >> m;
            s.trans(m);
        }
    }
    s.display();
    return 0;
}
/*
��Ŀ����
�ó̻�Ա�����л�Ա���ţ�int�����ó̻��֣�int����ͨ����Ա���¶���������������ۼ��ó̻��֡�
���ÿ����п��ţ�int����������string)����ȣ�int)���˵���float)�����ÿ����֣�int����------��ע����������

���ÿ��˿�m���˵����-m�����ÿ����ּ�ȥ�˿��

��ʼ�������ÿ����֡��ó̻��֡��˵����Ϊ0��


�����ó����ÿ��������뿨��Ϣ�����ö����Ա��������ó����µ������ÿ�ˢ�������ÿ��˿���ÿ����ֶһ�Ϊ�ó̻��ֵȲ�����
�����������ݣ������ó̻�Ա���ࡢ���ÿ��࣬�������������ó����ÿ��ಢ����������Ĺ��캯�����������躯����
ͨ���ó����ÿ����ó����µ����ó̻��ֺ����ÿ�����˫�ػ��֣����ó̻��ֺ����ÿ�����ͬʱ���ӣ���
�ó����ÿ����԰�      �ó̻��֣����ÿ�����= 1��2    �ı��������ÿ����ֶһ�Ϊ�ó̻��֡�
���ÿ����ѽ��m�����������˵�����ȣ����������������˵����+m�����ÿ����ְ����ѽ���ۼӡ�
ĳ������վ�������ó�������ĳ�����Ƴ������ۺϷ������������ó����ÿ�������ó̻�Ա�����������ÿ����ܡ�
����
��һ�У������ó̻�Ա���� ���ÿ��� ���� ���
�ڶ��У����Դ���n
�����е���n+2�У�ÿ�У����� �������
o   m���ó����¶������������m��
c   m�����ÿ����ѣ����ѽ��m��
q   m (���ÿ��˿�˿���m��
t    m�����ֶһ���m���ÿ����ֶһ�Ϊ�ó̻��֣�
���
������в������ó����ÿ�����Ϣ��
�ó̺�   �ó̻���
���ÿ���  ����   �˵����   ���ÿ�����
��������
1000 2002  lili  3000
4
o 212.5
c 300
q 117.4
t 200
�������
1000 312
2002 lili 395.1 195
*/