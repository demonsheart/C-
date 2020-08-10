#include <iostream>
using namespace std;
class complex
{
private:
    double real, imag;

public:
    complex();
    complex(double r, double i);
    complex(complex &c);
    friend complex addCom(complex c1, complex c2);
    friend complex minusCom(complex c1, complex c2);
    friend void outCom(complex c);
};

complex::complex()
{
    real = 0;
    imag = 0;
}
complex::complex(complex &c)
{
    real = c.real;
    imag = c.imag;
}
complex::complex(double r, double i)
{
    real = r;
    imag = i;
}
complex addCom(complex c1, complex c2)
{
    int x, y;
    x = c1.real + c2.real;
    y = c1.imag + c2.imag;
    complex q(x, y);
    return q;
}
complex minusCom(complex c1, complex c2)
{
    int x, y;
    x = c1.real - c2.real;
    y = c1.imag - c2.imag;
    complex q(x, y);
    return q;
}
void outCom(complex c)
{
    cout << "(" << c.real << "," << c.imag << ")" << endl;
}
int main()
{
    int n;
    double r, i;
    char c;

    cin >> r >> i;
    complex s1(r, i);
    cin >> n;
    while (n--)
    {
        cin >> c >> r >> i;
        if (c == '+')
        {
            complex s2(r, i);
            s1 = addCom(s1, s2);
            outCom(s1);
        }
        else if (c == '-')
        {
            complex s2(r, i);
            s1 = minusCom(s1, s2);
            outCom(s1);
        }
        else
        {
            cout << "error!" << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
��������������£�



Ҫ�����£�

1.     ʵ�ָ��������Ԫ����addCom��outCom��


2.   �ο�addCom����Ϊ����������һ����Ԫ����minusCom������ʵ�����������ļ���

3.     ��main�����У�ͨ����Ԫ������ʵ�ָ����ļӼ����͸����������


����
��1�У���1��������ʵ�����鲿

��2�У����������Ĵ�����ע�⣺���������㡣�������ɲο�����

  ��3�п�ʼ��ÿ�������������ͣ��Լ���������ĸ�����ʵ�����鲿����+����ʾ������ӣ���-����ʾ���������

���
 ÿ��������������Ľ�������������ʽΪ��(ʵ��,�鲿)����

��������
10 10
3
+ 20 10
- 15 5
+ 5 25
�������
(30,20)
(15,15)
(20,40)
*/