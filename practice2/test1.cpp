#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int does(char s1[],char s2[],char s3[],char*str,int a,int b,int c,int d,int e,int f,int n);
int main()
{
	int t,a,b,c,d,e,f,n;
	char str1[11],str2[11],str3[11],*str;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		scanf("%s\n%s\n%s",str1,str2,str3);
		scanf("%d %d \n%d %d\n%d %d",&a,&b,&c,&d,&e,&f);
		n = b + d + f - a - c - e + 4;
		str = (char *) malloc(n *sizeof(char));
		memset(str,'\0',sizeof(str));
		does(str1,str2,str3,str,a,b,c,d,e,f,n);
		printf("%s\n",str);
		getchar();
	}
	free(str);
	str = NULL;
    system("pause");
}
int does(char s1[],char s2[],char s3[],char*str,int a,int b,int c,int d,int e,int f,int n)
{
	int i,j = 0;
	char str0[20];
	for(i = a-1;i < b;i ++)
	    str0[j++] = s1[i];
	str0[j] = '\0';
	strcat(str,str0);
	j = 0;
	for(i = c-1;i < d;i ++)
	    str0[j++] = s2[i];
	str0[j] = '\0';
	strcat(str,str0); 
	j = 0;
	for(i = e-1;i < f;i ++)
	    str0[j++] = s3[i];
	str0[j] = '\0';
	strcat(str,str0); 
	return 0; 
}
