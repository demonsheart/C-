#include<iostream>
using namespace std;
char *strAdd(char *s1, char *s2);
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
	
		cout<<s1<<endl;
		cout<<s2<<endl; 
		cout<<strAdd(s1,s2)<<endl;
	}
return 0;
}
char *strAdd(char *s1, char *s2)
{
	int len1=strlen(s1),len2=strlen(s2),i;
	char *S=new char[100];
	for(i=0;i<=len1-1;i++)
	S[i]=s1[i];
    for(i=len1;i<=len1+len2-1;i++)
	S[i]=s2[i-len1];
	return S;
}

