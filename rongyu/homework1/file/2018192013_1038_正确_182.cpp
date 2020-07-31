#include<iostream>
using namespace std;
int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int a[3],b[3];
		char s1[11],s2[11],s3[11];
		cin.ignore(100,'\n');

		cin>>s1>>s2>>s3;
		for(i=0;i<3;i++)
			cin>>a[i]>>b[i];

		int len;
		len=b[2]-a[2]+b[1]-a[1]+b[0]-a[0]+3;
		char *str=new char[len+1];
		
		for(i=0,j=0,k=0;i<len;i++)
		{
			if(i<b[0]-a[0]+1)
				str[i]=s1[i+a[0]-1];
			else if(i<len-(b[2]-a[2]+1))
			{
				str[i]=s2[j+a[1]-1];
				j++;
			}
			else 
			{
				str[i]=s3[k+a[2]-1];
				k++;
			}
		}
		str[len]='\0';
		cout<<str<<endl;
	}
	return 0;
}
