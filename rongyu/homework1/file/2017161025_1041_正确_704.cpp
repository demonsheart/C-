#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	string *ss[12]={&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10],&a[11]};
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int select;
		cin>>select;
		if(select>=1&&select<=12)
			{
				cout<<*ss[select-1]<<endl;
		}
		else 
			cout<<"error"<<endl;
	} 
	
}
