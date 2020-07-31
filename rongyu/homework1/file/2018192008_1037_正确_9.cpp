#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a;
        int n,i,sum=0;
        cin>>a;
        cin>>n;
        if(a=='I')
        {
            int *p=new int[n];
            for(i=0;i<n;i++)
                cin>>*(p+i);
            for(i=0;i<n;i++)
                sum+=*(p+i);
            sum/=n;
            cout<<sum<<endl;
            delete []p;
        }
        else if(a=='C')
        {
            char max='A';
            char *p=new char[n];
            for(i=0;i<n;i++)
                cin>>*(p+i);
            for(i=0;i<n;i++)
            {
                if(*(p+i)>max)
                {
                    max=*(p+i);
                }
            }
            cout<<max<<endl;
            delete []p;
        }
        else if(a=='F')
        {
            float min;
            float *p=new float[n];
            for(i=0;i<n;i++)
                cin>>*(p+i);
            min=*p;
            for(i=0;i<n;i++)
            {
                if(*(p+i)<min)
                {
                    min=*(p+i);
                }
            }
            cout<<min<<endl;
            delete []p;
        }

    }
    return 0;
}

