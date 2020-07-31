#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int isNumber(char p[]);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore(100,'\n');
		char *str;
		cin>>str;
		int tax=isNumber(str);
		cout<<tax<<endl;
	}
}
int isNumber(char p[])
{
	int i;
	int len=strlen(p);
	for(i=0;i<len;i++)
	{
		if(*(p+i)<48)
		{
			return (-1);
			break;
		}
		else if(*(p+i)>57)
		{
			return (-1);
			break;
		}
	}
	if(i==len)
	{
		int targetnum=0;
		for(i=0;i<len;i++)
		{
			targetnum+=(*(p+i)-48)*pow(10,len-1-i);
		}
		return targetnum;
	}
}
