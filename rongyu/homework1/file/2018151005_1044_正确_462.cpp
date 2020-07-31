#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int **num;
        num=new int*[m];
        int i;
        for(i=1;i<=m;i++)
        {
        	num[i-1]=new int[n];
		}
		for(i=1;i<=m;i++)
		{
			int j;
			for(j=1;j<=n;j++)
			{
				cin>>num[i-1][j-1];
			}
		}
		int min=num[1-1][1-1];
		int max=min;
		for(i=1;i<=m;i++)
		{
			int j;
			for(j=1;j<=n;j++)
			{
				if(num[i-1][j-1]>max)
					max=num[i-1][j-1];
				if(num[i-1][j-1]<min)
					min=num[i-1][j-1];
			}
		}
		cout<<min<<" "<<max<<endl;
    }
    return 0;
}
