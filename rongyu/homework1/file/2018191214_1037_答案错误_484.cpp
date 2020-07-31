#include<stdio.h>
#include<malloc.h>
int main()
{
	int t,i,w,p,k,*num,a;
	char *word,h,max;
	float *point,min;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%c%d",&h,&w);
		getchar();
		if(h=='I')
		{
			k=0;
			num=(int*)malloc(w*sizeof(int));
			for(p=0;p<w;p++)
				scanf("%d ",num[p]);
			for(p=0;p<w;p++)
				k=k+num[p];
			a=k/w;
			printf("%d\n",a);
		}
		if(h=='C')
		{
			word=(char*)malloc(w*sizeof(int));
			for(p=0;p<w;p++)
			{
				scanf("%c ",word[p]);
			    getchar();
			}
			max=word[0];
			for(p=0;p<w;p++)
				if(max<word[p])
					max=word[p];
			printf("%c\n",max);
		}
		if(h=='F')
		{
			point=(float*)malloc(w*sizeof(int));
			for(p=0;p<w;p++)
				scanf("%lf ",point[p]);
			min=point[0];
			for(p=0;p<w;p++)
				if(min>point[p])
					min=point[p];
				printf("%.2lf\n",min);
		}
	}
	return 0;
}
