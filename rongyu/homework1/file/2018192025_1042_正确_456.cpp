#include<iostream>
using namespace std;
#include<string.h>
int str_compare(char *s,char *t);
int main()
{
	int k,num;
	char str1[1000],str2[1000],*s,*t;
	cin>>k;
	getchar();
	while(k--)
	{
		s=str1,t=str2;
		cin>>str1;
		cin>>str2;
		num=str_compare(s,t);
		cout<<num<<endl;
	}
	return 0;
}

int str_compare(char *s,char *t)
{
	int n,m,sum1=0,sum2=0,i;
	n=strlen(s);
	m=strlen(t);
	if(n>m)
		return 1;
	else if(m>n)
		return -1;
	else if(m==n)
	{
		for(i=0;i<n;i++,s++,t++)
		{
			if(*s>*t)
				sum1+=1;
			else if(*s<*t)
				sum2+=1;
		}
		if(sum1>sum2)
			return 1;
		else if(sum1<sum2)
			return -1;
		else if (sum1==sum2)
			return 0;
	}
}


