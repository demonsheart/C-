#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		char ch;
		cin>>ch;
		cin>>n;
		if(ch=='C')
		{
			char *array = new char [n];
			for(i=0;i<n;i++)
			{
				cin>>array[i];
			}
			sort(array,array+n);
			cout<<array[n-1]<<endl;
		}
		else if (ch=='I')
		{
			int sum=0;
			int *array = new int [n];
			for(i=0;i<n;i++)
			{
				cin>>array[i];
				sum += array[i];
			}
			sum/=n;
			cout<<sum<<endl;
		}
		else if (ch=='F')
		{
			double *array = new double [n];
			for(i=0;i<n;i++)
			{
				cin>>array[i];
			}
			double min=array[0];
			for(i=0;i<n;i++)
			{
				if(array[i]<min)
					min = array[i];
			}
			cout<< min <<endl;
		}
	}
	return 0;
}
