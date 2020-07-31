#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;

int con(char *tar,char *source,int p){
	
	int s,e;
	cin>>s>>e;
	FOR(i,s-1,e){
		tar[p++] = source[i];
	}
	return p;
}

int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){
		char *a = new char[11];
		char *b = new char[11];
		char *c = new char[11];
		cin>>a>>b>>c;
		char *r = new char[33];
		int p = 0;
		p = con(r,a,p);
		p = con(r,b,p);
		p = con(r,c,p);
		r[p] = '\0';
		cout<<r<<endl;
	}


	return 0;
}



