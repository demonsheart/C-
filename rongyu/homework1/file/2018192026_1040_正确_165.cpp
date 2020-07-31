#include<stdio.h>
#include<string.h>
#include<math.h>
int isNumber(char *p);
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char str[10]={'\0'},*p;
		scanf("%s",str);
		p=str;
		printf("%d\n",isNumber(p));
	}
	return 0;
}
int isNumber(char *p)
{
	int i,flag=1,sum=0,n=strlen(p);
	for(i=0;i<n;i++)
		if(p[i]<'0'||p[i]>'9')
			flag=0;
	if(flag)
	{
		for(i=0;i<n;i++)
			if(p[i]!='0')
				sum+=(p[i]-'0')*pow(10,n-i-1);
			else
				continue;
		return sum;
	}
	else
		return -1;
}


			
