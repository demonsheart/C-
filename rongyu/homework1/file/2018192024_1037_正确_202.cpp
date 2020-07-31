#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        char type;
        cin>>type>>n;
        int *in=new int[n],sum;
        char *ch=new char[n],max;
        float *fl=new float[n],min;
        if(type=='I')
        {
            for(i=0,sum=0;i<n;i++)
            {
                cin>>in[i];
                sum+=in[i];
            }
            cout<<sum/n<<endl;
        }
        else if(type=='C')
        {
            for(i=0;i<n;i++)
                cin>>ch[i];
            for(i=0,max='A';i<n;i++)
            {
                if(ch[i]>max)
                    max=ch[i];
            }
            cout<<max<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
                cin>>fl[i];
            for(i=0,min=10000.0;i<n;i++)
            {
                if(fl[i]<min)
                    min=fl[i];
            }
            cout<<min<<endl;
        }
    }
    return 0;
}

