#include<iostream>
using namespace std;
void swap(int &a, int &b, int &c);
int main()
{
int t,a,b,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        swap(a,b,c);
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
void swap(int &a, int &b, int &c)
{
    if(a<b)
    {
        a = a^b;
        b = a^b;
        a = a^b;
    }
    if(a<c)
    {
        a = a^c;
        c = a^c;
        a = a^c;
    }
    if(b<c)
    {
        b = b^c;
        c = b^c;
        b = b^c;
    }
}