#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char c;
        int n,i;
        getchar();
        scanf("%c",&c);
        scanf("%d",&n);
        if(c=='C')
        {
            char *p;
            p=(char*)malloc(n*sizeof(char));
            for(i=0;i<n;i++)
            {
                getchar();
                scanf("%c",p+i);
            }
            char maxword;
            maxword=p[0];
            for(i=1;i<n;i++)
                if(p[i]>maxword)
                    maxword=p[i];
            printf("%c\n",maxword);
        }
        else if(c=='I')
        {
            int *p;
            p=(int*)malloc(n*sizeof(int));
            for(i=0;i<n;i++)
                scanf("%d",p+i);
            int average=0;
            for(i=0;i<n;i++)
                average+=p[i];
            average/=n;
            printf("%d\n",average);
        }
        else if(c=='F')
        {
            float *p;
            p=(float*)malloc(n*sizeof(float));
            for(i=0;i<n;i++)
                scanf("%f",p+i);
            float min;
            min=p[0];
            for(i=1;i<n;i++)
                if(p[i]<min)
                    min=p[i];
            printf("%.1f\n",min);
        }
    }
    return 1;
}
