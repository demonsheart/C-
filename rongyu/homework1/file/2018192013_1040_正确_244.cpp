#include<iostream>
#include<cmath>
using namespace std;

int isNumber(char *str)
{
	int i,len=0,s=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
		if(str[i]<'0'||str[i]>'9')
			return -1;
	}
	for(i=len-1;i>=0;i--)
		s+=(str[i]-'0')*pow(10,len-i-1);
	return s;
}
			
int main()
{
	int t;
	char str[100];
	cin>>t;
	while(t--)
	{
		cin>>str;
		cout<<isNumber(str)<<endl;
	}
	return 0;
}
