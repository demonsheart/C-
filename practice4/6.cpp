#include <iostream>
using namespace std;
struct fen
{
    int z1, m1, z2, m2;
    char c;
};

int getGCD(int a, int b);
void addFS(fen s, int &a, int &b);
void subFS(fen s, int &a, int &b);
void mulFS(fen s, int &a, int &b);
void divFS(fen s, int &a, int &b);
void printFS(int a, int b);
int main()
{
    int t, a, b;
    cin >> t;
    fen f;
    while (t--)
    {
        cin >> f.z1 >> f.c >> f.m1;
        cin >> f.z2 >> f.c >> f.m2;
        addFS(f, a, b);
        printFS(a, b);
        subFS(f, a, b);
        printFS(a, b);
        mulFS(f, a, b);
        printFS(a, b);
        divFS(f, a, b);
        printFS(a, b);
        cout << endl;
    }
}
int getGCD(int a, int b)
{
    int r = 1;
    if (a < b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    while (1)
    {
        r = a % b;
        if (r == 0)
            break;
        a = b;
        b = r;
    }
    return b;
}
void addFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2 + s.z2 * s.m1;
    b = s.m1 * s.m2;
}
void subFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2 - s.z2 * s.m1;
    b = s.m1 * s.m2;
}
void mulFS(fen s, int &a, int &b)
{
    a = s.z1 * s.z2;
    b = s.m1 * s.m2;
}
void divFS(fen s, int &a, int &b)
{
    a = s.z1 * s.m2;
    b = s.m1 * s.z2;
}
void printFS(int a, int b)
{
    int q = getGCD(a, b);
    a = a / q;
    b = b / q;
    if (a * b < 0 && a > 0)
    {
        a = -a;
        b = -b;
    }
    cout << a << "/" << b << endl;
}
/*
��Ŀ����
�����ķ��Ӻͷ�ĸ����һ���ṹ��������ʾ��

��дʵ������������(addFS)����(subFS)����(mulFS)����(divFS)�ĺ���(Ҫ������������Ǽ򻯵�)���Լ���ӡһ������(printFS)�����������������Լ���ĺ���(getGCD)��

ע�⣺���ܶ���ȫ�ֱ���

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
��ʾ
������a��b�����Լ���ɲ���շת��������ֳ�ŷ������㷨���䲽��Ϊ:
1. ����a, bʹa > b;
2. ��a��b�õ�����r,��r=0,��bΪ���Լ��,�˳�;
3. ��r��Ϊ0,����b����a, r����b,��ʱa,b������һ�ε�С,�����ģ��С��;
4. ������2����
*/