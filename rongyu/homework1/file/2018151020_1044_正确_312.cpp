#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,**num,max=-10000,min=10000;
        cin>>n>>m;
        num = new int*[n];
        for(int i=0; i<n; i++)
            num[i] = new int[m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                cin>>num[i][j];

                if(num[i][j]<min)
                    min=num[i][j];
                if(num[i][j]>max)
                    max=num[i][j];
            }
        cout<<min<<' '<<max<<endl;

        for(int i=0; i<n; i++)
            delete []num[i];
        delete []num;

    }
    return 0;

}

