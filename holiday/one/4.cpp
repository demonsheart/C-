#include <iostream>
#include <string>
using namespace std;
struct SCourse
{
    int no;
    string name;
};
class CStudent
{
private:
    /* data */
public:
    int dohomework(int no)
    {
        return no * no;
    }
};

class CTeacher
{
private:
    /* data */
public:
    int homework(string s, SCourse *p, int n)
    {
        for (int i = 0; i < n; ++i)
        {
            if (p[i].name == s)
            {
                return p[i].no;
                break;
            }
        }
        return 0;
    }
    int review(int ans)
    {
        if (ans <= 60)
            return 44;
        else
            return 88;
    }
};

int main()
{
    int t, n, ans, no, result;
    string st;
    cin >> t;
    SCourse *p = new SCourse[t];
    CStudent s;
    CTeacher q;
    for (int i = 0; i < t; ++i)
    {
        cin >> p[i].no >> p[i].name;
    }
    cin >> n;
    if (n > t)
        return -1;
    while (n--)
    {
        cin >> st;
        no = q.homework(st, p, t);
        ans = s.dohomework(no);
        result = q.review(ans);
        cout << result << endl;
    }
    delete[] p;
    return 0;
}
/*
��Ŀ����
У԰���������ѧ����ѧ�������ܶ����ԣ�����������ѧ�š�����ѧԺ��רҵ���Ա�סַ����ϵ�绰�������������ȵȣ�����Щ���ԣ���Ҫ�������ǵĶ����������ȡ������������������ȡѧ�š�����ѧ�š������������ȵȣ��������ϵ���Ϣ�������һ��������ѧ���ඨ��

У԰�ﻹ��������ͬԺϵ����ʦ����˼����ʦ�����Teacher�ð�����Щ���Ժͷ�������ѧ����ȣ���ʦ���Ծ�Ҫ���ְ�ơ�ְ��ѧ������Ϣ��������Ҫѧ�š�רҵ����Ϣ������һ�������Ľ�ʦ�ඨ�壺

��ʦ���ճ���������������ҵ��homework����������ҵ(review)�����в�����ҵ��Ҫָ�������ſγ̵���ҵ����Ҫ֪���γ����ƣ�Ȼ�󷵻ؿγ̱�ţ�������ҵ��Ҫ����ѧ������ҵ�𰸣������ݴ𰸷��ط���������𰸴���60�򷵻ط���88�����򷵻ط���44��

ѧ�����ճ�ѧϰ��������ҵ��dohomework������ҵ�����Ǹ��ݿγ̱�ŷ�����ҵ�𰸣��Կγ̱�ŵ�ƽ��ֵ��Ϊ��ҵ�𰸡�

��ǰ��ʦ����������������Ӧ�Ĳ����������������������Ҫ��ʹ�������ķ�����

Ҫ�󣺱���ʹ��ʦ��������ķ�����ʵ�ֲ�����ҵ��������ҵ������ҵ�Ĺ��̣����Ƿ�������������һ����Ч��

����
��һ������t��ʾ��t�ſγ�

��������t�У�ÿ�а���������������һ�������ǿγ̱�ţ������������ڶ��������γ����ƣ��ַ�����

����һ������n��nС��t����ʾ��ʦ������ҵ������

��������n�У�ÿ������һ����ҵ��Ӧ�Ŀγ����ƣ�ÿ����һ�о����ε���������������ʾ������������ʦ������ҵ��ѧ������ҵ����ʦ������ҵ

���
ÿ�����һ����ҵ�ĳɼ�

��������
5
4 math
8 chinese
6 english
7 biology
9 history
3
history
math
english
�������
88
44
44
*/