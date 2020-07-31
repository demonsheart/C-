#include <iostream>

using namespace std;

int main()
{
    char a[100],b[100],c[100],*p;
    int t,k,l,x,y,m,n,i,j,z=0;
    cin>>t;
    cin.ignore(2,'\n');
    while(t--)
    {
        z=0;
        char *q=new char[100];
        cin>>a>>b>>c;
        cin>>k>>l>>x>>y>>m>>n;
        p=a;
        for(i=k;i<=l;i++)
        {
            q[z]=p[i-1];
            z++;
        }
        p=b;
        for(i=x;i<=y;i++)
        {
            q[z]=p[i-1];
            z++;

        }

        p=c;
        for(i=m;i<=n;i++)
        {
            q[z]=p[i-1];
            z++;
        }
        q[z]='\0';
        for(i=0;q[i]!='\0';i++)
            cout<<q[i];
        cout<<endl;

    }
    return 0;
}

