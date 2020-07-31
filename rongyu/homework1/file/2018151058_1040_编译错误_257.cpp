#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char *p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[20]={'\0'};
		char *p=&s[0];
		cin>>s;
		int x=isNumber(p);
		cout<<x<<endl;

	}
	return 0;
}
int isNumber(char *p)
{
	int len=strlen(p);
	for(int i=0;i<len;i++)
	{
		if(p[i]>'9'||p[i]<'0')
			return -1;
		
	}
	int sum=0;
	for(i=0;i<len;i++)
	{
		sum+=(*(p+i)-'0')*pow(10,len-1-i);
	}
	return sum;	
}
