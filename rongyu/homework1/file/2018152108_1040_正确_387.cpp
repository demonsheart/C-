#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

int isNumber(char *p,int len)
{
	int result=0,flag=1;
	for(int i=0;i<len;i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			result+=(*(p+i)-'0')*pow(10,(len-i-1));
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	return -1;
	else
	return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[100],*p;
		int len;
		cin>>str;
		p=str;
		len=strlen(str);
		if(isNumber(p,len)==-1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<isNumber(p,len)<<endl;
		}
	}
	return 0;
}
