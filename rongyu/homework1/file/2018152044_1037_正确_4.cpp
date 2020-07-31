#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        char s;
        cin>>s;
        int n;
        cin>>n;
        getchar();
        if(s=='C')
        {
            char *arr= new char[n];
            char max='A';
            char *p=arr;
            char ch;
            while((ch=getchar())!='\n')
            {
                if(ch!=' ')
                {
                    *p=ch;
                    p++;
                    if(ch>max)
                        max=ch;
                }
            }
            cout<<max<<endl;
        }
        else if(s=='I')
        {
            int *arr=new int[n];
            int *p=arr;
            int i;
            int a;
            double sum=0;
            for(i=0;i<n;i++)
            {
                cin>>a;
                *p=a;
                sum+=*p;
                p++;
            }
            double result=sum/(n*1.0);
            cout<<result<<endl;
        }
        else
        {
            double *arr=new double[n];
            double *p=arr;
            int i;
            double a;
            double min=10000;
            for(i=0;i<n;i++)
            {
                cin>>a;
                *p=a;
                if(min>*p)
                    min=*p;
                p++;
            }
            cout<<min<<endl;
        }
    }
    return 0;
}

