#include <iostream>

using namespace std;

int main()
{
    int t,nmin,nmax,i,j,m,n;
    cin>>t;
    while(t--)
    {
        nmin=9999999;
        nmax=-9999999;
        cin>>m>>n;
        int **p=new int*[n];
        for(i=0;i<n;i++)
            p[i]=new int [m];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                cin>>p[i][j];
                if(p[i][j]>nmax)
                    nmax=p[i][j];
                else if(p[i][j]<nmin)
                    nmin=p[i][j];
            }
        cout<<nmin<<" "<<nmax<<endl;
    }
}
