#include<bits/stdc++.h> 
using namespace std;
int BiJiao(char str1[],char str2[]);
int main()
{
	int t,w;
	cin>>t;
	while(t--)
	{
		char str1[100],str2[100],*p,*q;
		p=str1,q=str2;
		cin>>str1>>str2;
		w=BiJiao(str1,str2);
		printf("%d\n",w);
	}
}
int BiJiao(char str1[],char str2[])
{
	int l1,l2,flag1=0,flag2=0;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1>l2)
		return 1;
	if(l1<l2)
		return -1;
	if(l1=l2)
	{
		for(int i=0;i<l1;i++)
		{
			if(str1[i]>str2[i])
				flag1++;
			if(str1[i]<str2[i])
				flag2++;
		}
		if(flag1>flag2)
			return 1;
		if(flag2>flag1)
			return -1;
		if(flag2==flag1)
			return 0;
	}
}
	


		
