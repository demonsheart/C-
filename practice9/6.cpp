#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class CSieve
{
private:
    static char *p_sieve;
    unsigned long num;
    void findPrime()
    {
        unsigned long q = sqrt(num);
        int i, j;
        for (i = 0; i < num + 1; ++i)
            *(p_sieve + i) = '1';
        for (i = 2; i <= q; ++i)
            if (p_sieve[i] == '1')
                for (j = 2; i * j < num + 1; ++j)
                    p_sieve[i * j] = '0';
    }

public:
    CSieve(unsigned long n)
    {
        num = n;
        int len = strlen(p_sieve);
        if (len < n)
        {
            delete[] p_sieve;
            p_sieve = new char[n + 1];
            findPrime();
        }
    }
    friend void delete_p();
    static void printPrime(int n);
};
char *CSieve::p_sieve = new char[2];
void delete_p()
{
    delete[] CSieve::p_sieve;
}
void CSieve::printPrime(int n)
{
    for (int i = 2; i <= n; ++i)
    {
        if (*(p_sieve + i) == '1')
            cout << i << " ";
    }
}
int main()
{
    int t;
    unsigned long n;
    cin >> t;
    CSieve *s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        s[i] = new CSieve(n);
        CSieve::printPrime(n);
        cout << endl;
    }
    delete_p();
    for (int i = 0; i < t; i++)
    {
        delete s[i];
    }
    return 0;
}
/*
��Ŀ����
�ð�����˹����ɸ����num֮�ڵ������������ΰѲ�����num��ƽ���������������ı����޳���Ҳ�����ȴ�2��ʼ����2�ı����޳�,Ȼ�����һ��ʣ�µ���С����3�ı����޳�����������ֱ��������num��ƽ���������ʣ�µľͶ���������
����CSieve��������sieve��ʾɸ�ӣ�sieve[i]='1'��ʾi������, sieve[i]='0'��ʾi���޳���������:
class CSieve
{
private:
        char *sieve;
        unsigned long num;
        void findPrime();     //��ɸ��ɸ��2��num֮������з�����(ʹ��Ӧ��sieve����Ԫ��Ϊ'0')
public:
        CSieve(unsigned long n);
        void printPrime();        //��ӡ����sieve[i]='1'��i
        ~CSieve();
};

�޸���������CSieve�࣬ʹ����CSieve��Ķ�����sieve���鲢�ܹ�����������printPrime()������¶���Ķ����numֵ������sieve����Ĵ�С,���ʾ�÷�Χ�ڵ������Ѿ�ɸѡ��ϣ������ٵ���findPrime()������¶���Ķ����numֵ����sieve����Ĵ�С,����Ҫ���·���sieve������Ϊɸ�Ӳ�����findPrime()�ҳ��·�Χ�ڵ�����������(��������ʾ�����ȸ��ݲ��Դ�������CSieve����ָ�����飬ÿ�β��Զ�̬����CSieve����)

����
��һ��������Դ�����

ÿ�β�������һ�У�����������n������2����

���
ÿ�β������һ�У���2��n������������

��������
3
23
100
44
�������
2 3 5 7 11 13 17 19 23
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
2 3 5 7 11 13 17 19 23 29 31 37 41 43
*/