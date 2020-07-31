#include<stdio.h>
#define N 10000
int main()
{
	int t,n,i,sum,ave;
	char c1,maxc;
	
	int a[N];
	double b[N],min;
	char str[N];
	
	
	scanf("%d",&t);
	while(scanf("%c %d",&c1,&n)!=EOF)
	{
		if(c1=='I'){
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);	
			
			sum=0;
			for(i=0;i<n;i++)
				sum+=a[i];
			printf("%d\n",sum/n);
			t--;
		}
		
		else if(c1=='C'){
			getchar();
			gets(str);
			
			maxc=str[0];
			
			for(i=0;i<n;i++)
				if(str[i]>maxc)
					maxc=str[i];
			
			printf("%c\n",maxc);
			t--;
			
		}
		
		else if(c1=='F'){
			for(i=0;i<n;i++)
				scanf("%lf",&b[i]);
			min=b[0];
			for(i=0;i<n;i++)
				if(b[i]<min)
					min=b[i];
			printf("%.1f\n",min);
			t--;
		}
		if(t==0)
			break;
	
	}	
} 
