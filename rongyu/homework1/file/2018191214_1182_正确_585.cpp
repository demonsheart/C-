#include<stdio.h>
#include<string.h>
char *strAdd(char *s1, char *s2);
int main()
{
	int t,i;
	char word1[1000],word2[1000],*word3,*word4,word5[2000];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",word1);
		scanf("%s",word2);
		word3=word1;
		word4=word2;
		printf("%s ",word1);
		printf("%s ",word2);
		strAdd(word3,word4);
		printf("%s\n",word3);
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	strcat(s1,s2);
	char *p=s1;
	return p;
}
