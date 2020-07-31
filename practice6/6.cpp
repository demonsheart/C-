#include<iostream>
#include<cmath>
using namespace std;
class CSieve
{
private:
        char* p_sieve;
        unsigned long num;
public:
        CSieve(unsigned long n)
        {
            unsigned long q = sqrt(n);
            int i,j;
            num = n;
            p_sieve = new char[n+1];
            for( i=0; i<n+1; ++i)
             *(p_sieve+i) = '1';
            for( i=2; i<=q; ++i)
             if(p_sieve[i] == '1')
              for( j=2; i*j<n+1; ++j)
               p_sieve[i*j]='0';
        }
        void printPrime()
        {
            for(int i=2; i<num; ++i)
            {
                if(*(p_sieve+i)=='1')
                cout<<i<<" ";
            }
        }
        ~CSieve(){delete p_sieve;};
};
int main()
{
    int t;
    unsigned long n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        CSieve s(n);
        s.printPrime();
        cout<<endl;
    } 
    return 0;
}