#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	char const * month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	cin>>t;
	while(t --){
		int n;
		cin>>n;
		if(n < 1 || n > 12){
			cout<<"error"<<endl;
		}
		else{
			cout<<month[--n]<<endl;
		}
	}
}
