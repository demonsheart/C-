#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class CHealth
{
    string name;
    float height;
    float weight;
    float waist;

public:
    int BMI();
    double rate();
    CHealth(string n, float a, float b, float c);
    void print();
};
int CHealth::BMI()
{
    int b;
    b = int(weight / (height * height) + 0.5);
    return b;
}
double CHealth::rate()
{
    double a, b;
    a = waist * 0.74;
    b = weight * 0.082 + 34.89;
    return (a - b) / weight;
}
CHealth::CHealth(string n, float a, float b, float c)
{
    name = n;
    height = a;
    weight = b;
    waist = c;
}

void CHealth::print()
{
    cout << name << "��BMIָ��Ϊ" << BMI() << "--��֬��Ϊ" << fixed << setprecision(2) << rate() << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        float b, c, d;
        cin >> a >> b >> c >> d;
        CHealth h(a, b, c, d);
        h.print();
    }
    return 0;
}
/*
��Ŀ����
�������������彡���ж��ָ�꣬����BMI����֬�ʵ�
���һ�����彡���࣬����˽�г�Ա�����������(��)������(����)����Χ(����)��ʵ���������з������£�
BMI����������BMI��ֵ(����)�����㹫ʽBMI= ���� / ��ߵ�ƽ��
��֬�ʷ�����������֬����ֵ(������)������������£�
1������a=��Χ��cm����0.74
2������b=���أ�kg����0.082+34.89
3����֬��������kg��=a��b
4����֬�� = ��֬������������
��������������Ҫ���ж���
����
��һ������t��ʾ��t������ʵ��
�ڶ�����ÿ�������ĸ���������������ߡ����أ���Χ
��������t��
���
���t�У�ÿ������һ��ʵ����BMI����֬�ʣ�С����ֵ��ȷ��С�����2λ���ÿո����
��������
2
�Ÿ� 1.85 78.5 85.2
��Բ 1.55 67.6 77.3
�������
�Ÿߵ�BMIָ��Ϊ23--��֬��Ϊ0.28
��Բ��BMIָ��Ϊ28--��֬��Ϊ0.25
*/