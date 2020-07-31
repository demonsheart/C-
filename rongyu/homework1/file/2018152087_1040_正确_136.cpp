#include<iostream>
#include<math.h>
using namespace std;
int isNumber(char *p)
{
	int flag=1;
	for(int i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)-'0'<0||*(p+i)-'0'>9)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		return -1;
	else
	{
		int len=0;
		for(int i=0;*(p+i)!='\0';i++)
			len++;
		int sum=0;
		for(int i=0;*(p+i)!='\0';i++)
		{
			sum+=(*(p+i)-'0')*pow(10,len-i-1);
		}
		return sum;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100];
		cin>>s;
		cout<<isNumber(s)<<endl;
	}
	
}
