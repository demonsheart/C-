#include<iostream>
#include<string.h>
using namespace std;
int *strAdd(char *s1,char *s2)
{
	int j,k1,k2,h,i=0;
	char *p = new char[100];
	k1=strlen(s1);
	k2=strlen(s2);
	h=k1+k2;
	for(i=0;i<k1;i++)
	{
		*(p+i)=*(s1+i);
	}
	for(j=0;j<k2;j++)
	{
		*(p+i)=*(s2+j);
		i++;
	}
	for(i=0;i<h;i++)
		cout<<*(p+i);
	cout<<endl;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[100],s2[100];
		cin>>s1>>s2;
		cout<<s1<<" "<<s2<<" ";
		strAdd(s1,s2);	
	}
}
