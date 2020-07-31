#include<iostream>
using namespace std;
#include<string.h>
int isNumber(char *p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[100];
		cin>>a;
		cout<<isNumber(a)<<endl;
	}
	return 0;
}
int isNumber(char *p)
{
	int len=strlen(p);
	int i,flag,t=1,num=0;
	for(i=0;i<len;i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
			continue;
		else
			return -1;
	}
	for(i=len-1;i>=0;i--)
	{
		num+=(*(p+i)-'0')*t;
		t*=10;
	}
	return num;	
}
