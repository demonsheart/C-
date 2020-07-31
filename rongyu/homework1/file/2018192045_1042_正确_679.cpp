#include<iostream>
using namespace std;
int conpare(char *s1,char *s2);
#include<string.h>
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *s1=new char[100];
		char *s2=new char[100];
		cin>>s1;
		cin>>s2;
		cout<<conpare(s1,s2)<<endl;
		delete []s1;
		delete []s2;
		

	}
return 0;
}
int conpare(char *s1,char *s2)
{
	int i,flag1=0,flag2=0;
	int len1=strlen(s1),len2=strlen(s2);
	if(len1==len2)
	{
		for(i=0;i<=len1-1;i++)
		{
			if(s1[i]>s2[i])
			flag1++;
            if(s1[i]<s2[i])
			flag2++; 
		}
		if(flag1>flag2)
		return 1;
		if(flag1==flag2)
		return 0;
		if(flag1<flag2)
		return -1;
		
				
	}
	else
	{
		if(len1>len2)
		return 1;
		else if(len1==len2) 
		return 0;
		else
		return -1;
		
	}
}
