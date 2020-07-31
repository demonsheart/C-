#include<stdio.h>
#include<string.h>
int than(char*s1,char*t1);
int main()
{
	int t,i;
	char word1[1000],word2[1000],*word3,*word4;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",word1);
		scanf("%s",word2);
		word3=word1;
		word4=word2;
		printf("%d\n",than(word3,word4));
	}
}
int than(char*s1,char*t1)
{
	int num1,num2,k,w1=0,w2=0;
	num1=strlen(s1);
	num2=strlen(t1);
	if(num1>num2)
		return 1;
	else if(num1<num2)
		return -1;
	for(k=0;k<=num1;k++)
	{
		if(s1[k]>t1[k])
			w1++;
		else if(s1[k]<t1[k])
			w2++;
	}
	if(w1>w2)
		return 1;
	else if(w1==w2)
		return 0;
	else if(w1<w2)
		return -1;
}
