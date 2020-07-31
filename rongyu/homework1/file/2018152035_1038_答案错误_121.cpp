#include<iostream>
using namespace std;
int main()
{
	int T,i,a,b,c,d,e,f,l,j;
	char str1[100],str2[100],str3[100];
	char *s1=str1,*s2=str2,*s3=str3;
	char *p=new char[100];
	cin>>T;
	while(T--)
	{
		l=0;
		cin.ignore(10,'\n');
		cin.getline(str1,sizeof(str1));
		cin.getline(str2,sizeof(str2));
		cin.getline(str3,sizeof(str3));
		cin>>a>>b>>c>>d>>e>>f;
		l=b-a+d-c+f-e;
		for(i=a-1,j=0;i<b;i++,j++)
		{
			*(p+j)=*(s1+i);
		}
		for(i=c-1;i<d;i++,j++)
		{
			*(p+j)=*(s2+i);
		}
		for(i=d-1;i<f;i++,j++)
		{
			*(p+j)=*(s3+i);
		}
		*(p+l)='\0';
		cout<<p<<endl;


	}
	delete []p;
}
