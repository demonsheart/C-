#include <string>
#include <iostream>
#include <vector>
using namespace std;
template <class T>
int find(vector<T> v, T des)
{
    int len = v.size(), i;
    for (i = 1; i <= len; ++i)
        if (v[i - 1] == des)
            break;
    return (i > len) ? 0 : i;
}
int main()
{
    int t, n;
    string cmd;
    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == "I")
        {
            int tmp;
            vector<int> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "D")
        {
            double tmp;
            vector<double> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "C")
        {
            char tmp;
            vector<char> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
        else if (cmd == "S")
        {
            string tmp;
            vector<string> v;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
            cin >> tmp;
            cout << find(v, tmp) << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
��дһ���������н��в��ҵĺ���ģ�壬��������Ϊ����n��Ԫ�أ�����ΪT��Ҫ���ҵ�Ԫ��Ϊkey��

ע�⣺����ʹ��ģ�庯��

����
��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾ�������ͣ�I��ʾ�������ͣ�D��ʾ˫���������ͣ�C��ʾ�ַ��ͣ�S��ʾ�ַ����ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

����������key

��������t��ʵ��

���
ÿ�����һ��������ҵ����key�������еĵڼ���Ԫ�أ���1��ʼ�����Ҳ������0

��������
4
I 5
5 3 51 27 9
27
D 3
-11.3 25.42 13.2
2.7
C 6
a b g e u q
a
S 4
sandy david eason cindy
cindy
�������
4
0
1
4
*/