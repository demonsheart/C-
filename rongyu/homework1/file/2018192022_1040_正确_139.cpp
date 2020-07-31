#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 100
int Judge(char *p)
{
	int i,l,len,sum=0,t=1;
	for(i=0;i<4;i++)
		if(p[i]<'0'||p[i]>'9')
			return -1;
	while(p[0]=='0')
	{
		len=strlen(p);
		if(p[0]=='0')
		{
			for(i=0;i<3;i++)
				p[i]=p[i+1];
			p[len-1]='\0';
		}
	}
	l=strlen(p);
	for(i=l-1;i>=0;i--)
	{
		sum+=(p[i]-'0')*t;
		t*=10;
	}
	return sum;
}
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	while(T--)
	{
		char str[N];
		char *p,*q;
		p=str;
		int i,len;
		for(i=0;i<4;i++)
			cin>>p[i];
		len=Judge(p);
		cout<<len<<endl; 
		
	}
	return 0;
}
