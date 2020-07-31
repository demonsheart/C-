#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char type;
        int n;
        cin.ignore(1000,'\n');
        cin>>type;
        cin>>n;
        if(type=='I')
        {
            int *p=new int[n];
            for(int i=0;i<n;i++)
                cin>>*(p+i);
            for(int i=1;i<n;i++)
                *p+=*(p+i);
            *p/=n;
            cout<<*p<<endl;
            delete[] p;
        }
        else if(type=='C')
        {
            char *p=new char[n];
            for(int i=0;i<n;i++)
                cin>>*(p+i);
            for(int i=1;i<n;i++)
                if(*p<*(p+i))
                    *p=*(p+i);
            cout<<*p<<endl;
            delete[] p;
        }
        else if(type=='F')
        {
            double *p=new double[n];
            for(int i=0;i<n;i++)
                cin>>*(p+i);
            for(int i=1;i<n;i++)
                if(*p>*(p+i))
                    *p=*(p+i);
            cout<<*p<<endl;
            delete[] p;
        }
    }
    return 0;
}

