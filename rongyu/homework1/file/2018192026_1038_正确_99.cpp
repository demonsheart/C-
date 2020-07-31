#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char str[3][20],resultStr[100]={'\0'},*p[3];
		int i,j;
		for(i=0;i<3;i++)
		{
			scanf("%s",str[i]);
			p[i]=str[i];
		}
		int m[3],n[3];
		for(i=0;i<3;i++)
			scanf("%d %d",&m[i],&n[i]);
		for(i=m[0]-1,j=0;i<n[0];i++,j++)
			resultStr[j]=p[0][i];
		for(i=m[1]-1;i<n[1];i++,j++)
			resultStr[j]=p[1][i];
		for(i=m[2]-1;i<n[2];i++,j++)
			resultStr[j]=p[2][i];
		puts(resultStr);
	}
	return 0;
}

