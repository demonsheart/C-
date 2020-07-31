#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 200
int judge(char *p1,char *p2)
{
	int len1,len2;
	len1=strlen(p1);
	len2=strlen(p2);
	if(len1>len2)
		return 1;
	else if(len1<len2)
		return -1;
	else
	{
		int i,num1=0,num2=0;
		for(i=0;i<len1;i++)
		{
			if(p1[i]>p2[i])
				num1++;
			if(p1[i]<p2[i])
				num2++;
		}
		if(num1==num2)
			return 0;
		if(num1>num2)
			return 1;
		else
			return -1;
	}
}
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{ 
		char s1[N],s2[N];
		char *p1,*p2;
		p1=s1,p2=s2;
		cin>>s1>>s2;
		int n;
		n=judge(p1,p2);
		cout<<n<<endl;		
	}
	return 0;
}
