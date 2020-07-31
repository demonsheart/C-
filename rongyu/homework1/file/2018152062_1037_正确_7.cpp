#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		getchar();
		char str;
		int n;
		scanf("%c",&str);
		if(str=='I')
		{
			scanf("%d",&n);
			int *p=new int[n];
			int sum=0;
			for(int i=0;i<n;i++)
			{
				scanf("%d",p+i);
				sum+=*(p+i);
			}    
			printf("%d\n",sum*1/n);
			delete []p;
			    
		}
		if(str=='C')
		{
			scanf("%d",&n);
			char *p=new char[n];
			char max='0';
			for(int i=0;i<n;i++)
			{
				getchar();
				scanf("%c",p+i);
				if(*(p+i)>=max)
				   max=*(p+i);
			}
			printf("%c\n",max);
			delete []p;
		}
		if(str=='F')
		{
			scanf("%d",&n);
			float *p=new float[n];
			float min=100000.0;
			for(int i=0;i<n;i++)
			{
				scanf("%f",p+i);
				if(*(p+i)<=min)
				   min=*(p+i);
			}
			printf("%.1f\n",min);
			delete []p;
		}
	}
	return 0;
}
