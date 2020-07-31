#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,i,j;
        scanf("%d %d",&m,&n);
        int **p=new int*[m];
        for(i=0;i<m;i++)
            p[i]=new int[n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&p[i][j]);
        int *min=&p[0][0],*max=&p[0][0];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                if(p[i][j]>=*max)
                    max=&p[i][j];
                if(p[i][j]<=*min)
                    min=&p[i][j];
                 
            }
        printf("%d %d\n",*min,*max);
    }
    return 0;
}
