#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {	
    	int i,j;
    	int n,m;
        int **num;
        cin>>n>>m;
        num=new int*[n];
        for(int i =0;i<n;i++)
        {
            num[i]=new int[m];
        }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>num[i][j];
        int min=num[0][0];
        int max=num[0][0];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {
                if(num[i][j]>max)
                    max=num[i][j];
                if(num[i][j]<min)
                    min=num[i][j];
            }
        for(int i=0;i<n;i++)
            delete []num[i];
        delete []num;
        cout<<min<<" "<<max<<endl;
    }
}

