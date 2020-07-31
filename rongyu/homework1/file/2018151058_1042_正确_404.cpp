#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int compare(char*p,char*s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[20]={'\0'},s2[20]={'\0'};
		cin>>s1>>s2;
		int x;
		x=compare(s1,s2);
		cout<<x<<endl;
		
	}
	return 0;
}
int compare(char*p,char*s)
{
	int i,num1=0,num2=0;
	int len1=strlen(p),len2=strlen(s);
	if(len1>len2)
		return 1;
	if(len1<len2)
		return -1;
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			if(*(p+i)>*(s+i))
				num1++;
			if(*(p+i)<*(s+i))
				num2++;
		}
		if(num1==num2)
			return 0;
		if(num1<num2)
			return -1;
		else return 1;
		
	}

}
