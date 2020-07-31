#include<stdio.h>
#include<malloc.h>
int main()
{
	int t,i,max,min,m,n,p,q,**F,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&m,&n);
		F=(int**)malloc(m*sizeof(int*));
		for(x=0;x<n;x++)
			F[x]=(int*)malloc(n*sizeof(int));
		for(p=0;p<m;p++)
			for(q=0;q<n;q++)
				scanf("%d",&F[p][q]);
			min=F[0][0];
			max=F[0][0];
		for(p=0;p<m;p++)
			for(q=0;q<n;q++)
			{
				if(min>F[p][q])
					min=F[p][q];
				if(max<F[p][q])
					max=F[p][q];
			}
	printf("%d %d\n",min,max);
	}
	return 0;
}





