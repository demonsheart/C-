#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{
		char s;
		int n;
		cin>>s>>n;
		if(s=='C')
		{
			char *p;
			int i;
			p=(char *)malloc(n*sizeof(char));
			for(i=0;i<n;i++)
			{
				cin>>p+i;
				cin.ignore(1,'\n');
			}
			char min=*p;
			for(i=0;i<n;i++)
				if(p[i]>min)
					min=p[i];
			cout<<min<<endl;	
		}
		if(s=='I')
		{
			int *p,i,average=0;
			p=(int *)malloc(n*sizeof(int));
			for(i=0;i<n;i++)
				cin>>p[i];
			for(i=0;i<n;i++)
				average+=p[i];
			average/=n;
			cout<<average<<endl;
		}
		if(s=='F')
		{
			float *p;
			p=(float*)malloc(n*sizeof(float));
			int i;
			for(i=0;i<n;i++)
				cin>>p[i];
			float min=*p;
			for(i=0;i<n;i++)
				if(min>p[i])
					min=p[i];
			cout<<min<<endl;	
		}
		
	}
	return 0;
}
