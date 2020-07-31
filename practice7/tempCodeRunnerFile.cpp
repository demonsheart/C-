#include<iostream>
#include<cstring>
using namespace std;
class CTelNumber
{
private:
    char *p;
public:
    CTelNumber(char *q);
    CTelNumber(CTelNumber &s);
    ~CTelNumber();
    void print();
};

CTelNumber::CTelNumber(char *q)
{
    p = new char[8];
    for (int i = 0; i < 8; i++)
     p[i] = q[i];  
}
CTelNumber::CTelNumber(CTelNumber &s)
{
    char c;
    if(s.p[0]=='2' || s.p[0]=='3' ||s.p[0]=='4')
     c = '8';
    else 
     c = '2';
    p = new char[9];
    p[0] = c;
    for (int i = 1; i < 9; i++)
     p[i] = s.p[i-1];  
}
CTelNumber::~CTelNumber()
{
    delete [] p;
}
void CTelNumber::print()
{
    cout<<p<<endl;
}
int judge(char p[])
{
    int len = strlen(p);
    if(p[0]=='0' || p[0]=='9' || p[0]=='1' || len!=7)
    return 0;
    return 1;
}
int main()
{
    int t;
    char q[8];
    cin>>t;
    while (t--)
    {
        cin>>q;
        if(judge(q))
        {
            CTelNumber oldtel(q);
            CTelNumber newtel(oldtel);
            newtel.print();
        }
        else
         cout<<"Illegal phone number"<<endl;
    }
    
}