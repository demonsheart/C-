#include<iostream>
#include<cstring>
using namespace std;

char *strAdd(char *s1,char *s2)
{
	int i,l1,l2;
	l1=strlen(s1);
	l2=strlen(s2);
	char *str=new char[l1+l2+1];
	for(i=0;i<l1+l2;i++)
	{
		if(i<l1)
			str[i]=s1[i];
		else
			str[i]=s2[i-l1];
	}
	str[i]='\0';
	return str;
}

int main()
{
	int t;
	char s1[100],s2[100];
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		char *str=strAdd(s1,s2);
		cout<<s1<<' '<<s2<<' '<<str<<endl;
	}
	return 0;
}
