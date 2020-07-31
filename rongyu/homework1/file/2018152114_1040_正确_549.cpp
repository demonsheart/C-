#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int isNumber(char *p);
int main()
{
	int t,i,m,n,flag,x;
	char s[100];
	cin>>t;
	while(t--)
	{
		flag=0;
		m=1;
		n=0;
		cin>>s;
		flag=isNumber(s);
		if(flag)
		{
			x=strlen(s);
			for(i=0;i<x;i++)
			{
				//n=n*10+(s[i]-'0');
				n+=(s[x-i-1]-'0')*m;
				m*=10;
			}
			cout<<n<<endl;
		}
	    else
	    {
		cout<<-1<<endl;
	    }
	}
      return 1;
}
int isNumber(char *s)
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]<'0'||s[i]>'9')
		{
			return 0;
		}
	
	}
	return 1;	
}
