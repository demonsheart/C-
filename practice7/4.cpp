#include <iostream>
using namespace std;
class CFraction
{
private:
    int fz, fm;

public:
    CFraction(){};
    CFraction(int fz_val, int fm_val)
    {
        fz = fz_val;
        fm = fm_val;
    }
    CFraction add(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm + r.fz * fm;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction sub(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm - r.fz * fm;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction mul(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fz;
        f.fm = fm * r.fm;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    CFraction div(const CFraction &r)
    {
        CFraction f(0, 0);
        f.fz = fz * r.fm;
        f.fm = fm * r.fz;
        int n = f.getGCD(f.fz, f.fm);
        f.fz /= n;
        f.fm /= n;
        return f;
    }
    int getGCD(int a, int b);
    void print();
};
void CFraction::print()
{
    if (fm < 0)
    {
        fm = -fm;
        fz = -fz;
    }
    cout << fz << "/" << fm << endl;
}
int CFraction::getGCD(int a, int b)
{
    int c = a % b;
    while (c)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main()
{
    int t, fz, fm, a, b;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> fz >> c >> fm;
        CFraction s1(fz, fm);
        cin >> fz >> c >> fm;
        CFraction s2(fz, fm);
        CFraction q1 = s1.add(s2);
        CFraction q2 = s1.sub(s2);
        CFraction q3 = s1.mul(s2);
        CFraction q4 = s1.div(s2);
        q1.print();
        q2.print();
        q3.print();
        q4.print();
        cout << endl;
    }
}
/*
��Ŀ����
������з������ʵ��:

class CFraction
{
private:
     int fz, fm;
public:
     CFraction(int fz_val, int fm_val) ;
     CFraction add(const CFraction &r);
     CFraction sub(const CFraction &r);
     CFraction mul(const CFraction &r);
     CFraction div(const CFraction &r);
     int getGCD();   // �����ķ��Ӻͷ�ĸ�����Լ��
     void print();
};

������a��b�����Լ���ɲ���շת��������ֳ�ŷ������㷨���䲽��Ϊ:

1. ����a, bʹa > b;
2. ��a��b�õ�����r,��r=0,��bΪ���Լ��,�˳�.
3. ��r��Ϊ0,����b����a, r����b,��ʱa,b������һ�ε�С,�����ģ��С��;
4. ������2����

����
�������ݵ����� t

��һ���һ������

��һ��ڶ�������

�ڶ����һ������

�ڶ���ڶ�������

......

���
��һ�����������ĺ�

��һ�����������Ĳ�

��һ�����������Ļ�

��һ��������������

�ڶ������������ĺ�

�ڶ������������Ĳ�

�ڶ������������Ļ�

�ڶ���������������

......

��������
3
1/2
2/3
3/4
5/8
21/23
8/13
�������
7/6
-1/6
1/3
3/4

11/8
1/8
15/32
6/5

457/299
89/299
168/299
273/184
*/