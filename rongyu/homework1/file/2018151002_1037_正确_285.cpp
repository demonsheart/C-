#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char type;
		int l;
		cin>>type>>l;
		if(type=='I')
		{
			int *p = new int[l];
			int i=0,s=0;
			for(i=0;i<l;i++)
				cin>>*(p+i);
			for(i=0;i<l;i++)
				s+=*(p+i);
			cout<<s/l<<endl;
		}
		else if(type=='C')
		{
			char *p=new char[l];
			int i=0;
			for(i=0;i<l;i++)
				cin>>*(p+i);
			char k=*p;
			for(i=0;i<l;i++)
				if(*(p+i)>k)
					k=*(p+i);
			cout<<k<<endl;
		}
		else if(type=='F')
		{
			float *p=new float[l];
			int i=0;
			for(i=0;i<l;i++)
				cin>>*(p+i);
			float k=*p;
			for(i=0;i<l;i++)
				if(*(p+i)<k)
					k=*(p+i);
			cout<<k<<endl;
		}
	}
	return 0;
}
