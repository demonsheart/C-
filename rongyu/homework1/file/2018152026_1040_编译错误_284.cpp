#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char a[100];
    char *p=a;
    scanf("%s",a);
    getchar();
    printf("%d\n",isNumber(a));
    }
    return 0;
}
int isNumber(char *p)
{
    int i,n=strlen(p),flag=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<'0'||*(p+i)>'9')
            return -1;
    }

    for(i=0;i<n;i++)
    {
        if(*(p+i)!='0')
            break;
        else
        {
            int j;
            for(j=i;j<n-i-1;j++)
            {
                *(p+j)=*(p+j+1);
            }
            i--;
            flag++;
        }
    }
    p[n-flag]='\0';
    int member;
    member=atol(p);
    return member;
}
