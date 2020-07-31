#include <iostream>
#include <cstring>
using namespace std;
void compare(char*s,char*t);
int main()
{
	int t;
	int s;
	char a[100],b[100];
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		char *s,*t;
		s=a;
		t=b;
		compare(s,t);
	}
}
void compare(char*s,char*t)
{
	int l1=strlen(s);
	int l2=strlen(t);
	int a=0;
	int b=0;
	if(l1>l2)
	{
		cout<<"1"<<endl;
	}
	else if(l1<l2)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(;*s!='\0';s++)
		{
			if(*s>*t)
			{
				a++;
			}
			else if(*s<*t)
			{
				b++;
			}
			else
			{
				continue;
			}
			t++;
		}
		if(a==b)
		cout<<0<<endl;
		else if(a>b)
		cout<<1<<endl;
		else
		cout<<-1<<endl;
	}
}
