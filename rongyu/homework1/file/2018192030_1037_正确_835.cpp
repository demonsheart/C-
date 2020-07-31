#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,i;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>n;
        if(c=='I')
        {
            int *p=new int[n];
            int sum=0;
            for(i=0;i<n;i++)
            {
                cin>>*(p+i);
                sum+=*(p+i);
            }
                cout<<sum/n<<endl;
                delete p;
        }
 
        else if(c=='F')
        {
            float *p=new float[n];
            for(i=0;i<n;i++)
                cin>>*(p+i);
            float min=*p;
            for(i=0;i<n;i++)
                if(min>*(p+i))
                    min=*(p+i);
            cout<<min<<endl;
            delete p;
        }
        else if(c=='C')
        {
            char *p=new char[n];
            for(i=0;i<n;i++)
                cin>>*(p+i);
                char max=*p;
            for(i=0;i<n;i++)
                if(max<*(p+i))
                    max=*(p+i);
            cout<<max<<endl;
            delete p;
        }
    }
    return 0;
}


