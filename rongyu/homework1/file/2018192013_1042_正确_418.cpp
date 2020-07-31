#include<iostream>
#include<cstring>
using namespace std;

int strCmp(char *S,char *T)
{
	int i,l1,l2,big=0,small=0;
	l1=strlen(S),l2=strlen(T);
	if(l1>l2)
		return 1;
	else if(l1<l2)
		return -1;
	else
	{
		for(i=0;i<l1;i++)
		{
			if(S[i]>T[i])
				big++;
			if(S[i]<T[i])
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

int main()
{
	int t;
	char s1[100],s2[100];
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		cout<<strCmp(s1,s2)<<endl;
	}
	return 0;
}
