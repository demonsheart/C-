#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        int n;
        int i;
        cin>>c>>n;
        if(c=='C')
        {
            char *p;
            if((p=new char[n])!=NULL)
            {
                for(i=0;i<n;i++)
                    cin>>*(p+i);
            }
            char temp=*p;
            for(i=0;i<n;i++)
            {
                if(temp<*(p+i))
                    temp=*(p+i);
            }
            cout<<temp<<endl;
            delete []p;
        }
        else if(c=='I')
        {
            int *pt;
            pt=new int[n];
            for(i=0;i<n;i++)
            {
                cin>>*(pt+i);
            }
            int sum=0;
            int arr;
            for(i=0;i<n;i++)
            {
                sum+=*(pt+i);
            }
            arr=sum/n;
            cout<<arr<<endl;
            delete []pt;
        }
        else if(c=='F')
        {
            double *ptt;
            ptt=new double[n];
            for(i=0;i<n;i++)
            {
                cin>>*(ptt+i);
            }
            double min=*ptt;
            for(i=0;i<n;i++)
            {
                if(min>*(ptt+i))
                    min=*(ptt+i);
            }
            cout<<min<<endl;
            delete []ptt;
        }
    }
    return 0;
}

