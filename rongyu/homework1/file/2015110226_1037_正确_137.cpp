#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;


int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){
		string type;
		int len;
		cin>>type;
		cin>>len;
		if(type == "C"){
			char *arr = new char[len];
			FOR(i,0,len){
				cin>>*(arr+i);
				cin.ignore(1);
			}
			sort(arr,arr+len);
			cout<<*(arr+len-1)<<endl;
		}
		if(type == "I"){
			int *arr = new int[len];
			FOR(i,0,len){
				cin>>*(arr+i);
			}
			double avg = accumulate(arr,arr+len,0) / len;
			cout<<avg<<endl;
		}
		if(type == "F"){
			float *arr = new float[len];
			FOR(i,0,len){
				cin>>*(arr+i);
			}
			sort(arr,arr+len);
			cout<<*arr<<endl;
		}
	}

	return 0;
}



