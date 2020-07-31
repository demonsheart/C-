#include<iostream>
using namespace std;
char *strAdd(char *s1, char *s2)
{
	static char s[200]={0};
	int len=0;
	for(int i=0;*(s1+i)!='\0';i++)
	{
		*(s+len)=*(s1+i);
		len++;
	}
	for(int i=0;*(s2+i)!='\0';i++)
	{
		*(s+len)=*(s2+i);
		len++;
	}
	*(s+len)='\0';
	return s;
}
int main()
{
	int t;
	cin>>t;;
	while(t--)
	{
		char s1[100];
		cin>>s1;
		char s2[100];
		cin>>s2;
		char *p=strAdd(s1,s2);
		cout<<s1<<" "<<s2<<" ";
		cout<<p<<endl;
	
	}
}
