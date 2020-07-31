#include <bits/stdc++.h>
#define RE register
#define FOR(I,START,END) for(RE int I=START;I<END;++I)
using namespace std;



int main(int argc, const char *argv[]) {

	int T;
	cin>>T;
	while(T--){

		int m,n;
		cin>>m>>n;
		int max = -999;
		int min = 999;
		int **mat = new int*[m];
		FOR(i,0,m){
			mat[i] = new int[n];
			FOR(j,0,n){
				cin>>mat[i][j];
				if(max < mat[i][j])
					max = mat[i][j];
				if(min > mat[i][j])
					min = mat[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;


	}

	return 0;
}



