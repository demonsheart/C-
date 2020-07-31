#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 100
char *strAdd(char *s1, char *s2)
{
	static char str[N];
	static char *p;
	int len1,len2,i,j;
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<len1;i++)
		str[i]=s1[i];
	for(j=0;j<len2;j++,i++)
		str[i]=s2[j];
	str[i]=0;
	p=str;
	return p;
}
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{ 
		char str1[N],str2[N];
		char *p1,*p2;
		static char *p;
		cin>>str1>>str2;
		p1=str1,p2=str2;
		cout<<str1<<" "<<str2<<" ";
		p=strAdd(p1,p2);
		int len1,len2,i;
		len1=strlen(p1);
		len2=strlen(p2);
		for(i=0;i<len1+len2;i++) 
			cout<<p[i];
		cout<<endl;
	}
	return 0;
}
