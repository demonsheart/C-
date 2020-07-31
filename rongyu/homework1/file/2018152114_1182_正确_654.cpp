#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
char *strAdd(char *, char *);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		char str1[1000],str2[1000];
		char* ans;
		cin>>str1>>str2;
		ans=strAdd(str1,str2);
		cout<<str1<<" "<<str2<<" "<<ans<<endl;
	}
}
char *strAdd(char *s1, char *s2)
{
	char s3[1000];
	char* p=s3;
	for(int i=0;i<strlen(s1);i++)
	{
		*p=*(s1+i);
		p++;
	}
	   
	for(int i=0;i<strlen(s2);i++)
	{
	    *p=*(s2+i);
	    p++;
	}
	*p='\0';
	return s3;
}
