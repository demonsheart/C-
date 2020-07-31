#include<stdio.h>
#include<string.h>
int isNumber(char *n);
int main()
{
	int t,i,h,m;
	char word[1000],*word1,word2[1000];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",word);
		word1=word;
		m=strlen(word1);
		if(isNumber(word1)==-1)
			printf("-1\n");
		else
			printf("%d\n",isNumber(word1));
	}
	return 0;
}
int isNumber(char *n)
{
	int num,p,k,q,sum=0,w;
	num=strlen(n);
	for(p=0;p<num;p++)
		if(n[p]>='0'&&n[p]<='9')
			continue;
		else
			return -1;
	for(p=0;p<num;p++)
	{
		w=n[p]-'0';
		for(k=p;k<num-1;k++)
			w=w*10;
		sum=sum+w;
	}
	return sum;
}

