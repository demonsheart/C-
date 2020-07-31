#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x[100],y[100],z[100];
    int t,a[3],b[3],l=0,i;
    cin>>t;
    while(t--)
    {
        int j=0;
        cin>>x>>y>>z;
        for(i=0;i<3;i++)
        {
           cin>>*(a+i)>>*(b+i);
           l=l+*(b+i)-*(a+i);
        }
        char *p=new char[l];
        for(i=*a-1;i<*b;i++)
        {
            *(p+j)=*(x+i);
            j++;
        }
        for(i=*(a+1)-1;i<*(b+1);i++)
        {
            *(p+j)=*(y+i);
            j++;
        }
        for(i=*(a+2)-1;i<*(b+2);i++)
        {
            *(p+j)=*(z+i);
            j++;
        }
        cout<<p<<endl;
        delete p;
    }
    return 0;
}


