#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        int n,i,j,k;
        cin>>c;
        if(c=='C')
        {
            cin>>n;
            char r;
            char *b=new char[n];
            for(i=0;i<n;i++)
            {
                cin>>*(b+i);
            }   
            r=*(b+0);
            for(i=0;i<n;i++)
            {
                if(*(b+i)>r)
                {
                    r=*(b+i);
                }
            }
            cout<<r<<endl;
        }
        else if(c=='I')
        {
            int sum=0,h=0; 
            cin>>n;
            int *a=new int[n];
            for(j=0;j<n;j++)
            {
                cin>>*(a+j);
            }
            for(j=0;j<n;j++)
            {
                sum=sum+*(a+j);
            }
            h=sum/n;
            cout<<h<<endl; 
        }
       else if(c=='F')
        {
            double y;
            cin>>n;
            double *d=new double[n];
        for(i=0;i<n;i++)
            {
                cin>>*(d+i);
            }   
            y=*(d+0);
        for(i=0;i<n;i++)
            {
                if(*(d+i)<y)
                {
                    y=*(d+i);
                }
            }
            cout<<y<<endl;
        }
    }
    return 0;
}
 
