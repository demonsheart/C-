#include<iostream>
#include<string>
using namespace std;
struct SCourse
{
    int no;
    string name;
};
class CStudent
{
private:
    /* data */
public:
    int dohomework(int no)
    {
        return no*no;
    }
};

class CTeacher
{
private:
    /* data */
public:
    int homework(string s, SCourse *p, int n)
    {
        for(int i=0; i<n; ++i)
        {
            if(p[i].name == s)
            {
                return p[i].no;
                break;
            }
        }
        return 0;
    }
    int review(int ans)
    {
        if(ans<=60)
            return 44;
        else
            return 88;
    }
};

int main()
{
    int t,n,ans,no,result;
    string st;
    cin>>t;
    SCourse p[t];
    CStudent s;
    CTeacher q;
    for(int i=0; i<t; ++i)
    {
        cin>>p[i].no>>p[i].name;
    }
    cin>>n;
    if(n>t)
        return -1;
    while (n--)
    {
        cin>>st;
        no = q.homework(st,p,t);
        ans = s.dohomework(no);
        result = q.review(ans);
        cout<<result<<endl;
    }
    return 0;
}
