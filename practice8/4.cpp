#include <iostream>
using namespace std;
class lottery
{
private:
    int group1[6];
    int num;
    int **groupn;

public:
    lottery(int *p, int n);
    lottery(lottery &p);
    void print();
    ~lottery();
};

lottery::lottery(int *p, int n)
{
    num = n;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p[i];
    }
    groupn = new int *[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
}
lottery::lottery(lottery &p)
{
    num = p.num;
    for (int i = 0; i < 6; i++)
    {
        group1[i] = p.group1[i];
    }
    groupn = new int *[num];
    for (int i = 0; i < num; i++)
    {
        groupn[i] = new int[6];
    }
    groupn[0][0] = group1[5] + 1;
    for (int i = 1; i < 6; i++)
    {
        groupn[0][i] = group1[i - 1] + 1;
    }

    for (int i = 1; i < num; i++)
    {
        groupn[i][0] = groupn[i - 1][5] + 1;
        for (int j = 1; j < 6; j++)
        {
            groupn[i][j] = groupn[i - 1][j - 1] + 1;
        }
    }
}
void lottery::print()
{
    int i, j;
    for (int i = 0; i < 5; i++)
        cout << group1[i] << " ";
    cout << group1[5] << endl;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << groupn[i][j] << " ";
        }
        cout << groupn[i][5] << endl;
    }
}
lottery::~lottery()
{
    for (int i = 0; i < num; i++)
    {
        delete[] groupn[i];
    }
    delete[] groupn;
}

int main()
{
    int t, p[6], num;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
        {
            cin >> p[i];
        }
        cin >> num;
        lottery l1(p, num);
        lottery l2(l1);
        l2.print();
    }
    return 0;
}
/*
��Ŀ����
����ÿ���Ʊ����6�����룬���һ����Ʊ��lottery�����ݳ�Ա������һ����롢������������������룬��������

1����һ�����group1���������飬����Ϊ6

2����������num����ʾ�Ե�һ�����Ϊ����������num����������

3�����������groupn������ָ��(int **)���������ݽ���̬������ά�������飬��9�У�ÿ�а���6�����롣

��Ʊ��ĳ�Ա�������������캯�����������캯������ӡ���������£�

1����ӡ�����������Ʊ��������ĺ���

2�����캯����������������һ������Ϊ�������飬��Ӧ��һ����룬�ڶ�������Ϊ��������ʾ��������(������9)��ע���ڹ��캯���У����������groupn����̬����ռ䣬��ȻΪָ��

3���������캯�������������groupn��̬������ά���飬����������������������ĺ��룬��������Ϊ��

a)��i��ĵ�j�����������һ���j-1�������1���׸����������һ�����һ�������1

�����һ�����group1�ĺ�����1��3��5��7��9��11������������Ϊ2

��groupn�ĵ�0�������12��2��4��6��8��10����1�������11��13��3��5��7��9���Դ�����

����
��һ������t��ʾ��t��������ÿ��������Ӧһ������
����һ������7��������ǰ6��������ʾ���Ų�Ʊ�ĵ�һ��6�����룬��7��������ʾ������������ʱʹ��ʹ�ù��캯��
Ȼ����ÿ������췽�����ɵڶ��Ų�Ʊ�����и��������Ų�Ʊ�ĵ�һ���������������������������������
��������
���
����Print���������ÿ�������еڶ��Ų�Ʊ��������ĺ���
��������
2
1 3 5 7 9 11 2
22 44 66 88 100 122 3
�������
1 3 5 7 9 11
12 2 4 6 8 10
11 13 3 5 7 9
22 44 66 88 100 122
123 23 45 67 89 101
102 124 24 46 68 90
91 103 125 25 47 69
*/