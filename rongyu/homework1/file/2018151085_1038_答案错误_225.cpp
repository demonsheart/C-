#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[100],str2[100],str3[100],str4[100]={0};
		char *ch1,*ch2,*ch3,*ch4;
		int a,b,c,d,e,f,i,j=0;
		cin>>str1>>str2>>str3;
		cin>>a>>b
			>>c>>d
			>>e>>f; 
		ch1=str1;
		ch2=str2;
		ch3=str3;
		ch4=str4;
		for(i=(a-1);i<b;i++)
			*(ch4+j++)=*(ch1+i);
		for(i=(c-1);i<d;i++)
			*(ch4+j++)=*(ch2+i);
		for(i=(e-1);i<f;i++)
			*(ch4+j++)=*(ch3+i);
		for(i=0;i<=j;i++)
			cout<<*(ch4+i);
		cout<<endl;
		
	} 
}
