#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,num[6],i,j,k,l;
    char str1[1000],str2[1000],str3[1000],str4[1000];
    char *p,*q,*s,*x;
    cin>>t;
    getchar();
    while(t--)
    {
    	memset(str4,'\0',1000);
        cin>>str1>>str2>>str3;
		for(i=0;i<6;i++)
		{
			cin>>num[i];
		}
		p=str1;
		q=str2;
		s=str3;
		x=str4;
		for(i=num[0]-1,j=0;i<=num[1]-1;i++,j++)
		{
			*(x+j)=*(p+i);
			k=j+1;
		}
		for(i=num[2]-1;i<=num[3]-1;i++,k++)
		{
			*(x+k)=*(q+i);
			l=k+1;
		}
		for(i=num[4]-1;i<=num[5]-1;i++,l++)
		{
			*(x+l)=*(s+i);
		}
		cout<<x<<endl;
    }
     
    return 0;
}
