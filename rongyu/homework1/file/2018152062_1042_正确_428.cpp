#include <iostream>
#include <string.h> 
using namespace std;

int Check(char *s,char *t,int len1,int len2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[100],str2[100];
		cin>>str1>>str2;
		int len1=strlen(str1),len2=strlen(str2);
		cout<<Check(str1,str2,len1,len2)<<endl;
	}
	return 0;
}

int Check(char *s,char *t,int len1,int len2)
{
	if(len1>len2)
	   return 1;
	else if(len1<len2)
	   return -1;
	else if(len1==len2)
	{
		int num1=0,num2=0;
		while(*s)
		{
			if(*s>*t)
			   num1++;
			if(*s<*t)
			   num2++;   
			s++;
			t++;   
		}
		if(num1>num2)
		   return 1;
		if(num1<num2)
		   return -1;
		if(num1==num2)
		   return 0;      
	}      
}
