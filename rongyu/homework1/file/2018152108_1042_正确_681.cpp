#include<iostream>
#include<cstring>
using namespace std;

int compare(char *p1,char *p2,int len1,int len2)
{
	int n=0,m=0;
	if(len1>len2)
	return 1;
	else if(len1<len2)
	return -1;
	else
	{
		for(int i=0;i<len1;i++)
		{
			if(*(p1+i)>*(p2+i))
			{
				n++;
			}
			else if(*(p1+i)<*(p2+i))
			{
				m++;
			}
		}
		if(n<m)
		return -1;
		else if(n>m)
		return 1;
		else
		return 0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[100],s2[100],*p1,*p2;
		int len1,len2;
		cin>>s1>>s2;
		p1=s1;
		p2=s2;
		len1=strlen(s1);
		len2=strlen(s2);
		cout<<compare(p1,p2,len1,len2)<<endl;
	} 
	return 0;
} 
