#include<stdio.h>
void zhengshu(int b);
void fudian(int c);
void zifu(int d);
int main()
{
	int time,a;
	char size;
	scanf("%d",&time);
	getchar();
	while(time--)
	{
		scanf("%c %d",&size,&a);
		if(size=='I')
			zhengshu(a);
		else if(size=='F')
			fudian(a);
		else
			zifu(a);
	}
	return 0;
}
void zhengshu(int b)
{
	int *i=new int [b];
	int d=0;
	for(int c=0;c<b;c++)
	{
		scanf("%d",&i[c]);
		d=d+i[c];
	}
	printf("%d\n",d/b);
	getchar();
}
void fudian(int c)
{
	float *f=new float[c];
	int d;
	float a;
	for(d=0;d<c;d++)
	{
		scanf("%f",&f[d]);
	}
	a=f[0];
	for( d=0;d<c;d++)
	{
		if(f[d]<a)
			a=f[d];
	}
	printf("%.1f\n",a);
	getchar();
}
void zifu(int d)
{
	char *c=new char[d];
	char f;
	int e;
	for ( e=0;e<d;e++)
	{
		getchar();
		scanf("%c",&c[e]);
	}
	f=c[0];
	for( e=0;e<d;e++)
	{
		if(c[e]>f)
			f=c[e];
	}
	printf("%c\n",f);
	getchar();
}



	


			
	



