#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		char type;
		int n;
		int i;
		
		cin.ignore(1,'\n');//ABSORBE ENTER
		cin>>type>>n;

		if(type=='I')
		{
			int *in=new int[50];
			int *average=new int;

			*average=0;

			for(i=0;i<n;i++)
			{
				cin>>*(in+i);
				*average=*average+*(in+i);
			}

			*average=*average/n;

			cout<<*average<<endl;

			delete []in;
			delete average;
		}

		if(type=='C')
		{
			char *in=new char[50];
			char *bigch=new char;
			char temp;


			for(i=0;i<n;i++)
			{
				cin.ignore(1,'\n');
				cin>>*(in+i);
			}

			*bigch=*in;

			for(i=0;i<n;i++)
			{
				if(*bigch<*(in+i))
				{
					temp=*bigch;
					*bigch=*(in+i);
					*(in+i)=temp;
				}
			}

			cout<<*bigch<<endl;

			delete []in;
			delete bigch;
		}

		if(type=='F')
		{
			float *in=new float[50];
			float *smallf=new float;
			float temp;


			for(i=0;i<n;i++)
			{
				cin>>*(in+i);
			}

			*smallf=*in;

			for(i=0;i<n;i++)
			{
				if(*smallf>*(in+i))
				{
					temp=*smallf;
					*smallf=*(in+i);
					*(in+i)=temp;
				}
			}

			cout<<setprecision(2)<<*smallf<<endl;

			delete []in;
			delete smallf;
		}
		
	}

	return 0;
}

