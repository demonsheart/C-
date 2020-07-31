#include<stdio.h>
#include<iostream>
using namespace std;

int isNumber(char *p)
{
	int i,flag=0;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>'9'||*(p+i)<'0')
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return(-1);
	else
	{
		int sum=0;
		for(i=0;*(p+i)!='\0';i++)
			sum=sum*10+(*(p+i)-'0');
		return(sum);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch[100];
		cin>>ch;
		char *p=ch;
		int ret;
		ret=isNumber(p);
		cout<<ret<<endl;
	}
}
