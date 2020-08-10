#include <iostream>
#include <string.h>
using namespace std;
struct STest
{
    int num;
    char s1[50], s2[50], s3[50];
};
int compare(STest *p, STest *q);
int main()
{
    int t, r;
    cin >> t;
    STest p[10];
    for (int i = 0; i < t; ++i)
    {
        cin >> p[i].num >> p[i].s1 >> p[i].s2 >> p[i].s3;
    }
    for (int i = 0; i < t - 1; ++i)
    {
        for (int j = i + 1; j < t; ++j)
        {
            r = compare(p + i, p + j);
            if (r != 0)
            {
                cout << p[i].num << " " << p[j].num << " " << r << endl;
            }
        }
    }
}
int compare(STest *p, STest *q)
{
    int a1, b1, c1, a2, b2, c2, s = 0;
    a1 = strlen((*p).s1);
    b1 = strlen((*p).s2);
    c1 = strlen((*p).s3);
    a2 = strlen((*q).s1);
    b2 = strlen((*q).s2);
    c2 = strlen((*q).s3);
    for (int i = 0; i < a1 && i < a2; ++i)
    {
        if ((*p).s1[i] == (*q).s1[i])
            s++;
    }
    if (float(s) >= float(0.9 * a1) || float(s) >= float(0.9 * a2))
        return 1;
    s = 0;
    for (int i = 0; i < b1 && i < b2; ++i)
    {
        if ((*p).s2[i] == (*q).s2[i])
            s++;
    }
    if (float(s) >= float(0.9 * b1) || float(s) >= float(0.9 * b2))
        return 2;
    s = 0;
    for (int i = 0; i < c1 && i < c2; ++i)
    {
        if ((*p).s3[i] == (*q).s3[i])
            s++;
    }
    if (float(s) >= float(0.9 * c1) || float(s) >= float(0.9 * c2))
        return 3;
    return 0;
}
/*
��Ŀ����
��֪һȺѧ���Ŀ����Ծ�Ҫ����Ծ����ݽ��жԱȣ������Ƿ��г�Ϯ��

ÿ���Ծ������ѧ�ţ��������ͣ�����Ŀ1�𰸣��ַ������ͣ�����Ŀ2�𰸣��ַ������ͣ�����Ŀ3�𰸣��ַ������ͣ�

Ҫ��ʹ�ýṹ�����洢�Ծ����Ϣ������һ������������ֵΪһ�������������������ṹ��ָ�룬���������ǱȽ������Ծ��ÿ����Ŀ�Ĵ𰸣������ͬ��ŵĴ����ƶȳ���90%����ô����Ϊ�г�Ϯ���������س�Ϯ��ţ����򷵻�0�����ƶ���ָ��ͬһ��Ŀ�У������𰸵����λ���ϵ��ַ������Ƚϣ���ͬ���������ڵ�����һ���𰸵ĳ��ȵ�90%������Ϊ��Ϯ��

����
��һ������t��ʾ��t���Ծ�

�ڶ��������1���Ծ��ѧ��ѧ��

�����������1���Ծ����Ŀ1��

�����������1���Ծ����Ŀ2��

�����������1���Ծ����Ŀ3��

ÿ���Ծ��Ӧ4������

��������t���Ծ������

���
��һ���У��ѷ��ֳ�Ϯ������ѧ�ź���Ŀ�ţ�����֮���õ����ո����

�����������Ŀ1��Ϯ����Ŀ��Ϊ1���Դ�����

���˳���������ѧ��˳��������

��������
5
2088150555
aabcdef11
ZZ887766dd
cc33447799ZZ
2088150333
abcdef00
AABBCCDDEE
ZZ668899cc
2088150111
AABBCCDDEE
ZZ668899cc
abcdef00
2088150222
AABBCFDDeE
ZZ889966dd
abcdef000
2088150444
aabcdef00
AABBCDDDEE
cc668899ZZ
�������
2088150333 2088150444 2
2088150111 2088150222 3
*/