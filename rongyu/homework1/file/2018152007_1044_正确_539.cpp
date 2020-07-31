#include<iostream>
using namespace std;
int main()
{
	int n,m,i,a,max,min,time;
	int **num;
	cin>>time;
	while(time--)
	{
		cin>>n>>m;
		num=new int*[n];
		for(i=0;i<n;i++)
		{
			num[i]=new int [m];
		}
		for(a=0;a<n;a++)
		{
			for(i=0;i<m;i++)
			{
				cin>>*(num[a]+i);
				if(a==0&&i==0)
				{
					max=*(num[a]+i);
					min=*(num[a]+i);
				}
				if(*(num[a]+i)>max)
					max=*(num[a]+i);
				if(*(num[a]+i)<min)
					min=*(num[a]+i);
			}
		}
		cout<<min<<' '<<max<<endl;
	}
	return 0;
}



