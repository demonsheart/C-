#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;


int strCmp(const char *s1,const char *s2){
	int l1 = strlen(s1);
	int l2 = strlen(s2);

	if(l1 > l2)
		return 1;
	if(l1 < l2)
		return -1;
	int count = 0;
	FOR(i,0,l1){
		if(s1[i] > s2[i])
			count++;
		if(s1[i] < s2[i])
			count--;
	}
	if(count > 0)
		return 1;
	if(count < 0)
		return -1;
	return 0;
}

int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){

		char *a = new char[100];
		char *b = new char[100];
		cin>>a>>b;
		cout<<strCmp(a,b)<<endl;

	}

	return 0;
}



