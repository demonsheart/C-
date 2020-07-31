#include<iostream>
using namespace std;
int main()
{
	int t,i,j,m[3],n[3];
	char *p[3],str[3][11],fin_str[10000]={'\0'};
	
	cin>>t;
	getchar();
	while(t--)
	{
		for(i=0;i<3;i++)
		{
			cin>>str[i];
			p[i]=str[i];
		}
		
		for(i=0;i<3;i++)
			cin>>m[i]>>n[i];
		
		
		for(i=m[0]-1,j=0;i<n[0];i++,j++)
			fin_str[j]=p[0][i];
		for(i=m[1]-1;i<n[1];i++,j++)
			fin_str[j]=p[1][i];
		for(i=m[2]-1;i<n[2];i++,j++)
			fin_str[j]=p[2][i];
		puts(fin_str);
	}
	return 0;
}

