#include<iostream>
using namespace std;
int isNumber(char *s);
int main()
{
	char str[20];
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		cout<<isNumber(str)<<endl;
	}
	return 1;
}

int isNumber(char *s)
{
	int sum=0,tag=1;
	char *p;
	if(s[0]=='-')
	{	tag=-1;
		p=s+1;	
	}
	else
	    p=s;
	while(*p)
	{
		if(isdigit(*p))
			sum=sum*10+*p-'0',p++;
		else
		return -1;
	}
	return tag*sum;
}
