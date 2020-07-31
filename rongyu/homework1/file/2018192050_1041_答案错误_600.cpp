#include<bits/stdc++.h> 
using namespace std;
int BiJiao(char str1[],char str2[]);
int main()
{
	const char *month[12]={"January","February","March","April","May","June","July","August",
	"Septemper","October","November","December"};
	int t,w;
	cin>>t;
	while(t--)
	{
		char **p;
		int a;
		cin>>a;
		if(a>12)
		{
			printf("error\n");
			continue;
		}
		printf("%s\n",month[a-1]);
	}
	return 0;
}
