#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a;
		int i,count;
		cin>>a>>count;
		if(a=='C')
		{
			char *b=new char [count];
			for(i=0;i<count;i++)
				cin>>b[i];
			char max;
			max=b[0];
			for(i=1;i<count;i++)
			{
				if(b[i]>max)
					max=b[i];
			}
			cout<<max<<endl;
			delete []b;
		}
		if(a=='I')
		{
			int *b=new int[count];
			for(i=0;i<count;i++)
				cin>>b[i];
			int ave,sum=0;
			for(i=0;i<count;i++)
				sum+=b[i];
			ave=sum/count;
			cout<<ave<<endl;
			delete []b;
		}
		if(a=='F')
		{
			double *b=new double[count];
			for(i=0;i<count;i++)
				cin>>b[i];
			double min;
			min=b[0];
			for(i=0;i<count;i++)
			{
				if(b[i]<min)
					min=b[i];
			}
			printf("%.1lf\n",min);
			delete []b;
		}
	}
	return 0;
}
