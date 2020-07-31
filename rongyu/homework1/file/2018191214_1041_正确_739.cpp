#include<stdio.h>
int main()
{
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	int t,i,num;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&num);
			if(num>12 ||num<1)
				printf("error\n");
			else
				printf("%s\n",month[num]);
	}
	return 0;
}

