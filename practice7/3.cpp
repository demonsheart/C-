#include<iostream>
using namespace std;
class CLuckNumber
{
private:
    int n;
    int *p;
public:
    CLuckNumber(int n);
    CLuckNumber(CLuckNumber &s);
    ~CLuckNumber();
    void getLuck();
    void print();
};

CLuckNumber::CLuckNumber(int n)
{
    this->n = n;
    p = new int[n];
    for(int i=0; i<n; i++)
     p[i] = 0;
}
CLuckNumber::CLuckNumber(CLuckNumber &s)
{
    this->n = s.n;
    this->p = new int[n];
    for(int i=0; i<n; i++)
     this->p[i] = s.p[i];
}
CLuckNumber::~CLuckNumber()
{
    delete [] p;
}
void CLuckNumber::getLuck()
{
    int i=0,q;
    for (q=7; q <= n; q++)
    {
        if(q%3!=0 &&q%4!=0 && q%7==0)
        {
            p[i] = q;
            i++;
        }
    }
}
void CLuckNumber::print()
{
    int c;
    for(int i=0; i<n; i++)
    {
        if(p[i]==0)
        {
            c = i;
            break;
        }
    }
    for (int i=0; i<c-1; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<p[c-1]<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        CLuckNumber l(n);
        CLuckNumber s(l);
        s.getLuck();
        s.print();
    }
    return 0;
}