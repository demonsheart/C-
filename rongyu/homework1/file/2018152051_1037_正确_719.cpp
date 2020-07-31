#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		getchar();
		char ch;
		scanf("%c",&ch);
		if(ch=='C')
		{
			int arraysize;
			char *array;
			int sum=0;
			scanf("%d",&arraysize);
			array=(char*)malloc(arraysize*sizeof(char));
			getchar();
			if(arraysize==2)
			{
				char a,b;
				char *y1,*y2,*y;
				scanf("%c",&a);
				getchar();
				scanf("%c",&b);
				y1=&a,y2=&b;
				if(a>b)
				{
					printf("%c\n",*y1);
				}
				else
				{
					printf("%c\n",*y2);
				}
			}
			else
			{
				char chg;
				char *poi;
				poi=&array[0];
				for(int count=0;count<2*arraysize-1;count++)
				{
					scanf("%c",poi+count);
					if(*(poi+count)!=' ')
					{
						for(int i=0;i<count;i++)
						{
							if(*(poi+i)!=' ')
							{
								if(*(poi+i)>*(poi+count))
								{
									chg=*(poi+i);
								}
							}
						}
					} 
				}
				printf("%c\n",chg);
				free(array);
			}
		}
		else if(ch=='I')
		{
			int q;
			int *a;
			int sum=0;
			scanf("%d",&q);
			a=(int*)malloc(q*sizeof(int));
			int *p;
			p=&a[0];
			for(int h=0;h<q;h++)
			{
				scanf("%d",p+h);
				sum+=*(p+h);
			}
			sum/=q;
			printf("%d\n",sum);
			free(a);
		}
		else if(ch=='F')
		{
			int qq;
			float *w;
			scanf("%d",&qq);
			w=(float*)malloc(qq*sizeof(float));
			float *pointe;
			pointe=&w[0];
			for(int hh=0;hh<qq;hh++)
			{
				scanf("%f",pointe+hh);
			}
			sort(w,w+qq);
			printf("%.1f\n",*pointe);
			free(w);
		}
	}
}
