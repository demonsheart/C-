#include<iostream>
using namespace std;
#include<string.h>
char *strAdd(char *s1, char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[500],b[500];
		cin>>a>>b;
		cout<<strAdd(a,b)<<endl;
	}
}
char *strAdd(char *s1, char *s2)
{
	cout<<s1<<" "<<s2<<" ";
	int len1,len2,i,j;
	len1=strlen(s1);
	len2=strlen(s2);
	char *p=new char[len1+len2];
	for(i=0,j=0;j<len1;i++,j++)
		*(p+i)=*(s1+j);
	for(i=len1,j=0;j<len2;i++,j++)
		*(p+i)=*(s2+j);	
	*(p+i)='\0';	
	return p;
	delete p;
}
