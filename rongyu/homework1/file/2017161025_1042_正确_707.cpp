#include<iostream>
#include<string.h>
using namespace std;
int comp(char *s, char *t)
{	int slen,tlen;
	int bigs,bigt;
	bigs=0;
	bigt=0;
	slen=strlen(s);
	tlen=strlen(t);
	if(slen>tlen)
		return 1;
	else if(slen<tlen)
		return -1;
	for(int i=0;i<slen;i++)
	{
		
		if(s[i]<t[i])
			bigt++;
		else if(s[i]>t[i])
			bigs++;
	}
	if(bigs>bigt)
		return 1;
	else if(bigs<bigt)
		return -1;
	else
		return 0; 
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char *s1,*s2;
		s1=new char[99999];
		s2=new char[99999];
		cin>>s1>>s2;
		cout<<comp(s1,s2)<<endl;
		delete s1;
		delete s2;		
	}
}
