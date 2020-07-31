#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin.ignore(100,'\n');
		char a[20],b[20],c[20];
		cin.getline(a,19,'\n');
		cin.getline(b,19,'\n');
		cin.getline(c,19,'\n');
		int i,h=0;
		int x,y;
		cin>>x>>y;
		char *GG=new char[100];
		char *j;
		j=a;
		for(i=x-1;i<y;i++)
		{
			GG[h]=j[i];
			h++;
		}
		cin>>x>>y;
		j=b;
		for(i=x-1;i<y;i++)
		{
			GG[h]=j[i];
			h++;
		}
		cin>>x>>y;
		j=c;
		for(i=x-1;i<y;i++)
		{
			GG[h]=j[i];
			h++;
		}
		GG[h]='\0';
		printf("%s\n",GG);
		delete []GG;
	}
	return 0;
}
