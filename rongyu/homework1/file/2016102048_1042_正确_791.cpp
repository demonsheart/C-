#include<iostream>
#include<cstring>
#include<cmath>
#include<memory>
using namespace std;

int compare(char *s,char *t)
{
	int l1,l2,i,a=0,b=0;
	l1=strlen(s);
	l2=strlen(t);
	if(l1>l2)
		return 1;
	if(l1<l2)
		return -1;
	for(i=0;i<l1;i++)
	{
		if(*(s+i)>*(t+i))
			a+=1;
		if(*(s+i)<*(t+i))
			b+=1;
	}
	if(a>b)
		return 1;
	if(a<b)
		return -1;
	else 
		return 0;
}
int main()
{
	int T;
	char *s,*t;
	cin>>T;
	getchar();
	while(T--)
	{
		s=new char[100];
		t=new char[100];
		cin>>s>>t;
		
		cout<<compare(s,t)<<endl;
		delete []s;
		delete []t;
		
	}
	return 0;
}
 
