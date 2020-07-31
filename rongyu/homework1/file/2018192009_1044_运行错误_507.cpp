#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t,i,j;
    int m,n;
    int **num;
    cin>>t;
    while(t--)
    {
        int maxa=-1,mini=1000;
        cin>>m>>n;
        num=new int*[m];
        for(i=0;i<m;i++)
            num[i]=new int[n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>num[i][j];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                if(num[i][j]>maxa)
                    maxa=num[i][j];
                if(num[i][j]<mini)
                    mini=num[i][j];
            }
        cout<<mini<<' '<<maxa<<endl;
        for(i=0;i<n;i++)
            delete[]num[i];
        delete []num;
    }
    return 0;
}

