#include<iostream>
#include<cstring>
using namespace std;

int isNumber(char *p,int n)
{
	int i,flag;
	for(i=0;i<n;i++)
	{
		if(*p>='0'&&*p<='9')
		{
			flag=1;
			p++;
		}
		else
		{
			flag=0;
			return -1;
			break;
		}
	}
	if(flag==1)
		return 1;
}
int zhengshu(char *p,int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		p[i]-='0';
		j=10*j+p[i];
	}
	return j;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[80];
		cin>>s;
		char *p;
		p=s;
		int l=strlen(s);
		if(isNumber(p,l)==-1)
			cout<<"-1"<<endl;
		else 
			cout<<zhengshu(p,l)<<endl;
	}
	return 0;
}
