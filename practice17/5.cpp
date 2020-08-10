#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
class BoundArray
{
private:
    vector<T> v;

public:
    BoundArray() {}
    void append(T a) { v.push_back(a); }
    void mysort()
    {
        int len = v.size();
        for (int i = 0; i < len; ++i)
        {
            for (int j = 0; j < len - 1; ++j)
            {
                if (v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }
    }
    void print()
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    int search(T a)
    {
        auto it = find(v.begin(), v.end(), a);
        int n = -1;
        if (it != v.end())
        {
            n = it - v.begin();
            return n;
        }
        else
            return n;
    }
};
int main()
{
    int t, n;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == 'I')
        {
            BoundArray<int> b;
            int tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'D')
        {
            BoundArray<double> b;
            double tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
        else if (cmd == 'C')
        {
            BoundArray<char> b;
            char tmp;
            while (n--)
            {
                cin >> tmp;
                b.append(tmp);
            }
            b.mysort();
            b.print();
            cin >> tmp;
            cout << b.search(tmp) << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
��д�н�����ģ��BoundArray������������Ԫ���±����ò����±�Խ��ʱ��ֹ�����ִ�У����ܹ��洢�������͵����ݡ�Ҫ��ʵ�ֶ������������ķ���sort������������в��ҵķ���search��

����
��һ��������t����ʾ��t����������

�ӵڶ��п�ʼ����ÿ���������������ݡ�

���������������ͣ�I��ʾint��D��ʾdouble��C��ʾchar���������������Ԫ�ظ���

Ȼ������ÿ��Ԫ��

�������Ҫ���ҵ�Ԫ��

���
���������С���������Ԫ��

Ȼ���������Ԫ�صĽ�����ҵ�������±꣬û�ҵ������-1

��������
2
I 2
1 2
2
D 3
3.5 6.2 2.9
2.1
�������
1 2 
1
2.9 3.5 6.2 
-1
*/