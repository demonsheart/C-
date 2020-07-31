#include <iostream>
using namespace std;
int main()
{
	int t;
	int i,j,k;
	int n1,m1,n2,m2,n3,m3;
	char a[11],b[11],c[11];
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cin>>n1>>m1>>n2>>m2>>n3>>m3;
		char *ia,*ib,*ic;
		ia=a+n1-1;
		ib=b+n2-1;
		ic=c+n3-1;
		for(i=0;i<=m1-n1;i++)		
		{
			cout<<*ia;
			ia++;
		}
		for(i=0;i<=m2-n2;i++)		
		{
			cout<<*ib;
			ib++;
		}
		for(i=0;i<=m3-n3;i++)		
		{
			cout<<*ic;
			ic++;
		}
		cout<<endl;
	}
}
