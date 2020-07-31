#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char word;
		int i,count;
		cin>>word>>count;
		if(word=='C')
		{
			char *word1=new char [count];
			for(i=0;i<count;i++)
				cin>>word1[i];
			char max;
			max=word1[0];
			for(i=1;i<count;i++)
			{
				if(word1[i]>max)
					max=word1[i];
			}
			cout<<max<<endl;
			delete []word1;
		}
		if(word=='I')
		{
			int *number=new int[count];
			for(i=0;i<count;i++)
				cin>>number[i];
			int ave,sum=0;
			for(i=0;i<count;i++)
				sum+=number[i];
			ave=sum/count;
			cout<<ave<<endl;
			delete []number;
		}
		if(word=='F')
		{
			double *fl=new double[count];
			for(i=0;i<count;i++)
				cin>>fl[i];
			double min;
			min=fl[0];
			for(i=0;i<count;i++)
			{
				if(fl[i]<min)
					min=fl[i];
			}
			printf("%.1lf\n",min);
			delete []fl;
		}
	}
	return 0;
}
