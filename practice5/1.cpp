#include<iostream>
using namespace std;
struct SPoint
{
    int x,y;
};
struct SLine
{
    SPoint p1, p2;
};
int direction(const SLine &ab, const SPoint &c);
int main()
{
    int t,q;
    SPoint s;
    SLine l;
    cin>>t;
    while (t--)
    {
        cin>>l.p1.x>>l.p1.y>>l.p2.x>>l.p2.y;
        cin>>s.x>>s.y;
        q = direction(l,s);
        if(q<0)
         cout<<"clockwise"<<endl;
        else if(q==0)
         cout<<"intersect"<<endl;
        else if(q>0)
         cout<<"anti clockwise"<<endl;
    }
    return 0;
}
int direction(const SLine &ab, const SPoint &c)
{
    return (ab.p2.x-ab.p1.x)*(c.y-ab.p1.y) - (ab.p2.y-ab.p1.y)*(c.x-ab.p1.x);
}