#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char ch;
        int n;
        scanf("%c%d%*c",&ch,&n);
        if(ch=='I')
        {
            int sum=0,i;
            int *p=new int[n];
            for(i=0;i<n;i++)
            {
                scanf("%d",p+i);
                sum+=*(p+i);
            }
            printf("%d\n",sum/n);
            delete []p;
            getchar();
        }
        else if(ch=='C')
        {
            int i;
            char *p=new char[n];
            char max;
            for(i=0;i<n;i++)
            {
                scanf("%c%*c",p+i);
                if(i==0)
                    max=*(p+i);
                if(max<*(p+i))
                    max=*(p+i);
            }
            printf("%c\n",max);
            delete []p;
        }
        else if(ch=='F')
        {
            int i;
            float min=10000000;
            float *p=new float[n];
            for(i=0;i<n;i++)
            {
                scanf("%f",p+i);
                if(i==0)
                    min=*(p+i);
                if(min>*(p+i))
                    min=*(p+i);
            }
            printf("%g\n",min);
            getchar();
            delete []p;
        }
    }

    return 0;

}

