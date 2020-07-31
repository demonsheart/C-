#include<iostream>
using namespace std;
char *strAdd(char *s1,char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[1000],s2[1000],*p;
		cin>>s1;
		cin>>s2;
		p=strAdd(s1,s2);
		cout<<s1<<' '<<s2<<' '<<p<<endl;
	}
	return 0;
}

char *strAdd(char *s1,char *s2)
{
	char *s3=new char[1000];
	int i,j;
	for(i=0,j=0;*(s1+i)!='\0';i++,j++)
		*(s3+j)=*(s1+i);
	for(i=0;*(s2+i)!='\0';i++,j++)
		*(s3+j)=*(s2+i);
	*(s3+j)='\0';
	return s3;
}

