#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char ch;
		int n,i;
		scanf("%c %d",&ch,&n);
		getchar();
		int *p=new int[n];
		char *q=new char[n];
		float *s=new float[n];
		if(ch=='I')
		{
			int sum=0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&p[i]);
				sum+=p[i];
			}
			getchar();
			printf("%d\n",(int)sum/n);
		}
		else if(ch=='C')
		{
			for(i=0;i<n;i++)
			{
				scanf("%c",&q[i]);
				getchar();
			}
			char *w=&q[0];
			for(i=1;i<n;i++)
				if(*w<q[i])
					w=&q[i];
			printf("%c\n",*w);
		}
		else if(ch=='F')
		{
			for(i=0;i<n;i++)
				scanf("%f",&s[i]);
			getchar();
			float *f=&s[0];
			for(i=1;i<n;i++)
				if(*f>s[i])
					f=&s[i];
			printf("%.1f\n",*f);
		}
		delete []p;
		delete []q;
		delete []s;
	}
	return 0;
}
				

