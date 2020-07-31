#include<bits/stdc++.h>
using namespace std;
char *strAdd(char *s1,char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore(10,'\n');
		char s1[200]={0};
		char s2[200]={0};
		cin>>s1;
		cin>>s2;
		char *s1_p=s1, *s2_p=s2;
		char *str_p; 
		str_p = strAdd(s1_p,s2_p);
		 
		cout<<s1<<" "<<s2<<" "<<str_p<<endl;
		
	}
	return 0;
}

char *strAdd(char *s1,char *s2)
{
	int i,j;
	static char str[290];
	static char *str_p;
	for(i=0;i<strlen(s1);i++)
	{
		str[i]=s1[i];
	}
	for(j=0;i<strlen(s1)+strlen(s2);i++,j++)
	{
		str[i]=s2[j];
	}
	str[strlen(s1)+strlen(s2)]='\0';
	str_p= str;
	return str_p;
}
