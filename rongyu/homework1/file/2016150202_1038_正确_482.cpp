#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int t, b[3], e[3], len[3],i;
    char s[3][15], *ans, *p,*begin,*end;
    cin>>t;
    while(t--)
    {
        cin>>s[0]>>s[1]>>s[2];
		for(i=0;i<3;i++)
        {
			cin>>b[i]>>e[i];
			len[i]=e[i]-b[i]+1;
		}
        
        ans=new char[len[0]+len[1]+len[2]+1];
        p=ans;

        for(i=0; i<3; ++i)
		{   begin=s[i]+b[i]-1;
			end=s[i]+e[i]-1;
            while(begin<=end)
			{
                *p=*begin;
                p++;
				begin++;
            }
		}
		*p='\0';
        cout<<ans<<endl;
    }
     
    return 0;
}
