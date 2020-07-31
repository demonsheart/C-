#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int **num,Min,Max,n,m;
        cin>>n>>m;
        num=new int*[n];
        for(int i=0;i<n;i++)
            num[i]=new int[m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>num[i][j];
        Min=num[0][0];
        Max=Min;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(Min>num[i][j])
                    Min=num[i][j];
                if(Max<num[i][j])
                    Max=num[i][j];
            }
        cout<<Min<<" "<<Max<<endl;
    }
    return 0;
}

