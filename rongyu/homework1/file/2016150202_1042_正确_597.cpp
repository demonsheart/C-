#include<iostream>
#include<cstring>
using namespace std;
int strCompare(char *s,char *t);
int main()
{
	char s1[20],s2[20];
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		cout<<strCompare(s1,s2)<<endl;
	}
	return 1;
}

int strCompare(char *s,char *t)
{
	int num=0;
	if(strlen(s)>strlen(t))
		return 1;
	if(strlen(s)<strlen(t))
		return -1;
	while(*s && *t)
	{	if(*s>*t)
			num++;
		else if(*s<*t)
			num--;
		s++;t++;
	}
	return num>0?1:(num==0)?0:-1;
}

