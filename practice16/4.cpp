#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
struct plural
{
    int real, imag;
    friend ostream &operator<<(ostream &os, plural &tmp)
    {
        if (tmp.real >= 0)
            os << tmp.imag << '+' << tmp.real;
        else
            os << tmp.imag << tmp.real;
        return os;
    }
};

template <class T>
string _reverse(T a)
{
    ostringstream os;
    string s;

    os << a;
    s = os.str();
    int fg1 = 0; //����
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '-' || s[i] == '+') //���ַ����м��������Ŷ��Ը���
        {
            fg1 = 1;
            break;
        }
    }
    if (fg1)
        return s;
    int fg2 = 0; //����
    if (s[0] == '-')
    {
        fg2 = 1;
        s.erase(s.begin()); //��ȥ������
    }
    reverse(s.begin(), s.end());             //��ת
    while (s.front() == '0' && s.size() > 1) //ȥ��ǰ������0
        s.erase(s.begin());
    if (fg2) //������
        s = '-' + s;
    return s;
}
int main()
{
    int t;
    char cmd;
    string result;

    cin >> t;
    while (t--)
    {
        cin >> cmd;
        if (cmd == 'I')
        {
            int s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'D')
        {
            double s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'S')
        {
            string s;
            cin >> s;
            result = _reverse(s);
            cout << result << endl;
        }
        else if (cmd == 'C')
        {
            int a, b;
            cin >> a >> b;
            plural s{a, b};
            result = _reverse(s);
            cout << result << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
��дһ������������ݵĺ���ģ��reverse��������������ʵ���鲿�û�����

����
��һ��������Դ���

ÿ�β�������һ�У�������һ����д��ĸ��ʾ��������, I��ʾ���͡�D��ʾ˫�����͡�S��ʾstring�����ַ�����C��ʾ�������������������ݡ�

���
ÿ�β������һ�У��������е�����

��������
5
I 123456
D -235.172
S thisisatest
C -123 456
C 123 -456
�������
654321
-271.532
tsetasisiht
456-123
-456+123
��ʾ
��������ת�����������������ת��Ϊstring.
ģ�庯���ڲ���������ʾ�ķ����ɽ���ֵ�ͱ���aת����string�ͱ���s:
#include "sstream"
......
ostringstream os;
string s;

os << a;
s = os.str();
*/