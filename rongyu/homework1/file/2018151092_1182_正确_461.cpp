#include<iostream>
using namespace std;
#include<cstring>

char *strAdd(char *s1, char *s2);
int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		char *s1=new char[100];
		char *s2=new char[100];
		int s1len;
		int s2len;
		int i;

		cin.ignore(1,'\n');
		cin>>s1;
		cin.ignore(1,'\n');
		cin>>s2;

		s1len=strlen(s1);
		s2len=strlen(s2);

		*(s1+s1len)='\0';
		*(s2+s2len)='\0';

		cout<<s1<<' '<<s2<<' ';
		
		cout<<strAdd(s1,s2)<<endl;
	}

	return 0;
}

char *strAdd(char *s1, char *s2)
{
	char *all=new char[100];
	int alllen;
	int s1len;
	int s2len;
	int i;

	s1len=strlen(s1);
	s2len=strlen(s2);
	alllen=strlen(s1)+strlen(s2);

	for(i=0;i<s1len;i++)
	{
		*(all+i)=*(s1+i);
	}

	for(i=s1len;i<alllen;i++)
	{
		*(all+i)=*(s2+i-s1len);
	}

	*(all+alllen)='\0';

	return all;
}

