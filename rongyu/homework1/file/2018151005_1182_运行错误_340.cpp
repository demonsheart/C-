#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
	//freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char s1[8],s2[8];
		cin>>s1>>s2;
		char *s3=strAdd(s1,s2);
		cout<<s1<<" "<<s2<<" "<<s3<<endl;
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	int l1=strlen(s1);
	int l2=strlen(s2);
	char *s3=new char(l1+l2+1);
	int i,index=0;
	for(i=1;i<=l1;i++)
	{
		index++;
		*(s3+index-1)=*(s1+i-1);
	}
	for(i=1;i<=l2;i++)
	{
		index++;
		*(s3+index-1)=*(s2+i-1);
	}
	index++;
	*(s3+index-1)='\0';
	return s3;
}
