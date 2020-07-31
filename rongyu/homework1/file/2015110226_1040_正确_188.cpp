#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;

int isNumber(const char *s){
	int len = strlen(s);
	int val = 0;
	FOR(i,0,len){
		if(!isdigit(s[i]))
			return -1;
		val *= 10;
		val += s[i]-'0';
	}
	return val;
}

int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){
		char *s = new char[100];
		cin>>s;
		cout<<isNumber(s)<<endl;
	}

	return 0;
}



