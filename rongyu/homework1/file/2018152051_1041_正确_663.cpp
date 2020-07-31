#include<iostream>
#include<cstring>
using namespace std;
void create(char month_[][20])
{
	char month[][20]={"January","February","March","April","May","June",
		"July","August","September","October","November","December"};
	for(int i=0;i<12;i++)
	{
		strcpy(month_[i],month[i]);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		if(num>12||num<1)
		{
			cout<<"error"<<endl;
		}
		else
		{
			char str[100];
			char month[12][20];
			create(month);
			cout<<month[num-1]<<endl;
		}
	}	
}
