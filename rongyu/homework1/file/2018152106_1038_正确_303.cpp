#include<iostream>
using namespace std;

int main()
{
	int i,t;
	cin>>t;
	while(t--)
	{
		char a[10],b[10],c[10];
		char *p1,*p2,*p3;
		int d=0,h,i,j,k,l,m,n;
		cin>>a>>b>>c;
		cin>>h>>i;
		cin>>j>>k;
		cin>>l>>m;
		p1=a;
		p2=b;
		p3=c;
		n=i+k+m-(h+j+l)+3;
		char *p=new char[n];
		for(h=h-1;h<i;)
		{
			p[d++]=p1[h++];
		}
		for(j=j-1;j<k;)
		{
			p[d++]=p2[j++];
		}
		for(l=l-1;l<m;)
		{
			p[d++]=p3[l++];
		}
		cout<<p<<endl;
	}
	return 0;
}
