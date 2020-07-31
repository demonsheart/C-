#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int m,n;
        cin>>m;
        cin>>n;
        int **p;
        p=new int*[m];
        int i,j;
        for(i=0;i<m;i++)
            *(p+i)=new int[n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            cin>>p[i][j];
        int max=*(*(p+0)+0);
        int min=*(*(p+0)+0);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(max<*(*(p+i)+j))
                    max=*(*(p+i)+j);
                if(min>*(*(p+i)+j))
                    min=*(*(p+i)+j);
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
