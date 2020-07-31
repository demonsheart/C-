#include<iostream>
#include<cstring>
#include<cmath>
#include<memory>
using namespace std;

char *strAdd(char *s1, char *s2)
{
	static char a[200];
	int i,l1,l2;
	memset(a,0,sizeof(char)*200);
	l1=strlen(s1);
	l2=strlen(s2);
	strcat(a,s1);
	for(i=l1;i<l1+l2;i++)
	{
		a[i]=s2[i-l1];
	}
	a[l1+l2]='\0';
	return a;
}
int main()
{
	int t;
	char *s1,*s2;
	cin>>t;
	getchar();
	while(t--)
	{
		s1=new char[100];
		s2=new char[100];
		cin>>s1>>s2;
		cout<<s1<<" "<<s2<<" ";
		cout<<strAdd(s1,s2)<<endl;
		delete []s1;
		delete []s2;
		
	}
	return 0;
}
 
