#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char str[3][11];
		int i;
		for(i=1;i<=3;i++)
			cin>>str[i-1];
		int a[3],b[3];
		for(i=1;i<=3;i++)
			cin>>a[i-1]>>b[i-1];
		int length=0;
		for(i=1;i<=3;i++)
			length+=(b[i-1]-a[i-1]+1);
		char *new_str=new char[length+1];
		int index=0; 
		for(i=1;i<=3;i++)
		{
			int j;
			for(j=*(a+i-1);j<=*(b+i-1);j++)
			{
				index++;
				*(new_str+index-1)=str[i-1][j-1];
			}
		}
		index++;
		*(new_str+index-1)='\0';
		cout<<new_str<<endl;
	}
	return 0;
}
