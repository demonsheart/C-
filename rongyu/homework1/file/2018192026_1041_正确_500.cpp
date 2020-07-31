#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char *p[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		int n;
		scanf("%d",&n);
		if(n>=13||n<1)
			printf("error\n");
		else 
			printf("%s\n",p[n-1]);
	}
	return 0;
}
