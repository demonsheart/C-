#include<iostream>
#include<cmath>
int isNumber(char *p);
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	cin.get();
	for(i=1;i<=t;i++)
	{
		char ch[100];
		cin>>ch;
		int a;
		a=isNumber(ch);
		if(a==-1)
			cout<<"-1"<<endl;
		else
			cout<<a<<endl;
	}
	return 0;
}
int isNumber(char *p)
{
	int i,k=1;
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]>='0'&&p[i]<='9')
			continue;
		else
		{
			k=-1;
			break;
		}
	}
	if(k==-1)
		return -1;
	else if(k==1)
	{
		int h,s;
		for(h=0;p[h]!='\0';h++)
		{
			if(p[h]=='0')
				continue;
			else
				break;
		}
		s=0;
		for(i=h;p[i]!='\0';i++)
		{
			p[s]=p[i];
			s++;
		}
		for(i=s;p[i]!='\0';i++)
			p[i]='\0';
		int num=0,m=s;
		for(i=0;i<s;i++)
		{
			num=num+(p[i]-48)*pow(10,m-1);
			m--;
		}
		return num;
	}
}
