#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int square(int a);
float sq(float f);
void up(char *p);
int main()
{
    int t;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> c;
        if (c == 'I')
        {
            int a;
            cin >> a;
            int (*p1)(int);
            p1 = square;
            a = (*p1)(a);
            cout << a << endl;
        }
        else if (c == 'F')
        {
            float f;
            cin >> f;
            float (*p2)(float);
            p2 = sq;
            f = (*p2)(f);
            cout << f << endl;
        }
        else if (c == 'S')
        {
            char p[100];
            cin >> p;
            void (*p3)(char *);
            p3 = up;
            (*p3)(p);
            cout << p << endl;
        }
        else
            cout << "error!" << endl;
    }
    return 0;
}
int square(int a)
{
    a = a * a;
    return a;
}
float sq(float f)
{
    f = sqrt(f);
    return f;
}
void up(char *p)
{
    int n = strlen(p);
    for (int i = 0; i < n; ++i)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
            p[i] = p[i] - 'a' + 'A';
    }
}
/*
��Ŀ������
���岢ʵ������������

��һ��������������������������Ϊ������������һ��������������������ñ�����ƽ��ֵ

�ڶ��������Ǹ�������������������Ϊ��������������һ����������������������ñ�����ƽ����ֵ����ƽ��������ʹ�ú���sqrt������������������ظò�����ƽ��������VC����Ҫͷ�ļ�cmath��

�������������ַ����������޷���ֵ��������һ���ַ���ָ�룬�����ǰ�����ַ���������Сд��ĸ��ɴ�д��

Ҫ�󣺶�����������ָ��ֱ�ָ��������������Ȼ����ݵ�������ʹ�ú���ָ������������������������ֱ�ӵ���������������

�������ΪI����ͨ��ָ����������������������ΪF����ͨ��ָ����ø������������������ΪS����ͨ��ָ������ַ�������


���룺
��һ������һ��t��ʾ��t������ʵ��

ÿ��������һ����д��ĸ����ʾ�������ͣ�Ȼ����������Ӧ�Ĳ���

��������t��


�����
ÿ��������ú�����Ľ��


�������룺
5
S shenzhen
I 25
F 6.25
I 31
S China


���������
SHENZHEN
625
2.5
961
CHINA


*/