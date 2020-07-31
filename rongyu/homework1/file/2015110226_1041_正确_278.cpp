#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;



int main(int argc, const char *argv[]) {

		char **arr = new char*[12];
		FOR(i,0,12){
			arr[i] = new char[20];
		}
		arr[0] = "January";
		arr[1] = "February";
		arr[2] = "March";
		arr[3] = "April";
		arr[4] = "May";
		arr[5] = "June";
		arr[6] = "July";
		arr[7] = "August";
		arr[8] = "September";
		arr[9] = "October";
		arr[10] = "November";
		arr[11] = "December";
	int T;
	cin>>T;
	while(T--){

		int a;
		cin>>a;
		if(a<1 || a>12)
			cout<<"error"<<endl;
		else
			cout<<arr[a-1]<<endl;
		




	}

	return 0;
}



