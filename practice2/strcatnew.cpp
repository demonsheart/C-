#include <iostream>
#include <stdlib.h>
using namespace std;
void does(char p1[], char p2[], char p3[], char *p, int a1, int a2, int b1, int b2, int c1, int c2, int n);
int main()
{
    int t, a, b, c, d, e, f, n;
    char p1[11], p2[11], p3[11], *p;
    cin >> t;
    while (t--)
    {
        cin >> p1 >> p2 >> p3 >> a >> b >> c >> d >> e >> f;
        n = b + d + f - a - c - e + 4;
        char *p = new char(n);
        does(p1, p2, p3, p, a, b, c, d, e, f, n);
        cout << p << endl;
        delete[] p;
    }
    system("pause");
}
void does(char p1[], char p2[], char p3[], char *p, int a1, int a2, int b1, int b2, int c1, int c2, int n)
{
    int i, j, k;
    for (i = 0, j = a1 - 1; i < a2 - a1 + 1; ++i, ++j)
    {
        *(p + i) = *(p1 + j);
    }
    k = i;
    for (i = k, j = b1 - 1; i < b2 - b1 + 1 + k; ++i, ++j)
    {
        *(p + i) = *(p2 + j);
    }
    k = i;
    for (i = k, j = c1 - 1; i < c2 - c1 + 1 + k; ++i, ++j)
    {
        *(p + i) = *(p3 + j);
    }
    *(p + i) = '\0';
}
/*
��Ŀ������
���������ַ�����ͨ��ָ���ȡ�����ַ������Ӵ����Ӵ���ָ�ַ�����������һС���֣��������Ǻϲ���һ�����ַ���
Ҫ��
1. �����ַ����Ĵ������������ʹ�����飬Ҳ���Բ���
2. ����󣬸��������ַ������Ӵ��ĳ��ȣ���������ַ����ĳ���
3. ʹ�ö�̬����ķ��������µ��ַ���������ʹ��ָ���ȡ�����ַ����Ĳ�ͬ���֣����Ҹ��Ƶ����ַ����У�Ҫ���������̶�����ʹ�������±�
4. ʹ��ָ������µ��ַ���


���룺
��һ������t��ʾ��t������ʵ��
�����������������ַ�����ÿ���ַ���������10���ַ�
�������У�ÿ����������a��b����ʾÿ���Ӵ��Ŀ�ʼ�ͽ���λ�á�ע���ַ�����λ���ǰ���һ�������1��ʼ���㣬�ͱ���е�����λ�ò�ͬ�������ַ���abcdefg����ʼλ����3������λ����5����ô�Ӵ�����cde
��������t��ʵ��


�����
ÿ������ϲ�������ַ���


�������룺
2
abcdefghij
ABCDEFGHIJ
aabbccddee
3 5
2 6
8 10
AABBCCDDEE
ffgghhiijj
FFGGHHIIJJ
1 4
5 8
2 7


���������
cdeBCDEFdee
AABBhhiiFGGHHI


*/
