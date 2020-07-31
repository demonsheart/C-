#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char type;
		cin>>type;
		int n;
		switch(type)
		{
			case 'I':
				{
					cin>>n;
					int *p=new int [n];
					int i;
					for(i=1;i<=n;i++)
						cin>>*(p+i-1);
					int sum=0;
					for(i=1;i<=n;i++)
						sum+=*(p+i-1);
					sum/=n;
					cout<<sum<<endl;
					delete []p;
					break;
				}
			case 'C':
				{
					cin>>n;
					getchar();
					char *p=new char [n];
					int i;
					for(i=1;i<=n;i++)
						cin>>*(p+i-1);
					char max=*p;
					for(i=2;i<=n;i++)
						if(*(p+i-1)>max)
							max=*(p+i-1);
					cout<<max<<endl;
					delete []p;
					break;
				}
			case 'F':
				{
					cin>>n;
					float *p=new float [n];
					int i;
					for(i=1;i<=n;i++)
						cin>>*(p+i-1);
					float min=*p;
					for(i=2;i<=n;i++)
						if(*(p+i-1)<min)
							min=*(p+i-1);
					cout<<min<<endl;
					delete []p;
					break;
				}
		}
	}
	return 0;
}
