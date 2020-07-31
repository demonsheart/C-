#include<iostream>
using namespace std;

int main(){
	
	int t,num;
	const char *month[13]={NULL,"January","February","March",
						"April","May","June","July","August",
						"September","October","November","December"};
	cin>>t;
	
	while(t--){
		cin>>num;
		
		if(num>12||num<1)
			cout<<"error"<<endl;
		else if(num<=12&&num>=1)
			cout<<month[num]<<endl;
	}
	
	return 0;
}
