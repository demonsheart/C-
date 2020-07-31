#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[20]={'\0'},s2[20]={'\0'};
		cin>>s1>>s2;
		char *p,*p1=s1,*p2=s2;
		p=strAdd(p1,p2);
		cout<<p1<<" "<<p2<<" "<<p<<endl;

		
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	int len1=strlen(s1),len2=strlen(s2);
	int i;
	char *p=new char[len1+len2+1];
	p[len1+len2]='\0';
	for(i=0;i<len1;i++)
	{
		*(p+i)=*(s1+i);

	}
	for(i=len1;i<len1+len2;i++)
	{
		*(p+i)=*(s2-len1+i);
	}
	return p;

}
