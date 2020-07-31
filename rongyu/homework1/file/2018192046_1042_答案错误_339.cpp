#include<iostream>
#include<cstring>
using namespace std;
int strcmp1(char *s1,char *s2);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s1[100],s2[100];
		cin>>s1>>s2;
		cout<<strcmp1(s1,s2);
		cout<<endl;
	}
	return 0;
}
int strcmp1(char *s1,char *s2)
{
	int len1=strlen(s1),len2=strlen(s2);
	if(len1>len2)
	{
		return 1;
	}
	else if(len1<len2)
	{
		return -1;
	}
	else
	{
		int num1,num2,i;
		for(i=0;i<len1;i++)
		{
			if(s1[i]==s2[i])
			{
				continue;
			}
			else if(s1[i]>s2[i])
			{
				num1++;
			}
			else
			{
				num2++;
			}
		}
		if(num1>num2)
		{
			return 1;
		}
		else if(num1<num2)
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}
