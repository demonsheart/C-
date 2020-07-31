#include<stdio.h>
#include<malloc.h>
#include<stdlib.h> 
int main()
{
	int t,i,max,min,m,n,p,q,**F;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
        F=new int *[m];
        for(i=0;i<m;i++)
            F[i]=new int[n];
		for(p=0;p<m;p++){
			for(q=0;q<n;q++)
				scanf("%d",&F[p][q]);}
		min=F[0][0];
		max=F[0][0];
		for(p=0;p<m;p++){
			for(q=0;q<n;q++)
			{
				if(min>F[p][q])
					min=F[p][q];
				if(max<F[p][q])
					max=F[p][q];
			}
		}
		printf("%d %d\n",min,max);
	}
	for(i=0;i<m;i++)
		delete []F[i];
	delete []F;
	return 0;
}
