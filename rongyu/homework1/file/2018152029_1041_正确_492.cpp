#include <bits/stdc++.h>
using namespace std;
int main()
{
    char *p[12]={"January","February","March","April","May","June","July",
                    "August","September","October","November","December"};
    int i;
    int T;
    cin>>T;
    while(T--)
    {
	    cin>>i;
	    if(i>=1&&i<=12)
	    	cout<<p[i-1]<<endl;
	    else
	    	cout<<"error"<<endl;
	}
	return 0;    
}

