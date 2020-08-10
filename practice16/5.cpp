#include <iostream>
#include <vector>
using namespace std;
class CSet
{
private:
    vector<int> v;

public:
    CSet(vector<int> vv) : v(vv) {}
    void print()
    {
        for (int i = 0; i < v.size() - 1; ++i)
            cout << v[i] << " ";
        cout << v.back() << endl;
    }
    friend CSet operator+(CSet r1, CSet r2);
    friend CSet operator-(CSet r1, CSet r2);
    friend CSet operator*(CSet r1, CSet r2);
};
CSet operator+(CSet r1, CSet r2)
{
    vector<int> tmp;
    for (auto i = r2.v.begin(); i != r2.v.end(); ++i)
    {
        int flag = 1;
        for (auto j = r1.v.begin(); j != r1.v.end(); ++j)
        {
            if (*i == *j)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            tmp.push_back(*i);
    }
    tmp.insert(tmp.begin(), r1.v.begin(), r1.v.end());
    CSet s(tmp);
    return s;
}
CSet operator-(CSet r1, CSet r2)
{
    CSet tmp = r1 * r2; //??�訦??
    for (int i = 0; i < tmp.v.size(); ++i)
    {
        for (int j = 0; j < r1.v.size(); ++j)
        {
            if (r1.v[j] == tmp.v[i])
            {
                r1.v.erase(r1.v.begin() + j);
                j--;
            }
        }
    }
    CSet tmp1(r1.v);
    return tmp1;
}
CSet operator*(CSet r1, CSet r2)
{
    vector<int> tmp;
    for (auto i = r1.v.begin(); i != r1.v.end(); ++i)
    {
        int flag = 1;
        for (auto j = r2.v.begin(); j != r2.v.end(); ++j)
        {
            if (*i == *j)
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
            tmp.push_back(*i);
    }
    CSet s(tmp);
    return s;
}
int main()
{
    int t, n, tmp;

    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        CSet A(a);
        CSet B(b);

        CSet c1 = A + B;
        CSet c2 = A * B;
        CSet c3 = (A - B) + (B - A);
        cout << "A:";
        A.print();
        cout << "B:";
        B.print();
        cout << "A+B:";
        c1.print();
        cout << "A*B:";
        c2.print();
        cout << "(A-B)+(B-A):";
        c3.print();
        cout << endl;
    }
    return 0;
}
/*
��Ŀ����
��������һ������ȷ����Ԫ�������ɵ����塣���ϵ������в���������Բ��ȡ�

����A�ͼ���B�Ľ�����������A������B����ͬԪ����ɵļ��ϡ�

����A�ͼ���B�Ĳ��������������ڼ���A�����ڼ���B��Ԫ������ɵļ��ϡ�

����B���ڼ���A����Բ���������A-B��������A��������B��Ԫ����ɵļ��ϡ�

���輯��A={10��20��30}������B={1��10��50��8}����A��B�Ĳ���{10��20��30,1,50,8}��A��B�Ľ���{10}��B����A����Բ�����{20,30}��

��������������CSet�����԰����������е�Ԫ�ظ���n������ָ��data�洢�����е�Ԫ�ء�

�����У������������������ʽ��������е�Ԫ�ء�

                      ����+��������󼯺�A�ͼ���B�Ĳ����������ؽ�����ϡ�

                     ����-��������󼯺�B���ڼ���A����Բ����������ؽ�����ϡ�

                       ����*��������󼯺�A�ͼ���B�Ľ����������ؽ�����ϡ�

���������뼯��A��B�����ݣ����㼯�ϵĲ���������Բ���

�ɸ�����Ŀ��ΪCSet�������Ҫ�ĳ�Ա������

                        

        

����
 ���Դ���

ÿ������������У���ʽ���£�

��һ�У�����A��Ԫ�ظ�����Ԫ��

�ڶ��У�����B��Ԫ�ظ�����Ԫ��

���
 ÿ���������������£�

��һ�У�����A

�ڶ��У�����B

�����У�A��B�Ĳ�

�����У�A��B�Ľ�

�����У�B����A����Բ��� �� A����B����Բ����Ĳ�����(A-B)+(B-A)

ÿ��������ݼ��Կ��зָ���

��������
2
3 10 20 30
4 10 1 2 3
5 100 2 3 4 -10
6 -34 12 2 4 90 100
�������
A:10 20 30
B:10 1 2 3
A+B:10 20 30 1 2 3
A*B:10
(A-B)+(B-A):20 30 1 2 3

A:100 2 3 4 -10
B:-34 12 2 4 90 100
A+B:100 2 3 4 -10 -34 12 90
A*B:100 2 4
(A-B)+(B-A):3 -10 -34 12 90
*/