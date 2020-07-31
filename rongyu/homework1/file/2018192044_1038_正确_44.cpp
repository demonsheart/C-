#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		char a[11],b[11],c[11];
		cin>>a>>b>>c;
		int q1,w1,q2,w2,q3,w3,sum;
		cin>>q1>>w1>>q2>>w2>>q3>>w3;
		sum=w1-q1+w2-q2+w3-q3+3;
		char *p=new char[sum];
		i=0;
		for(j=q1-1;j<w1;j++,i++)
			*(p+i)=a[j];
		for(j=q2-1;j<w2;j++,i++)
			*(p+i)=b[j];
		for(j=q3-1;j<w3;j++,i++)
			*(p+i)=c[j];
		*(p+i)='\0';
		cout<<p<<endl;				
	}
}
