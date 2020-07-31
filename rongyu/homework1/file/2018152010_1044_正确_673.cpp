#include <iostream>
using namespace std;
int main()
{
    int t,m,n,i,j,maxx,minn;
    cin>>t;
    while(t--)
    {
        int **num;
        cin>>m>>n;
        num=new int*[m];
        for(i=0;i<m;i++)
            num[i]=new int[n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            cin>>*(num[i]+j);

        for(i=0,maxx=*num[0],minn=*num[0];i<m;i++)
            for(j=0;j<n;j++)
            {
                if(*(num[i]+j)>maxx)
                    maxx=*(num[i]+j);
                if(*(num[i]+j)<minn)
                    minn=*(num[i]+j);
            }

        cout<<minn<<' '<<maxx<<endl;
    }
    return 0;
}


