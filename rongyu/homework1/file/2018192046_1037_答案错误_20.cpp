#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int num,i;
		char flag;
		cin>>flag>>num;
		if(flag=='I')
		{
			int *GG=new int[num],sum=0;
			for(i=0;i<num;i++)
			{
				cin>>GG[i];
				sum+=GG[i];
			}
			cout<<(sum/num)<<endl;
			delete []GG;
		}
		else if(flag=='C')
		{
			char *GG=new char[num];
			int max=0;
			for(i=0;i<num;i++)
			{
				cin>>GG[i];
				if(GG[i]>max)
				{
					max=GG[i];
				}
			}
			cout<<max<<endl;
			delete []GG;
		}
		else if(flag=='F')
		{
			float *GG=new float[num],min=9999;
			for(i=0;i<num;i++)
			{
				cin>>GG[i];
				if(GG[i]<min)
				{
					min=GG[i];
				}
			}
			cout<<min<<endl;
			delete []GG;
		}
	}
	return 0;
}
