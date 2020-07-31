#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int strCompare(char *s1, char *s2);
int main()
{
	//freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char s1[16],s2[16];
		cin>>s1>>s2;
		cout<<strCompare(s1,s2)<<endl;
	}
	return 0;
}
int strCompare(char *s1, char *s2)
{
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1>l2)
		return 1;
	else if(l1<l2)
		return -1;
	else
	{
		int big=0,small=0;
		int i;
		for(i=1;i<=l1;i++)
		{
			if(*(s1+i-1)>*(s2+i-1))
				big++;
			if(*(s1+i-1)<*(s2+i-1))
				small++;
		}
		if(big>small)
			return 1;
		else if(big<small)
			return -1;
		else
			return 0;
	}
}
