#include <iostream>
//#include<stdlib.h>
using namespace std;
void does(int *p, int *q, const int n1, const int n2);
int main()
{
    int t, p[2][3], q[3][2];
    const int n1 = 3;
    const int n2 = 2;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> p[i][j];
        does(&p[0][0], &q[0][0], n1, n2);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 2; ++j)
                cout << q[i][j] << " ";
            cout << endl;
        }
    }
    //    system("pause");
}
void does(int *p, int *q, const int n1, const int n2)
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            *(q + (2 - j) * n2 + i) = *(p + i * n1 + j);
        }
    }
}
/*
��Ŀ������
����һ��2*3�ľ��󣬽��������������ת90�Ⱥ����

����������2*3���� ��

1 2 3

4 5 6 

������ת90�Ⱥ�ľ����Ϊ��

3 6

2 5

1 4

Ҫ�󣺳��˾��󴴽��������������ʹ������������±�ķ������������̶Ծ�����κη��ʶ�����ʹ��ָ��

��ʾ��m��n�еĶ�ά���󣬵�i�е�j�е�Ԫ������Ԫ�صľ���Ϊi*n+j����Ŵ�0��ʼ����


���룺
��һ������t��ʾ��t������ʵ��

������������һ��2*3�ľ��������

��������t��ʵ��


�����
���������ת��ľ�����

�������ÿ���У�ÿ������֮�䶼�ÿո���������һ�����ݺ���Ҳ���пո�


�������룺
2
1 2 3
4 5 6
4 5 6
7 8 9


���������
3 6 
2 5 
1 4 
6 9 
5 8 
4 7 


*/