#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char s1[11],s2[11],s3[11];
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		cin>>s3;
		int a1,b1,a2,b2,a3,b3,l;
		cin>>a1>>b1>>a2>>b2>>a3>>b3;
		l=b1+b2+b3-a1-a2-a3+3;
		char *p=new char[l];
		int i=0,j=0;
		for(i=a1;i<=b1;i++,j++)
			*(p+j)=*(s1+i-1);
		for(i=a2;i<=b2;i++,j++)
			*(p+j)=*(s2+i-1);
		for(i=a3;i<=b3;i++,j++)
			*(p+j)=*(s3+i-1);
		for(i=0;i<l;i++)
			cout<<*(p+i);
		cout<<endl;
	}

	return 0;
}
