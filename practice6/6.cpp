#include <iostream>
#include <cmath>
using namespace std;
class CSieve
{
private:
    char *p_sieve;
    unsigned long num;

public:
    CSieve(unsigned long n)
    {
        unsigned long q = sqrt(n);
        int i, j;
        num = n;
        p_sieve = new char[n + 1];
        for (i = 0; i < n + 1; ++i)
            *(p_sieve + i) = '1';
        for (i = 2; i <= q; ++i)
            if (p_sieve[i] == '1')
                for (j = 2; i * j < n + 1; ++j)
                    p_sieve[i * j] = '0';
    }
    void printPrime()
    {
        for (int i = 2; i < num; ++i)
        {
            if (*(p_sieve + i) == '1')
                cout << i << " ";
        }
    }
    ~CSieve() { delete p_sieve; };
};
int main()
{
    int t;
    unsigned long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        CSieve s(n);
        s.printPrime();
        cout << endl;
    }
    return 0;
}
/*
��Ŀ����
������˹����ɸ����ư���ɸ����ɸ����һ����ϣ����ѧ�Ұ�����˹�����������һ�ּ򵥼춨�������㷨��Ҫ�õ���Ȼ��n���ڵ�ȫ������������Ѳ����ڸ���n�����������ı����޳���ʣ�µľ���������
����Ҫɸ��ֵ�ķ�Χn���ҳ����ڵ�����������2ȥɸ������2���£���2�ı����޳�����������һ��������Ҳ����3ɸ����3���£���3�ı����޳���������ȥ����һ������5ɸ����5���£���5�ı����޳����������ظ���ȥ......��
���ð�����˹����ɸ�����������㷨��������CSieve����ʵ��:
class CSieve
{
private:
        char *p_sieve;
        unsigned long num;                //num�����Χ
public:
        CSieve(unsigned long n);
        void printPrime();
        ~CSieve();
};

����p_sieveΪ����ָ��, p_sieve[i]=1��ʾi������, p_sieve[i]=0��ʾi������������д�����������������ӡĳ����Χ�ڵ�����������

����
�������ݵ�����

n1

n2

......

���
2��n1����������

2��n2����������

......

��������
2
10
20
�������
2 3 5 7
2 3 5 7 11 13 17 19
*/