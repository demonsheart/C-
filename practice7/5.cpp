#include <iostream>
using namespace std;
class CChickProblem
{
private:
    int money, num, x, y, z, result;
    int *px, *py, *pz;

public:
    CChickProblem(int a, int b);
    ~CChickProblem()
    {
        delete[] px;
        delete[] py;
        delete[] pz;
    }
    void findSolution();
    void printSolution();
};

CChickProblem::CChickProblem(int a, int b)
{
    num = a;
    money = b;
    px = new int[num];
    py = new int[num];
    pz = new int[num];
    for (int i = 0; i < num; ++i)
        *(px + i) = *(py + i) = *(pz + i) = 0;
}
void CChickProblem::findSolution()
{
    int x, y, z, i = 0;
    for (x = 1; x <= money / 5; x++)
    {
        for (y = 0; y <= money / 3; y++)
        {
            z = num - x - y;
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == money)
            {
                *(px + i) = x;
                *(py + i) = y;
                *(pz + i) = z;
                i++;
            }
        }
    }
    result = i;
}
void CChickProblem::printSolution()
{
    cout << result << endl;
    for (int i = 0; *(pz + i) != 0; i++)
    {
        cout << *(px + i) << " " << *(py + i) << " " << *(pz + i) << endl;
    }
}
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        CChickProblem s(a, b);
        s.findSolution();
        s.printSolution();
    }
    return 0;
}
/*
��Ŀ����
�ټ���Ǯ��������Ϊ����100ԪǮ��100ֻ������֪ÿֻ����5Ԫ��ÿֻĸ��3Ԫ��3ֻС��1Ԫ�����������ֻ������ĸ����С�����Խ�����������һ��������ʾ���ټ���Ǯ����ֻ���������CChickProblem��һ��ʵ����������ּ��ļ۸񲻱�,�������ݳ�Ա����Ǯ����Ҫ����ܵļ��������򵽵�ĸ����С���͹�������������Ա�����й���������������������ĺ���findSolution����ӡ�����ĺ���printSolution��(Ҫ���ö�̬���鱣����������н�)

��д�������������⡣

����
�������ݵ����� t

��һ�� ���� Ǯ��

�ڶ��� ���� Ǯ��

.......

���
��һ������

��һ���һ���⹫���� ĸ���� С����

��һ��ڶ����⹫���� ĸ���� С����

.........


�ڶ�������

�ڶ����һ���⹫���� ĸ���� С����

�ڶ���ڶ����⹫���� ĸ���� С����

.........

��������
2
100 100
200 200
�������
3
4 18 78
8 11 81
12 4 84
7
4 43 153
8 36 156
12 29 159
16 22 162
20 15 165
24 8 168
28 1 171
*/