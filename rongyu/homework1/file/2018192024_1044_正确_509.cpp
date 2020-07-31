#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i,j;
        cin>>m>>n;
        int **num=new int*[m],max=-1000,min=1000;
        for(i=0;i<m;i++)
            num[i]=new int[n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>num[i][j];
                if(num[i][j]>max)
                    max=num[i][j];
                if(num[i][j]<min)
                    min=num[i][j];
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
