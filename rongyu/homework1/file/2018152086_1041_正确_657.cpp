#include<iostream>

using namespace std;

int main() {
	const char *month[13]= {NULL,"January" ,"February","March","April","May","June","July","August","September","October","November", "December"};
	int t;
	int num;
	cin>>t;
	while(t--) {
		int i;
		cin>>i;
		if(i>=1&&i<=12){
			cout<<month[i]<<endl;
		}
		else cout<<"error"<<endl;
	}
	return 0;
}
