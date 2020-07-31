#include<iostream>
using namespace std;
#include<string.h>
char *strAdd(char *p,char*q);
int main()
{
	int t;
	char *p,*q,*s;
	cin>>t;
	getchar();
	while(t--)
	{
		char str1[1000]={'\0'},str2[1000]={'\0'};
		p=str1,q=str2;
		cin>>str1>>str2;
		s=strAdd(p,q);
		cout<<s<<endl;
	}
	return 0;
}

char *strAdd(char *p,char*q)
{
	int i,j,m,n;
	char fin_str[1000]={'\0'};
	cout<<p<<' '<<q<<' ';
	n=strlen(p),m=strlen(q);
	for(i=0,j=0;i<n;i++,j++,p++)
		fin_str[j]=*p;
	for(i=0;i<m;i++,j++,q++)
		fin_str[j]=*q;
	return fin_str;
}

