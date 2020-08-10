#include <iostream>
using namespace std;
struct SPoint
{
    int x, y;
};
struct SRect
{
    SPoint p1, p2;
};
int judge(SRect s1, SRect s2);
int main()
{
    int t;
    cin >> t;
    SRect s1, s2;
    while (t--)
    {
        cin >> s1.p1.x >> s1.p1.y >> s1.p2.x >> s1.p2.y;
        cin >> s2.p1.x >> s2.p1.y >> s2.p2.x >> s2.p2.y;
        if (judge(s1, s2))
            cout << "overlapped" << endl;
        else
            cout << "not overlapped" << endl;
    }
    return 0;
}
int judge(SRect s1, SRect s2)
{
    SRect s;
    if (s1.p1.x > s1.p2.x)
    {
        s.p1 = s1.p1;
        s1.p1 = s1.p2;
        s1.p2 = s.p1;
        if (s1.p1.y > s1.p2.y)
        {
            s.p1.y = s1.p1.y;
            s1.p1.y = s1.p2.y;
            s1.p2.y = s.p1.y;
        }
    }
    if (s2.p1.x > s2.p2.x)
    {
        s.p1 = s2.p1;
        s2.p1 = s2.p2;
        s2.p2 = s.p1;
        if (s2.p1.y > s2.p2.y)
        {
            s.p1.y = s2.p1.y;
            s2.p1.y = s1.p2.y;
            s2.p2.y = s.p1.y;
        }
    }
    if (s1.p1.x > s2.p2.x || s1.p2.x < s2.p1.x || s1.p2.y < s2.p1.y || s1.p1.y > s2.p2.y)
        return 0;
    else
        return 1;
}
/*
��Ŀ����
�þ���x,y�������ͱ�����Ա�Ľṹ����SPoint����ʾ����㡣��SRect�ṹ�������������Σ����а���p1��p2����SPoint��Ա�ֱ��ʾ���ζԽ����ϵ������㡣

��д�ж����������Ƿ��ص��ĺ�����

����
�жϴ���

����1�ĶԽ��߶�������x1��y1��x2��y2

����2�ĶԽ��߶�������x1��y1��x2��y2

......

���
�Ƿ��ص�

��������
3
1 5 2 9
1 3 2 4
5 6 7 8
5 7 7 7
2 5 1 0
9 4 2 9
�������
not overlapped
overlapped
overlapped
*/