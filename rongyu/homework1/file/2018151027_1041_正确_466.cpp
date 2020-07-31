#include<iostream>
using namespace std;
main()
{
	int t;
	int i;
	cin>>t;
    const char * month[13]={NULL,"January","February","March",
                                "April","May","June",
                                "July","August","September","October",
                                "November","December"};
    
    while(t--)
    {
	    cin>>i;
	    if(i>12||i<1)
	    	cout<<"error"<<endl;
	    else
	        cout<<month[i]<<endl;
	}
    
}


