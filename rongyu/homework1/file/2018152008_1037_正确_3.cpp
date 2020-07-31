#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char ch;
        int size;
        scanf("%c%d",&ch,&size);
        getchar();
        if(ch=='C')
        {
            int i;
            char *str;
            str=new char[size];
            for(i=0;i<size;i++)
            {
                scanf("%c%*c",str+i);
            }
            char max=*str;
            i=1;
            while(i<size)
            {
                if(*(str+i)>max)
                {
                    max=*(str+i);
                }
                i++;
            }
            printf("%c\n",max);
            delete[]str;
        }
        else if(ch=='I')
        {
            int i;
            int *p;
            p=new int[size];
            for(i=0;i<size;i++)
            {
                scanf("%d",p+i);
            }
            int sum=0;
            i=0;
            while(i<size)
            {
                sum+=*(p+i);
                i++;
            }
            printf("%d\n",sum/size);
            getchar();
            delete[]p;
        }
        else if(ch=='F')
        {
            int i;
            double *z;
            z=new double[size];
            for(i=0;i<size;i++)
            {
                scanf("%lf",z+i);
            }
            double min=*z;
            i=1;
            while(i<size)
            {
                if(*(z+i)<min)
                {
                    min=*(z+i);
                }
                i++;
                 
            }
            printf("%g\n",min);
            getchar();
            delete[]z;
        }
    }
    return 0;
}
