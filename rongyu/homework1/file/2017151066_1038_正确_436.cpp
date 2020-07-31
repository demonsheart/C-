#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	char c1[10],c2[10],c3[10];
    	char c4[50];
    	char *cx1,*cx2,*cx3;
    	int a1,a2,b1,b2,d2,d3;
    	int i,j,k=0;
    	cin>>c1>>c2>>c3;
    	cx1=c1;
    	cx2=c2;
    	cx3=c3;
    	
    	cin>>a1>>a2>>b1>>b2>>d2>>d3;
    for(i=a1-1;i<a2;i++)
    	{
    		*(c4+k++)=*(c1+i);
		}
	for(j=b1-1;j<b2;j++)
    	{
    		*(c4+k++)=*(c2+j);
		}
	for(i=d2-1;i<d3;i++)
    	{
    		*(c4+k++)=*(c3+i);
		}
		
		for(j=0;j<k;j++)
		{
			cout<<*(c4+j);
		}
		cout<<endl;
	}
}

