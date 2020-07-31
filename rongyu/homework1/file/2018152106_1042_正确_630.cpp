#include<iostream>
#include<cstring>
using namespace std;

int comp(char *s,char *t,int m,int n)
{
	int i=0,j=0,r;
	if(m>n)
		return 1;
	if(n>m)
		return -1;
	if(m==n)
	{
		for(r=0;r<n;)
		{
			if(*s>*t)
				i++;
			if(*s<*t)
				j++;
			r++;
			s++;
			t++;
		}
		if(i<j)
			return -1;
		if(i==j)
			return 0;
		if(i>j)
			return 1;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[80],b[80],*p,*q;
		cin>>a>>b;
		int l=strlen(a),k=strlen(b);
		p=a,q=b;
		cout<<comp(p,q,l,k)<<endl;
	}
	return 0;
}
