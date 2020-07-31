#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
	char s1[100],s2[100];
	int time;
	cin>>time;
	while(time--)
	{
		cin>>s1>>s2;
		char*s3=strAdd(s1,s2);
		cout<<s1<<' '<<s2<<' '<<s3<<endl;
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	char *s3=new char [200];
	int a,b,c,d;
	a=strlen(s1);
	b=strlen(s2);
	for(c=0;c<a;c++)
		s3[c]=s1[c];
	for(d=0;d<b;d++)
		s3[a+d]=s2[d];
	s3[a+b]='\0';
	return s3;
}
	





