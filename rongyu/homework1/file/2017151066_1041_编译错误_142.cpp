
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string a[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    	string *p;
    	p=a;
    	int i;
    	cin>>i;
    	if(i>0 && i<=12)
    	{
    		cout<<*(p+i-1)<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
	
	}
		return 0;
}
