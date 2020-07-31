#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;


char *strAdd(const char *s1,const char *s2){
	char *res = new char[200];
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	FOR(i,0,len1){
		res[i] = s1[i];
	}
	FOR(i,0,len2){
		res[i+len1] = s2[i];
	}
	return res;
}

int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){
		char *s1 = new char[100];
		char *s2 = new char[100];
		cin>>s1>>s2;

		char *res = strAdd(s1,s2);
		cout<<s1<<" "<<s2<<" ";
		cout<<res<<endl;
	}



	return 0;
}



