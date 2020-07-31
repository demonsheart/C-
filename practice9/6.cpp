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