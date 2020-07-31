#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

char *strAdd(char *s1, char *s2)
{
	char *s3=new char[100];
	strcpy(s3,s1);
	strcat(s3,s2);
	return(s3);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *s1=new char[100],*s2=new char[100];
		cin>>s1>>s2;
		char *s3;
		s3=strAdd(s1,s2);
		cout<<s1<<' ';
		cout<<s2<<' ';
		cout<<s3<<endl;
	}
	return 0;
}
