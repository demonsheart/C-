#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[1000],b[1000];
       	char *S=a,*T=b;
    	int m,n,i;
    	int x=0,y=0;
    	cin>>a>>b;
    	m=strlen(a);//m是第一字符串的长度 
    	n=strlen(b);//n是第二字符串的长度 
    	if(m>n)
    	    cout<<"1"<<endl;
    	else if(m<n)
    	    cout<<"-1"<<endl;
    	else
		{
        	for(i=0;i<m;i++)
			{
        	    if(*(S+i)>*(T+i))
               		x++;
               	if(*(S+i)<*(T+i))
               		y++;
		  	}
		  
          	if(x==y)
          		cout<<"0"<<endl;
          	if(x>y)
          		cout<<"1"<<endl;
          	if(x<y)
          		cout<<"-1"<<endl;
		}
	}
    return 0;
}
