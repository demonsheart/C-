#include<iostream>
int fact(char *S,char *T);
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	cin.get();
	for(i=1;i<=t;i++)
	{
		char ch1[100],ch2[100];
		int s;
		cin>>ch1;
		cin>>ch2;
		s=fact(ch1,ch2);
		cout<<s<<endl;
	}
	return 0;
}
int fact(char *S,char *T)
{
	int len1=0,len2=0,i;
	for(i=0;S[i]!='\0';i++)
		len1++;
	for(i=0;T[i]!='\0';i++)
		len2++;
	if(len1>len2)
		return 1;
	else if(len1<len2)
		return -1;
	else if(len1==len2)
	{
		int s1=0,s2=0;
		for(i=0;S[i]!='\0';i++)
		{
			if(S[i]>T[i])
				s1++;
			else if(S[i]<T[i])
				s2++;
			else if(S[i]==T[i])
				continue;
		}
		if(s1>s2)
			return 1;
		else if(s1<s2)
			return -1;
		else if(s1==s2)
			return 0;
	}
}
