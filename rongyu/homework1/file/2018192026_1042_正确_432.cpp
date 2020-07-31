#include<stdio.h>
#include<string.h>
int strCompare(char *p,char*q);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s1[100]={'\0'},s2[100]={'\0'};
		scanf("%s%s",s1,s2);
		char *p=s1,*q=s2;
		printf("%d\n",strCompare(p,q));
	}
	return 0;
}
int strCompare(char *p,char *q)
{
	int n1=strlen(p),n2=strlen(q);
	if(n1>n2)
		return 1;
	else if(n1<n2)
		return -1;
	else
	{
		int num1=0,num2=0,i;
		for(i=0;i<n1;i++)
			if(p[i]>q[i])
				num1++;
			else if(p[i]<q[i])
				num2++;
		if(num1>num2)
			return 1;
		else if(num1<num2)
			return -1;
		else
			return 0;
	}
}

