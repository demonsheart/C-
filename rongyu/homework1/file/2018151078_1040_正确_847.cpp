#include<iostream>
#include<string.h>
using namespace std;
int isNumber(char *str)
{
	int o,flag1=0;
	int sum=0,count=1;
	o=strlen(str);
	for(int j=1;j<o;j++)
	{
		count=count*10;
	}
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='-')
		{
			i++;
			flag1=1;
			count=count/10;
		}
		if(str[i]<'0' || str[i]>'9')
		{
			flag1=-1;
			break;
		}
		else
		{
			sum=sum+(str[i]-'0')*count;
			count=count/10;
		}
	}
	if(flag1==-1) 
		return -1;
	else if(str[0]=='-') 
		return -sum; 
	else
		return sum;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r;
		char str[100];
		char *s;
		cin>>str;
		s=str;
		r=isNumber(s);
		cout<<r<<endl;
	}
	return 0;
}
