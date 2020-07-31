#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int Char(char *s1,char *s2)
{
	int m=0,n=0,num1,num2;
	num1=strlen(s1);
	num2=strlen(s2);
	if(num1>num2)
		return 1;
    else if(num1<num2)
    	return -1;
    else
    {
    	int i;
    	for(i=0;i<num1;i++)
    	{
    		if(*(s1+i)>*(s2+i))
    			m++;
    		if(*(s1+i)<*(s2+i))
    			n++;
		}
		if(m>n)
			return 1;
		if(m<n)
			return -1;
		if(m==n)
			return 0;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *str1=new char[100],*str2=new char[100];
		cin>>str1>>str2;
		int ret;
		ret=Char(str1,str2);
		cout<<ret<<endl;
	}
	return 0;
}
