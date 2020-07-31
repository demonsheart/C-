#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int isNumber(char *s)
{
	int i,len,n=0;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(isdigit(s[i]))
			n=n*10+s[i]-'0';
		else
			return -1;
	}
	return n;
}

int main()
{
	int t,len;
	char s[100],*p;
	p=s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<isNumber(p)<<endl;
	}
	return 0;
}
