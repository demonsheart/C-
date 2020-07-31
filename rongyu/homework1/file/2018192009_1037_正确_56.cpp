#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char kind;
        int n;
        cin>>kind;
        cin>>n;
        switch(kind)
        {
        case'C':
            {
                char *p;
                char ch='A';
                p=new char[n];
                for(int i=0;i<n;i++)
                    cin>>p[i];
                for(int i=0;i<n;i++)
                    if(*(p+i)>ch)
                        ch=*(p+i);
                cout<<ch<<endl;
                delete []p;
            }
            break;
        case'I':
            {
                int *p;
                int sum=0;
                p=new int[n];
                for(int i=0;i<n;i++)
                    cin>>p[i];
                for(int i=0;i<n;i++)
                    sum+=*(p+i);
                sum=sum/n;
                cout<<sum<<endl;
                delete []p;
            }
            break;
        case'F':
            {
                double *p;
                p=new double[n];
                double mini=10000;
                for(int i=0;i<n;i++)
                    cin>>p[i];
                for(int i=0;i<n;i++)
                    if(*(p+i)<mini)
                        mini=*(p+i);
                cout<<mini<<endl;
                delete []p;
            }
            break;
        }
    }
    return 0;
}

