#include <iostream>

using namespace std;

int main()
{
    int t,nmin,nmax,i,j,m,n;
    int num[100][100];
    cin>>t;
    while(t--)
    {
        nmin=9999999;
        nmax=-9999999;
        cin>>m>>n;
        int *p=num[0];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                cin>>p[m*i+j];
                if(p[m*i+j]>nmax)
                    nmax=p[m*i+j];
                else if(p[m*i+j]<nmin)
                    nmin=p[m*i+j];
            }
        cout<<nmin<<" "<<nmax<<endl;
    }
}
