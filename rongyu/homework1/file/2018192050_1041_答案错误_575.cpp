#include<bits/stdc++.h> 
using namespace std;
int BiJiao(char str1[],char str2[]);
int main()
{
	const char *month[13]={"0","January","February","March","April","May","June","July","August",
	"Semtemper","October","Novenber","December"};
	int t,w;
	cin>>t;
	while(t--)
	{
		char **p;
		int a;
		cin>>a;
		if(a>12)
			printf("error\n");
		printf("%s\n",month[a]);
	}
	return 0;
}
