#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,m,l;
    char order,max;
    double min,sum,average;
    char *pa;
    double *bp;
    int *cp;
    scanf("%d",&T);
    while(T--)
    {
        getchar();
        scanf("%c",&order);
        scanf("%d",&l);
        if(order=='C')
        {
             pa= new char[l];
            for(i=0,max='A';i<l;i++)
            {   
                getchar();
                scanf("%c",pa+i);
                if(*(pa+i)>=max)
                max=*(pa+i);
            }
            printf("%c\n",max);
            delete []pa;
        }
        else if(order=='F')
        {
             bp= new double[l];
            for(i=0;i<l;i++)
            {
                scanf("%lf",bp+i);
                if(i==0)
                min=*bp;
                if(*(bp+i)<=min)
                min=*(bp+i);
            }
            printf("%.1lf\n",min);
            delete []bp;
        }
        else if(order=='I')
        {
             cp= new int[l];
            for(i=0,sum=0;i<l;i++)
            {
                scanf("%d",cp+i);
                sum+=*(cp+i);
            }
            average=sum/l;
            printf("%.0lf\n",average);
            delete []cp;
        }
    }
}
