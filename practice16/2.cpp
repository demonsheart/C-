#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
template <class T>
bool cmp(const pair<T, int> &p1, const pair<T, int> &p2)
{
    return p1.second < p2.second;
}
template <class T>
struct result
{
    T data;
    int num;
};

template <class T>
result<T> findmax(vector<T> v)
{
    map<T, int> m;
    for (int i = 0; i < (int)v.size(); ++i)
        m[v[i]]++;
    auto it = max_element(m.begin(), m.end(), cmp<T>);
    result<T> r;
    r.data = it->first;
    r.num = it->second;
    return r;
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
            result<int> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<double> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<char> r = findmax(v);
            cout << r.data << " " << r.num << endl;
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
            result<string> r = findmax(v);
            cout << r.data << " " << r.num << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
ĳС��ҪƱѡ�򳤣���Ʊ����ߵ�ѡ��������ͶƱ���Ʋ���ȫ������ÿ��ͶƱʱ����ѡ����ͶƱϵͳ��ʶ�������Ͳ�һ�¡����д����ģ�壬����Զ������͵����ݣ����ҳ���Ʊ��ߵ�Ԫ�ء����У�ÿ��ͶƱ��ѡƱ��n�ţ�ʶ��������ΪT

ע�⣺����ʹ��ģ�庯��

����
��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾʶ�������ͣ�I��ʾ�������ͣ�C��ʾ�ַ��ͣ�S��ʾ�ַ����ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

��������t��ʵ��

���
ÿ�����һ��������ֱ������ѡ�ߵ�ʶ����͵�Ʊ�����Կո�ֿ���

��������
3
I 10
5 3 5 2 9 7 3 7 2 3
C 8
a b a e b e e q
S 5
sandy david eason cindy cindy
�������
3 3
e 3
cindy 2
*/