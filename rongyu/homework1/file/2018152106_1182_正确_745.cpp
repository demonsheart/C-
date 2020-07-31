#include<iostream>
#include<cstring> 
using namespace std;

char s3[200];
char *strAdd(char *s1, char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[80],s2[80];
		cin>>s1>>s2;
		char *p1,*p2;
		p1=s1;
		p2=s2;
		cout<<s1<<" "<<s2<<" "<<strAdd(p1,p2)<<endl;
		
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	char *tmp;
	tmp=s3;
	while(*s1!='\0')
	{
		*tmp=*s1;
		tmp++;
		s1++;
	}
	while(*s2!='\0')
	{
		*tmp=*s2;
		tmp++;
		s2++;
	}
	*tmp='\0'; 
	return s3;	
}
