#include<iostream>
using namespace std;

int main()
{
    int i,j,t;
    int a1,b1,a2,b2,a3,b3;
    int len=0,len1=0,len2=0,len3=0;
    char s[30],s1[10],s2[10],s3[10];
	char *p=s,*p1=s1,*p2=s2,*p3=s3;
	
    cin>>t;
    while(t--)
    {
		for(i=0;i<10;i++)
			cin>>s1[i];
        for(i=0;i<10;i++)
			cin>>s2[i];
        for(i=0;i<10;i++)
			cin>>s3[i];

		cin>>a1>>b1;
		len1=b1-a1+1;
		for(i=0;i<len1;i++)
            s[i]=*(p1+a1+i-1);

		cin>>a2>>b2;
		len2=b2-a2+1;
		for(i=len1,j=0;i<len1+len2,j<len2;i++,j++)
            s[i]=*(p2+a2+j-1);

		cin>>a3>>b3;
		len3=b3-a3+1;
		len=len1+len2+len3;
		for(i=len1+len2,j=0;i<len,j<len3;i++,j++)
            s[i]=*(p3+a3+j-1);

        for(i=0;i<len;i++)
        {
            cout<<*(p+i);
        }
        cout<<endl;
    }
	return 0;
}
